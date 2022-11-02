#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    int prova1, prova2, prova3, media;

    printf ("Escreva a nota das provas: \n");
    scanf ("%d%d%d", &prova1, &prova2, &prova3);
    
    if (prova1 < 0 || prova1>100 || prova2 < 0 || prova2 > 100 || prova3 < 0 || prova3 > 100){
    printf ("O valor das provas eh invalido\n");
    system ("pause");
    return 0;
    }

    media = (prova1 + prova2 + (prova3*2))/4;

    if (media >= 60){
    printf ("O aluno foi aprovado\n");
    }

    else {
    printf ("O aluno nao foi aprovado com media %d\n", media);
    }

    system ("pause");
    return 0;

}