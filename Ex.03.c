#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float x, y;

   printf("Escreva um numero: ");
   scanf("%f", &x);
   if (x>0){
        x=sqrt (x);
        printf("A raiz do numero eh: %f", x);
   }

   if (x<0){
        y= x*x;
        printf("O quadrado do numero eh: %f", y);

   }
    system("pause");
    return 0;
}