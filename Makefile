CFLAGS =-Wall -Werror -c
TFLAGS =-I thirdparty -I src
.PHONY: all test clean

%.o: %.c ctest.h
	$(CC) $(CCFLAGS) -c -o $@ $<


all: bin/hangman

build/hangman.d: src/hangman.cpp
	mkdir build -p
	g++ -Wall -Werror -c -o build/hangman.o src/hangman.cpp
build/category.d: src/category.cpp
	mkdir build -p
	g++ -Wall -Werror -c -o build/category.o src/category.cpp
build/game.d: src/game.cpp
	mkdir build -p
	g++ -Wall -Werror -c -o build/game.o src/game.cpp
bin/hangman: build/hangman.o build/category.o build/game.o
	mkdir bin -p
	g++ -Wall -Werror -o bin/hangman build/game.o build/category.o build/hangman.o 

test: hangman-test
	
hangman-test: build/hangman-test.o build/game-test.o build/category-test.o
	mkdir bin -p
	gcc build/category-test.o build/game-test.o build/hangman-test.o  -o bin/hangman-test
build/category-test.o: test/category-test.c
	gcc $(TFLAGS) $(CFLAGS) test/category-test.c -o build/category-test.o
build/game-test.o: test/game-test.c
	gcc $(TFLAGS) $(CFLAGS) test/game-test.c -o build/game-test.o
build/hangman-test.o: test/hangman-test.c
	gcc $(TFLAGS) $(CFLAGS) test/hangman-test.c -o build/hangman-test.o

clean: 
	rm build/*

-include build/hangman.d
-include build/category.d
-include build/game.d


