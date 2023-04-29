.PHONY: purge configure build test
purge:
	./purge.sh
configure:
	./configure.sh $(filter-out $@,$(MAKECMDGOALS))
build:
	./build.sh $(filter-out $@,$(MAKECMDGOALS))
test:
	cd build && ctest --output-on-failure
%:
	@:
