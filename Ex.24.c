#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    int estado;
    float produto, valorfinal;
    printf ("Escreva o valor do produto\n");
    scanf ("%f", &produto);

    if (produto <= 0){
    printf ("O valor dado ao produto eh invalido\n");
    system ("pause");
    return 0;
    }
    
    printf ("Escreva o numero do estado que deseja analisar:\n(1)MG\n(2)SP\n(3)RJ\n(4)MS\n");
    scanf ("%d", &estado);

    
    switch (estado){
        case(1):
        printf ("O Valor do produto no estado de MG eh: %.2f\n", valorfinal = produto * 1.07);
        break;
        case(2):
        printf ("O Valor do produto no estado de SP eh: %.2f\n", valorfinal = produto * 1.12);
        break;
        case(3):
        printf ("O Valor do produto no estado do RJ eh: %.2f\n", valorfinal = produto * 1.15);
        break;
        case(4):
        printf ("O Valor do produto no estado do RJ eh: %.2f\n", valorfinal = produto * 1.08);
        break;
        default:
        printf ("Erro, o valor escolhido não representa nenhum estado na lista\n");
        break;
    }


    system ("pause");
    return 0;
}