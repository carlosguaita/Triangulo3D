#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    //ingresar punto 1
    float x1 = ingresarComponente('X',1);
    float y1 = ingresarComponente('Y',1);
    float z1 = ingresarComponente('Z',1);

    //ingresar punto 2
    float x2 = ingresarComponente('X',2);
    float y2 = ingresarComponente('Y',2);
    float z2 = ingresarComponente('Z',2);

    //ingresar punto 3
    float x3 = ingresarComponente('X',3);
    float y3 = ingresarComponente('Y',3);
    float z3 = ingresarComponente('Z',3);

    //ingresar punto 4
    float x4 = ingresarComponente('X',4);
    float y4 = ingresarComponente('Y',4);
    float z4 = ingresarComponente('Z',4);


    // calcular distancias
    float d12 = calcularDistancia(x1,x2,y1,y2,z1,z2);
    float d14 = calcularDistancia(x1,x4,y1,y4,z1,z4);
    float d24 = calcularDistancia(x2,x4,y2,y4,z2,z4);
    float d13 = calcularDistancia(x1,x3,y1,y3,z1,z3);
    float d34 = calcularDistancia(x3,x4,y3,y4,z3,z4);
    float d23 = calcularDistancia(x2,x3,y2,y3,z2,z3);

    //calcular area

    float a124 = calcularArea(d12,d14,d24);
    float a234 = calcularArea(d23,d24,d34);
    float a134 = calcularArea(d13,d14,d34);
    float a123 = calcularArea(d12,d13,d23);

    printf("El area de triangulo a124 es: %f",a124);
    printf("El area de triangulo a234 es: %f",a234);
    printf("El area de triangulo a134 es: %f",a134);
    printf("El area de triangulo a123 es: %f",a123);




    return 0;
}