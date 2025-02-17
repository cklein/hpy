.PHONY: all
all: hpy.universal

.PHONY: hpy.universal
hpy.universal:
	python3 setup.py build_ext -if

.PHONY: dist-info
dist-info:
	python3 setup.py dist_info

debug:
	HPY_DEBUG_BUILD=1 make all

autogen:
	python3 -m hpy.tools.autogen .

cppcheck-build-dir:
	mkdir -p $(or ${CPPCHECK_BUILD_DIR}, .cppcheck)

.PHONY: cppcheck
cppcheck: cppcheck-build-dir
	# azure pipelines doesn't show stderr, so we write the errors to a file and cat it later :(
	$(eval PYTHON_INC = $(shell python3 -q -c "from sysconfig import get_paths as gp; print(gp()['include'])"))
	cppcheck --version
	cppcheck \
		-v \
		--error-exitcode=1 \
		--cppcheck-build-dir=$(or ${CPPCHECK_BUILD_DIR}, .cppcheck) \
		--output-file=$(or ${CPPCHECK_BUILD_DIR}, .cppcheck)/output.txt \
		--enable=warning,performance,portability,information,missingInclude \
		--inline-suppr \
		--suppress=allocaCalled \
		-I /usr/local/include \
		-I ${PYTHON_INC} \
		-I hpy/devel/include/ \
		-I hpy/devel/include/hpy/ \
		-I hpy/devel/include/hpy/cpython/ \
		-I hpy/devel/include/hpy/universal/ \
		-I hpy/devel/include/hpy/runtime/ \
		-I hpy/universal/src/ \
		-I hpy/debug/src/ \
		--force \
		-D NULL=0 \
		-D HPY_ABI_CPYTHON \
		. || (cat $(or ${CPPCHECK_BUILD_DIR}, .cppcheck)/output.txt && false)

infer:
	python3 setup.py build_ext -if -U NDEBUG | compiledb
	# see commit cd8cd6e for why we need to ignore debug_ctx.c
	@infer --fail-on-issue --compilation-database compile_commands.json --report-blacklist-path-regex "hpy/debug/src/debug_ctx.c"

valgrind:
	PYTHONMALLOC=malloc valgrind --suppressions=hpy/tools/valgrind/python.supp --suppressions=hpy/tools/valgrind/hpy.supp --leak-check=full --show-leak-kinds=definite,indirect --log-file=/tmp/valgrind-output python3 -m pytest --valgrind --valgrind-log=/tmp/valgrind-output test/

porting-example-tests:
	cd docs/porting-example/steps && python3 setup00.py build_ext -i
	cd docs/porting-example/steps && python3 setup01.py build_ext -i
	cd docs/porting-example/steps && python3 setup02.py build_ext -i
	cd docs/porting-example/steps && python3 setup03.py --hpy-abi=universal build_ext -i
	python3 -m pytest docs/porting-example/steps/ ${TEST_ARGS}

docs-examples-tests:
	cd docs/examples/simple-example && python3 setup.py --hpy-abi=universal install
	cd docs/examples/mixed-example  && python3 setup.py install
	cd docs/examples/snippets       && python3 setup.py --hpy-abi=universal install
	python3 -m pytest docs/examples/tests.py ${TEST_ARGS}
