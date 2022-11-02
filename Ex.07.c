#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Escreva dois numeros para serem comparados: ");
    scanf("%f%f", &x, &y);

    if (x>y){
        printf("%f eh o maior numero\n", x);
    }

    if (y>x){
        printf ("%f eh o maior numero\n", y);
    }

    if (x==y) {
        printf ("os numeros sao iguais\n");
    }

    system ("pause");
    return 0;
} 
