#include<stdio.h>
 int main()
{
int numero,resto, soma=0, m;

printf("Digite um numero:");
scanf("%d",&numero);

if (numero == 0){
    printf("O numero eh invalido\n");
    system ("pause");
    return 0;
}

if (numero > 0){
    //Loop até o numero ser 0
    while(numero > 0){
        //Resto da divisão
         resto = numero % 10;
        //Soma dos digitios
         soma = soma + resto;
        //Diminuindo uma casa do numero digitado ao final de cada operação até o 0
        numero = numero / 10;
    }
}

//pirnt ao final para mostrar o resultado da soma
printf("A soma dos digitos eh: %d", soma);
//máximo de digitos é 11

return 0;
}