#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    float a, b, c, delta, x1, x2;
    char quadrado=253;
    printf ("Escreva os valores de a, b e c\n");
    scanf ("%f%f%f", &a, &b, &c);
    printf ("A funcao escrita eh: (%.2fx%c) + (%.2f) + (%.2f) = 0\n", a, quadrado, b, c);

    delta = pow(b,2) - (4 * a * c);

    if (delta < 0){
    printf ("Nao existe raiz\n");
    system ("pause");
    return 0;
    }

    if (delta == 0){
    printf ("Raiz unica\n");
    }

    if (delta > 0){
    x1= (-(b) + (sqrt(delta))) / 2 * a;
    x2= (-(b) - (sqrt(delta))) / 2 * a;
    printf ("As raizes sao %.2f e %.2f\n", x1, x2);    
    }

    system ("pause");
    return 0;
}