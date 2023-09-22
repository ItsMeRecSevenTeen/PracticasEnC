#include <stdio.h>
#include <conio.h>
#include <math.h>

float A,B,C,X1,X2;

void main(){
printf("Ingresa el coeficiente cuadratico: ");
scanf("%f",&A);
printf("Ingresa el coeficiente lineal: ");
scanf("%f",&B);
printf("Ingresa el termino independiente: ");
scanf("%f",&C);

X1=(-B+(sqrt(((B*B)-(4*A*C)))))/(2*A);
X2=(-B-(sqrt(((B*B)-(4*A*C)))))/(2*A);
printf("Resultado 1: %f",X1);
printf("\nResultado 2: %f",X2);
getch();
}

