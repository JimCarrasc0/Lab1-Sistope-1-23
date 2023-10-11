#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.c"

typedef struct particulas particulas;

int lecturaArchivo(char* nombre, particulas * entrada);
int indice(int posicion, particulas * entrada, int part);
void calcularEnergActual(particulas * entrada, int N, particulas * salida, int part);
void calcularEnerg(particulas * entrada, int N, particulas * salida, int part);
