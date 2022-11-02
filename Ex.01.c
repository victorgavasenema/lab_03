#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("Escreva dois numeros: \n");
    scanf("%f%f", &x, &y);
    if (x>y){
        printf("%.2f eh maior do que %.2f\n", x, y);
    }
    else if  (y>x){
        printf("%.2f eh maior do que %.2f\n", y, x);
    }
    else if (x==y){
        printf("os numeros sao iguais\n");
    }
    system("pause");
    return 0;
} 
