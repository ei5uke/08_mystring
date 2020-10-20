all: main.o work08.o
	gcc -o work08 main.o work08.o

main.o: main.c work08.h
	gcc -c main.c

work08.o: work08.c work08.h
	gcc -c work08.c