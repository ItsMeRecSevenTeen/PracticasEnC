#include <stdio.h>
#include <conio.h>

float DESCUENTO(float &);

void main(void) {
float TOT, DES;
printf("Ingresa el total del cliente: ");
scanf("%f", &TOT);
DES = DESCUENTO(TOT);
printf("Precio con descuento: %f", DES);
getch();
}

float DESCUENTO(float &tot) {
if(tot > 1000){
tot = tot * 0.7;
}
return tot;
}

