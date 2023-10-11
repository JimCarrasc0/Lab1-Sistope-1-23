
/*
To do:
    -Programar para linux
    -Implementar GetOpt
    -Implementar FLAGS
    -Impementar calculo Ei
    -Implementar método de ordenamiento
    -Implementar prints
    -Escribir archivo
    -Makefile
*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(int argc, char* argv[]){
    if(argc<1){
        printf("Error: Argumentos insuficientes\n");
        exit(1);
    }
    
    printf("%s\n",argv[1]);


    // Se solicita el numero de particulas (N) a agregar
    //int N = atoi(argv[1]);
    int N=10;
    
    int MIN_ENERGIA = 0.001 / N;

    return 0;
}