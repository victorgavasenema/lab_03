#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    int a, b, c;
    printf ("Escreva 3 numeros\n");
    scanf ("%d%d%d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0){
    printf ("Os valores sao invalidos\n");
    system ("pause");
    return 0;
    }

    if (a + b > c && a + c > b && c + b > a) {

    if (a == b && b == c){
    printf ("O triangulo eh equilatero\n");
    }

    if (a != b && b != c){  
    printf ("O triangulo eh escaleno\n");
    }
    
    if ((a == b && b != c) || (a != b && b == c)){  
    printf ("O triangulo eh isoceles\n");
    }
    }
    
    else {
    printf ("Os valores sao invalidos\n");
    }

    system ("pause");
    return 0;
}