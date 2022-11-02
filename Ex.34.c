#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float nota;
  int faltas;

  printf("Escreva a nota\n");
  scanf("%f", &nota);
  printf("Escreva o numero de faltas\n");
  scanf("%d", &faltas);
  
    if (faltas < 0 || nota > 10 || nota <0){
    printf("Os valores escritos sao invalidos\n");
    system ("pause");
    return 0;
  }

    if (nota <= 10 && nota >= 9 && faltas < 20){
    printf("A");
  }

    if (nota <= 10 && nota >= 9 && faltas > 20){
    printf("B");
  }

    if (nota < 9 && nota >= 7.5 && faltas < 20){
    printf("B");
  }

    if (nota <= 8.9 && nota >= 7.5 && faltas > 20){
    printf("C");
  }
  
    if (nota <= 7.4 && nota >= 5 && faltas < 20){
    printf("C");
  }

    if (nota <= 7.4 && nota >= 5 && faltas > 20){
    printf("D");
  }

    if (nota <= 4.9 && nota >= 4 && faltas < 20){
    printf("D");
  }

    if (nota <= 4.9 && nota >= 4 && faltas > 20){
    printf("E");
  }
  
    if (nota <= 3.9){
    printf("E");
  }
  
  return 0;
}