#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float custof, valorfinal;

    printf("Escreva o valor do custo de fabrica:\n");
    scanf("%f", &custof);

    if (custof <= 12000){
    valorfinal = custof + (custof * 0.05);
    printf("O preco final eh: %.2f\n", valorfinal);
    }

    if (custof > 120000 || custof <= 25000){
    valorfinal = (custof * 1.10) + (custof * 0.15);
    printf("O preco final eh: %.2f\n", valorfinal);
    }

    if (custof > 25000){
    valorfinal = custof + (custof * 0.15) + (custof * 0.20);
    printf("O preco final eh: %.2f\n", valorfinal);
    }


  system ("pause");
  return 0;
}