#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int x, y, diferenca;

   printf("Escreva dois numeros inteiro: \n");
   scanf("%d%d", &x, &y);

    if (x > y){
    diferenca = x - y;
    printf("%d eh o maior numer e a diferenca dos numeros eh %d\n", x, diferenca);
   }

    if (x < y){
    diferenca = y - x;
    printf("%d eh o maior numer e a diferenca dos numeros eh %d\n", x, diferenca);
   }

    if(x==y){
    printf("os numeros sao iguais\n");
   }

    system("pause");
    return 0;
}