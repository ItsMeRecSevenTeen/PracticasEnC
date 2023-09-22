
#include <stdio.h>
#include <conio.h>


int CUADRADO(int);   
int CUBO(int);

void main(void)
{
int CUA,CUB,NUMERO;
printf("Ingresa un numero: ");
scanf("%i",&NUMERO);
CUA=CUADRADO(NUMERO);
CUB=CUBO(NUMERO);
printf("\nCuadrado del numero: %i",CUA);
printf("\nCubo del numero: %i",CUB);
getch();
}

int CUADRADO(int numero){
int cua;
cua = numero*numero;
return cua;
}

int CUBO(int numero){
int cub;
cub = numero * numero * numero;
return cub;
}

