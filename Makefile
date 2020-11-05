all: clean reload build exec

mkdir_build:
	[ -d ./cmake-build-debug ] | mkdir -p cmake-build-debug

build:
	cd cmake-build-debug;mingw32-make

exec:
	./cmake-build-debug/c++.project

clean:
	rm -rf cmake-build-debug

reload: mkdir_build
	cd cmake-build-debug;cmake -G "MSYS Makefiles" ..

fast_build:
	cd cmake-build-debug;mingw32-make

run: fast_build exec