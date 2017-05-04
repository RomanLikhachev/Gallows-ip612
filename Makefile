all: bin/hangman

build/hangman.d: hangman.cpp
	mkdir build -p
	g++ -Wall -c -o build/hangman.o hangman.cpp
build/category.d: category.cpp
	mkdir build -p
	g++ -Wall -c -o build/category.o category.cpp
build/game.d: game.cpp
	mkdir build -p
	g++ -Wall -c -o build/game.o game.cpp
bin/hangman: build/hangman.o build/category.o build/game.o
	mkdir bin -p
	g++ -Wall -o bin/hangman build/game.o build/category.o build/hangman.o 
.PHONY: clean
clean: 
	rm build/*

-include build/hangman.d
-include build/category.d
-include build/game.d


