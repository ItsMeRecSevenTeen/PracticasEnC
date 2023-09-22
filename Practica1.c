#include <stdio.h>
#include <conio.h>

float F,C;

void main(){
    printf("Ingresa la temperatura en celsius: ");
    scanf("%f",&C);
    F = (C * 1.8)+ 32;
    printf("Temperatura en Kelvin: %f",F);
    getch();
}
