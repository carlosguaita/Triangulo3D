#include <stdio.h>
#include <math.h>
#include "funciones.h"

float calcularDistancia(float x1, float x2, float y1, float y2, float z1, float z2){
    float dist;
    dist=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return dist;
}

float calcularArea(float a, float b, float c){
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

float ingresarComponente(char comp, int numPunto){
    float componente;
    printf("ingrese la componente %c del punto %d:",comp,numPunto);
    scanf("%f",&componente);
    return componente;
}