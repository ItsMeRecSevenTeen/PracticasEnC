#include <stdio.h>
#include <conio.h>

void BECA(float);

void main(void){
float PROM;
printf("Ingresa el promedio:");
scanf("%f",&PROM);
BECA(PROM);
getch();
}

void BECA(float prom){
if(prom>=9){
printf("Beca asignada");
}
else{
printf("Beca no asignada");
}
}
