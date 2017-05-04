all: bin/hangman

build/hangman.d: hangman.cpp
	mkdir build -p
	g++ -Wall -c -o build/hangman.o hangman.cpp

bin/hangman: hangman.o category.o game.o
	mkdir bin -p
	g++ -Wall -Werror -o bin/hangman game.o category.o hangman.o 

.PHONY: clean
clean: 
	rm build/*

-include main.d
-include deposit.d

