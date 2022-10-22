all: main

main: obj/ obj/bmp.o obj/main.o
	gcc obj/bmp.o obj/main.o -o main
obj/bmp.o:
	gcc -c src/bmp.c -o obj/bmp.o
obj/main.o:
	gcc -c src/main.c -o obj/main.o
obj/:
	mkdir obj
clean:
	rm obj/*.o hw_01 -rf obj/
