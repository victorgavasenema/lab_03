#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float nota1, nota2, media;

   printf("Escreva uma das notas do aluno: \n");
   scanf("%f%f", &nota1, &nota2);

   if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 ){
    printf("As notas sao validas\nO resultado da media das notas eh: %.2f", media=(nota1 + nota2)/2);
   }

  else {
    printf("As notas nao sao validas");
    system("pause");
    return 0;
   }

    system("pause");
    return 0;
}