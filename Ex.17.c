#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    float bmaior, bmenor, altura, area;

    printf ("Escreva o valor da base maior do trapezio\n");
    scanf ("%f", &bmaior);
    printf ("Escreva o valor da base menor do trapezio\n");
    scanf ("%f", &bmenor);
    printf ("Escreva o valor da altura do trapezio\n");
    scanf ("%f", &altura);

    if (bmaior > 0 && bmenor >0){
    area = ((bmaior + bmenor) * altura )/ 2;
    printf ("A area do trapezio eh: %.2f\n", area);
}

    else {
    printf ("Os valores dados sao invalidos\n");
    }

    system ("pause");
    return 0;

}
