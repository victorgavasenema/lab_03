#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int x;

   printf("Escreva um inteiro: \n");
   scanf("%d", &x);

   if (x % 2 == 0){
    printf("O numero eh par\n");
   }
   else{
    printf("O numero eh impar\n");
   }

    system("pause");
    return 0;
}