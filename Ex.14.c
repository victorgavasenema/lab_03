#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    float trabalho, lab, semestral, media;

    printf ("Escreva a nota do trabalho: \n");
    scanf ("%f", &trabalho);
    printf ("Escreva a nota do laboratorio: \n");
    scanf ("%f", &lab);
    printf ("Escreva a nota da avaliacao semestral: \n");
    scanf ("%f", &semestral);
    
    
    if (trabalho < 0 || trabalho>10 || lab < 0 || lab > 10 || semestral < 0 || semestral > 10){
    printf ("Os valores sao invalidos\n");
    system ("pause");
    return 0;
    }

    media = ((trabalho*2) + (lab*3) + (semestral*5))/10 ;

    if (media < 2.9 || 2.9){
    printf ("O aluno foi reprovado\n");
    }

    if (media > 3.0 && media <= 4.9) {
    printf ("O aluno esta de recuperacao\n");
    }

    if (media >4.9) {
    printf ("O aluno foi aprovado\n");
    }

    system ("pause");
    return 0;

}