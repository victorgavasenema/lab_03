#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, imc1, imc2;
    int sexo;

    printf ("Escolha o sexo:\n(1)Homem\n(2)Mulher\n");
    scanf ("%d", &sexo);

    if (sexo == 1){
        printf("Escreva a altura\n");
        scanf("%f", &altura);
        imc1 = (72.7 * altura) - 58;
        printf("O peso ideal dessa pessoa eh: %.2f\n", imc1);
}

    if (sexo == 2){
            printf("Escreva a altura\n");
        scanf("%f", &altura);
        imc2 = (62.1 * altura) - 58;
        printf("O peso ideal dessa pessoa eh: %.2f\n", imc2);
}


    system ("pause");
    return 0;
} 
