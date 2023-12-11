build_mode=debug

all: algolib
	if [ ! -d build ]; then \
		mkdir build; \
	fi
	gcc main.c $(PWD)/algo/target/${build_mode}/libalgo.so -o build/main

algolib:
	cd algo && cargo build

