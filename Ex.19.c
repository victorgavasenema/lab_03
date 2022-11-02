#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    int n;
    printf ("Escreva um numero\n");
    scanf ("%d", &n);

    if (n % 3 == 0){
        printf ("O numero eh divisivel por 3\n");
    }
    
    else {
        printf ("O numero nao eh divisivel por 3\n");
    }

    if (n % 5 == 0){
        printf ("O numero eh divisivel por 5\n");
    }

    else {
        printf ("O numero nao eh divisivel por 5\n");
    }


    system ("pause");
    return 0;
}