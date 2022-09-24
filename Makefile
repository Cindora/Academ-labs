lab1: src.o
	gcc -o lab src.o
src.o: src.c
	gcc -c src.c 