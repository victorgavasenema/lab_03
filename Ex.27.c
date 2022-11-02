#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    int idade;
    printf ("Escreva a idade do nadador\n");
    scanf ("%d", &idade);

    if (idade < 5){
    printf ("Idade invalida para calssificacao\n");
    system ("pause");
    return 0;
    }

    if (idade >= 5 && idade <=7){
    printf ("Nadador Infantil A\n");
    }
    
    if (idade >= 8 && idade <=10){
    printf ("Nadador Infantil B\n");
    }

    if (idade >= 11 && idade <=13){
    printf ("Nadador Juvenil A\n");
    }

    if (idade >= 14 && idade <=17){
    printf ("Nadador Juvenil B\n");
    }

    if (idade >= 18){
    printf ("Nadador Senior\n");
    }

    system ("pause");
    return 0;
    
}