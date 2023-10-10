
#include <stdio.h>
#include <stdlib.h>



typedef struct particulas{
    int posicion;
    int energia;
} particulas;

//Entrada: Nombre de archivo (char), lista de particulas (struct particulas)
//Salida: un int de la cantidad de particulas, y la lista de particulas que se trabajan por referencia
//Descripcion: Funcion que lee un archivo y guarda particulas en una lista de particulas
int lecturaArchivo(char * nombre, particulas * entrada){
    FILE * file = NULL;
    file = fopen(nombre, 'r');
    //En caso de que haya un error en el archivo
    if(file == NULL){
        printf("Error al abrir el archivo\n");
        exit(1);
    }
    //Se define la variable part
    int part;
    fscanf(file, "%d", &part);
    // Se asigna espacio para la lista de particulas
    entrada=malloc(sizeof(particulas)*part);

    for(int i=0;i<part;i++){
        fscanf(file, "%d %d", &entrada[i].posicion, &entrada[i].energia);
    }
    fclose(file);
    //Se retorna la cantidad de particulas existentes
    return part;

}

int index(int posicion, particulas * entrada, int part){
    for(int i=0;i<part;i++){
        if(entrada[i].posicion == posicion){
            return i;
        }
    }

    return -1;
}

void calcularEnergActual(particulas * entrada, int N, particulas * salida, int part){
    //se asume q salida viene con N espacios reservados, todos en 0.
    int indice;
    for(int i=0;i<N;i++){
        indice = index(i, entrada, part);
        if (indice!=-1){
            salida[i].energia = entrada[indice].energia;
            salida[i].posicion = i;
        }
    }
}
/*
6
4 81
8 10
10 100
7 35
11 12
5 8

10^3 * Ej 
-----------------
N raiz(|j-i| + 1)



0 0 Ej (valor propio = 0) + Ei -> E1 discipado + E2 discipado + E3 discipado + ... + E11 discipado
1 0 Ej (valor propio = 0) + Ei -> E0 discipado + E2 discipado 
2 0 
3 0 
4,81 Ej (valor propio = 81) + Ei -> E0 discipado + E1 discipado + E2 discipado + E3 discipado + E5 discipado + E6 discipado....... 
5,8
6 0
7,35
8,10
9 0
10,100
11,12
*/

void calcularEnerg(particulas * entrada, int N, particulas * salida, int part){
    
}

