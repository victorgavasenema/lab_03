#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    float x, y, z;
    printf ("digite 3 numeros:\n");
    scanf ("%f%f%f", &x, &y, &z);

    if (x > y && y > z){
    printf ("A sequencia em ordem crescente eh: %.2f, %.2f, %.2f\n", x, y, z);
    }
    
    if (x > z && z > y){
    printf ("A sequencia em ordem crescente eh: %.2f, %.2f, %.2f\n", x, z, y);
    }

    if (y > x && x > z){
    printf ("A sequencia em ordem crescente eh: %.2f, %.2f, %.2f\n", y, x, z);
    }

    if (y > z && z > x){
    printf ("A sequencia em ordem crescente eh: %.2f, %.2f, %.2f\n", y, z, x);
    }

    if (z > x && x > y){
    printf ("A sequencia em ordem crescente eh: %.2f, %.2f, %.2f\n", z, x, y);
    }

    if (z > y && y > x){
    printf ("A sequencia em ordem crescente eh: %.2f, %.2f, %.2f\n", z, y, x);
    }

    system ("pause");
    return 0;
    
}