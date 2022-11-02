#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, prestacao;

    printf("Escreva o salario: \n");
    scanf ("%f", &salario);

    printf("Escreva o valor da parcela: \n");
    scanf ("%f", &prestacao);

    if (prestacao <= 0.2 * salario){
    printf("Emprestimo concedido\n");
    }
    else {
    printf("Emprestimo nao concedido\n");

    }

    system ("pause");
    return 0;
} 
