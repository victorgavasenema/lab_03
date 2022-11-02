#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float x, y,z;

   printf("Escreva um numero: ");
   scanf("%f", &x);

   if (x>0){
    y=x*x;
    z= sqrt(x);
    printf("O numero digitado ao quadrado eh: %f\n", y);
    printf("A raiz quadrada do numero eh: %f\n", z);
   }

   if (x<0){
    printf("Sem resultado\n");
   }

    system("pause");
    return 0;
}