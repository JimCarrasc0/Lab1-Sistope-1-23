FLAGS = -Wall -lm

Lab1: Lab1.c funciones.o
	gcc $(FLAGS) -o Lab1 Lab1.c funciones.o -lm
    
funciones.o: funciones.c
	gcc -c $(FLAGS) funciones.c -lm
    
clear:
	rm -f Lab1 *.o
