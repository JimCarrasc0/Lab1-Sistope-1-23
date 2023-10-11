
/*
To do:
    -Implementar prints
    -Escribir archivo
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "funciones.h"


int main(int argc, char* argv[]){
    if(argc<2){
        printf("Error: Argumentos insuficientes\n");
        exit(1);
    }
    
    int opt, N;
    int flagD = 0;
    char * archEntrada, * archSalida;

    while((opt=getopt(argc, argv, "N:i:o:D"))!=-1){
        switch(opt){
            case 'N':
                N = atoi(optarg);
                break;
            case 'i':
                archEntrada = optarg;
                break;
            case 'o':
                archSalida = optarg;
                break;
            case 'D':
                flagD = 1;
                break;
            case '?':
                if (optopt == 'N' || optopt == 'i' || optopt == 'o') {
                    fprintf(stderr, "Opción -%c requiere un argumento.\n", optopt);
                }
                else if(isprint(optopt)){
                    fprintf(stderr, "Opción -%c desconocida.\n", optopt);
                }
                else{
                    fprintf(stderr, "Opcion No válida -%c.\n", optopt);
                }
                return 1;

            default:
                return 1;

        }
    }

    particulas * entrada;
    int part = lecturaArchivo (archEntrada, &entrada);
    
    particulas * salida;
    ordenarEnergiaActual(entrada, N, &salida, part);
    
    particulas * salidaFinal;
    calcularEnerg (salida, N, &salidaFinal, part);

    /*maximo(salidaFinal, N);
    
    for(int i = 0; i<N; i++){
        printf("Particula [%d] = %lf \n", i, salidaFinal[i].energia );
    }
    */

    escribirArchivo(N, salidaFinal, archSalida);

    if(flagD){
        imprimirGrafico(N, salidaFinal);
    }

    free(salidaFinal);
    free(salida);
    free(entrada);

    return 0;
}