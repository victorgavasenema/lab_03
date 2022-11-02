#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    int ano;
    printf ("Escreva um ano:\n");
    scanf ("%d", &ano);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
    printf ("O ano escrito eh bissexto\n");
    }

    else{
    printf ("O ano escrito nao eh bissexto\n");
    }

    system ("pause");
    return 0;
}