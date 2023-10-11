FLAGS = -Wall -lm

main: Lab1.c funciones.o
	gcc $(FLAGS) -o main Lab1.c funciones.o -lm
    
funciones.o: funciones.c
	gcc -c $(FLAGS) funciones.c -lm
    
clear:
	rm -f main *.o