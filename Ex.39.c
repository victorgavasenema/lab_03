#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sal, reajuste;
    int tempo;

    printf("Escreva o tempo de servico:\n");
    scanf("%d", &tempo);
    printf("Escreva o salario:\n");
    scanf("%f", &sal);

    if (tempo < 1){
        if (sal <500){
        reajuste = sal * 1.25;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 500 && sal < 1000){
        reajuste = sal * 1.20;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1000 && sal < 1500){
        reajuste = sal * 1.15;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1500 && sal < 2000){
        reajuste = sal * 1.10;
        printf("O novo slario eh: %.2f\n", reajuste);     
        }
        if (sal >= 2000){
        reajuste = sal;
        printf("O novo slario eh: %.2f\n", reajuste);  
        }
    }

    if (tempo >= 1 && tempo <= 3){
        if (sal <500){
        reajuste = (sal * 1.25) + 100;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 500 && sal < 1000){
        reajuste = (sal * 1.20) + 100;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1000 && sal < 1500){
        reajuste = (sal * 1.15) + 100;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1500 && sal < 2000){
        reajuste = (sal * 1.10) + 100;
        printf("O novo slario eh: %.2f\n", reajuste);     
        }
        if (sal >= 2000){
        reajuste = sal + 100;
        printf("O novo slario eh: %.2f\n", reajuste);  
        }
    }

    if (tempo >= 4 && tempo <= 6){
        if (sal <500){
        reajuste = (sal * 1.25) + 200;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 500 && sal < 1000){
        reajuste = (sal * 1.20) + 200;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1000 && sal < 1500){
        reajuste = (sal * 1.15) + 200;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1500 && sal < 2000){
        reajuste = (sal * 1.10) + 200;
        printf("O novo slario eh: %.2f\n", reajuste);     
        }
        if (sal >= 2000){
        reajuste = sal + 200;
        printf("O novo slario eh: %.2f\n", reajuste);  
        }
    }

    if (tempo >= 7 && tempo <= 10){
        if (sal <500){
        reajuste = (sal * 1.25) + 300;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 500 && sal < 1000){
        reajuste = (sal * 1.20) + 300;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1000 && sal < 1500){
        reajuste = (sal * 1.15) + 300;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1500 && sal < 2000){
        reajuste = (sal * 1.10) + 300;
        printf("O novo slario eh: %.2f\n", reajuste);     
        }
        if (sal >= 2000){
        reajuste = sal + 300;
        printf("O novo slario eh: %.2f\n", reajuste);  
        }
    }

    if (tempo > 10){
        if (sal <500){
        reajuste = (sal * 1.25) + 500;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 500 && sal < 1000){
        reajuste = (sal * 1.20) + 500;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1000 && sal < 1500){
        reajuste = (sal * 1.15) + 500;
        printf("O novo slario eh: %.2f\n", reajuste);
        }
        if (sal >= 1500 && sal < 2000){
        reajuste = (sal * 1.10) + 500;
        printf("O novo slario eh: %.2f\n", reajuste);     
        }
        if (sal >= 2000){
        reajuste = sal + 500;
        printf("O novo slario eh: %.2f\n", reajuste);  
        }
    }


    system ("pause");
    return 0;
}