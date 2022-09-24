lab1: src.o
	gcc -o lab1 src.o
src.o: src.c
	gcc -c src.c 