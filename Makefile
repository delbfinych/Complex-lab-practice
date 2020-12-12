CFLAGS=-c -std=c99 -Wall  -g

all: main.o complex.o
	gcc -o a.out main.o complex.o -lm
	
main.o: main.c 
	gcc  $(CFLAGS) -o main.o main.c

complex.o: complex.c
	gcc  $(CFLAGS) -o complex.o complex.c  

clean: 
	rm -rf *.o a.out
