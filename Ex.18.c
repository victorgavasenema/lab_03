#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    int escolha;
    printf ("Escolha uma operacao matematica\n(1)Adicao\n(2)Subtracao\n(3)Multiplicacao\n(4)Divisao\n");
    scanf ("%d", &escolha);

    float adicao, subtracao, multiplicao, divisao;
    float x, y;
    

    switch (escolha){
        case 1:
        printf ("Escolha dois valores para serem somados:\n");
        scanf ("%f%f", &x, &y);
        printf ("O resultado eh: %.2f\n", adicao = x + y);
        break;
        case 2:
        printf ("Escolha dois valores para serem subtraidos:\n");
        scanf ("%f%f", &x, &y);
        printf ("O resultado eh: %.2f\n", subtracao = x - y);
        break;
        case 3:
        printf ("Escolha dois valores para serem multiplicados:\n");
        scanf ("%f%f", &x, &y);
        printf ("O resultado eh: %.2f\n", multiplicao = x * y);
        break;
        case 4:
        printf ("Escolha dois valores para serem dividos:\n");
        scanf ("%f%f", &x, &y);
        if (y == 0){
        printf ("O valor escolhido para a divisao eh invalido\n");
        }
        else{
            printf ("O resultado eh: %.2f\n", divisao = x / y);
        }
        break;
        default:
        printf ("O valor escolhido eh invalido");
        break;
    }

    system ("pause");
    return 0;

}