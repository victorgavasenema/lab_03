#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    float media, km, l;
    printf ("Escreva a quantidade de km\n");
    scanf ("%f", &km);
    printf ("Escreva a quantidade de litros\n");
    scanf ("%f", &l);

    media = km / l;

    if (media < 8){
    printf ("Venda o carro!\n");
    }
    
    if (media >= 8 && media <= 14){
    printf ("Economico!\n");
    }

    if (media > 14){
    printf ("Super economico!\n");
    }
    
    system ("pause");
    return 0;
    
}