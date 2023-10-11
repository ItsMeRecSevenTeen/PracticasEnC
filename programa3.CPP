#include <stdio.h>
#include <conio.h>

void PROMEDIO(float,float,float);

void main(void){
float C1,C2,C3;
printf("Ingresa la calificacion 1:");
scanf("%f",&C1);
printf("Ingresa la calificacion 2:");
scanf("%f",&C2);
printf("Ingresa la calificacion 3:");
scanf("%f",&C3);
PROMEDIO(C1,C2,C3);
getch();
}

void PROMEDIO(float c1,float c2,float c3){
float prom;
prom=(c1+c2+c3)/3;
if(prom>=6){
printf("APROBADO");
}
else{
printf("Reprobado");
}
}