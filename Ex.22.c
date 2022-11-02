#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    int idade, temposervico;
    printf ("Escreva a idade:\n");
    scanf ("%d", &idade);
    printf ("Escreva o tempo de servico em anos:\n");
    scanf ("%d", &temposervico);

    if (idade <= temposervico){
    printf ("Os valores digitados sao invalidos\n");
    system ("pause");
    return 0;
    }


    if (idade >= 65 || temposervico >= 35 || (idade >=60 && temposervico >= 25)){
    printf ("Esta pessoa esta apta a receber a aposentadoria\n");
    }

    else {
    printf ("Esta pessoa nao esta apta a receber a aposentadoria\n");
    }


    system ("pause");
    return 0;
}