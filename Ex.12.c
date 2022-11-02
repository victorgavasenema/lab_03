#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    float numero, resultado;
    printf ("Escreva um para calcular seu log: \n");
    scanf ("%f", &numero);
    
    if(numero < 0){
        printf("Numero invalido\n");
        system ("pause");
        return 0;

    }
    if(numero > 0){
        resultado = log10(numero);
        printf("O log de %f eh %f\n", numero, resultado);

    }

    system ("pause");
    return 0;

}