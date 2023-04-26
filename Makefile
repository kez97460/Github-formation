main: main.o
	gcc main.o -g -o main -lm

main.o: main.c
	gcc -c -g main.c