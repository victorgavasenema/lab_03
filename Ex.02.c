#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;

    printf("Escreva um numero: ");
    scanf("%f", &x);

    if (x>0){
        x = sqrt(x);
        printf("o resultado eh: %f\n", x);
    }
    else (x<0); {
        printf("o numero eh invalido\n");
    }
    system("pause");
    return 0;
}