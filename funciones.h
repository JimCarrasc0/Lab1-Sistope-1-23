#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Abstraccion de una particula
typedef struct particulas{
    int posicion;
    double energia;
} particulas;


//Entradas: Nombre del archivo a leer (String), Puntero a lista de particulas 
//Salida: Cantidad de particulas, lista de particulas por referencia
//Descripcion: Funcion que lee un archivo y lo almacena en memoria, ademas de entregar la cantidad de particulas
int lecturaArchivo(char * nombre, particulas ** entrada);}

//Entradas: Posicion de una particula (int), lista de particulas, cantidad de particulas (int)
//Salida: Indice de una particula
//Descripcion: Funcion que guarda el indice de una particula
int indice(int posicion, particulas * entrada, int part);

//Entradas: Lista de particulas, Numero de celdas (int), puntero a lista de particulas, cantidad de partiulas (int)
//Salida: Lista de particulas por referencia
//Descripcion: Funcion que ordena una lista de particulas
void ordenarEnergiaActual(particulas * entrada, int N, particulas ** salida, int part);

//Entradas: Lista de particulas, Numero de celdas (int), puntero a lista de particulas, cantidad de particulas (int)
//Salida: Lista de particulas por referencia
//Descripcion: Funcion que calcula la energia en cada celda
void calcularEnerg(particulas * entrada, int N, particulas ** salida, int part);

//Entradas: Lista de particulas, cantidad de celdas
//Salida: La energia más grande en una celda (int)
//Descripcion: Funcion que obtiene la energia mas grande de entre todas las celdas
int maximo(particulas * entrada, int N);

//Entradas: Numero de celdas (int), lista de particulas, nombre de archivo (string)
//Salida: Archivo txt  
//Descripcion: Funcion que escribe un archivo de texto con las energias en cada celda
int escribirArchivo(int N, particulas * salida, char * nombre);

//Entradas: Numero de celdas, Lista de particulas
//Salida: impresión por pantalla
//Descripcion: Funcion que imprime de manera grafica las energias en cada celda
void imprimirGrafico(int N, particulas * salida);
