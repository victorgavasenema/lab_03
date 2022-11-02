#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int entradahora, entradamin, saidahora, saidamin;
    int resultadohora, resultadomin;
    float preco;

    printf("Escreva o horario de entrada:\n");
    scanf("%d%d", &entradahora, &entradamin);
    printf("Escreva o horario de saida:\n");
    scanf("%d%d", &saidahora, &saidamin);

    if (entradahora <= saidahora && entradamin <= saidamin){
    resultadohora = saidahora - entradahora;
    resultadomin = -(entradamin - saidamin);
    printf("1-O horario eh: %.2d:%.2d\n", resultadohora, entradamin);
    }

    if (entradahora < saidahora && entradamin > saidamin){
    resultadohora = saidahora - entradahora - 1;
    resultadomin = 60 + (saidamin - entradamin);
    printf("2-O horario eh: %.2d:%.2d\n", resultadohora, resultadomin);
    }

    if (entradahora > saidahora && entradamin > saidamin){
    resultadohora = (saidahora + 24) - entradahora - 1;
    resultadomin = entradamin - saidamin;
    printf("3-O horario eh: %.2d:%.2d\n", resultadohora, resultadomin);
    }

    if (entradahora > saidahora && entradamin < saidamin){
    resultadohora = (saidahora + 24) - entradahora;
    resultadomin = saidamin - entradamin;
    printf("4-O horario eh: %.2d:%.2d\n", resultadohora, resultadomin);
    }

    if (resultadohora <= 1){
        if (resultadomin == 0){
        preco = resultadohora * 1;
        printf("Preco a ser pago: %.2f\n", preco);
        }
        if (resultadomin > 0){
        preco = (resultadohora + 1)* 1;
        printf("Preco a ser pago: %.2f\n", preco);
        }
    system ("pause");
    return 0;
    }
    
    if (resultadohora == 2){
        if (resultadomin == 0){
        preco = resultadohora * 1;
        printf("Preco a ser pago: %.2f\n", preco);
        }
        if (resultadomin > 0){
        preco = (resultadohora + 1)* 1.4;
        printf("Preco a ser pago: %.2f\n", preco);
        }
    system ("pause");
    return 0;
    }
    
    if (resultadohora == 3){
        if (resultadomin == 0){
        preco = resultadohora * 1.4;
        printf("Preco a ser pago: %.2f\n", preco);
        }
        if (resultadomin > 0){
        preco = (resultadohora + 1)* 1.4;
        printf("Preco a ser pago: %.2f\n", preco);
        }
    system ("pause");
    return 0;
    }

    if (resultadohora == 4){
        if (resultadomin == 0){
        preco = resultadohora * 1.4;
        printf("Preco a ser pago: %.2f\n", preco);
        }
        if (resultadomin > 0){
        preco = (resultadohora + 1)* 2;
        printf("Preco a ser pago: %.2f\n", preco);
        }
    system ("pause");
    return 0;
    }

    if (resultadohora == 5){
        if (resultadomin == 0){
        preco = resultadohora * 2;
        printf("Preco a ser pago: %.2f\n", preco);
        }
    system ("pause");
    return 0;
    }
    
    
    else{
    printf("fodase"); 
    }

  system ("pause");
  return 0;
}           