#include <stdio.h>
#include <conio.h>

void COMPARAR(int &,int &,int &);

void main (void){
int N1,N2,N3;
printf("Ingresa el numero 1: ");
scanf("%i",&N1);
printf("Ingresa el numero 2: ");
scanf("%i",&N2);
printf("Ingresa el numero 3: ");
scanf("%i",&N3);
COMPARAR(N1,N2,N3);
getch();
}

void COMPARAR(int &n1,int &n2,int &n3){
if(n1>n2 && n1>n3)
{
printf("%i Es mayor",n1);
}
else if(n2>n1 && n2>n3)
{
printf("%i Es mayor",n2);
}
else if(n3>n1 && n3>n2)
{
printf("%i Es mayor",n3);
}
else
{
printf("Todos los numeros son iguales");
}
}




