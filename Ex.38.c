#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int dia, mes, ano;

  printf("Escreva o dia:\n");
  scanf("%d", &dia);
  printf("Escreva o mes:\n");
  scanf("%d", &mes);
  printf("Escreva o ano:\n");
  scanf("%d", &ano);

if (ano <= 2022){
  if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 10 || mes == 12){
    if ( dia <= 31 && dia > 0){
    printf("Data valida\n");
    }
    else {
  printf("Data  invalida\n");
    }
  }

  if (mes == 4 || mes == 5 || mes == 6 || mes == 8 || mes == 9 || mes == 11){
    if ( dia <= 30 && dia > 0){
    printf("Data valida\n");
    }
    else {
  printf("Data  invalida\n");
    }
}

  if (mes == 2){
    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0) && dia <= 30 && dia > 0){
    printf("Data valida\n");
    system ("pause");
    return 0;
  }
    if ((ano % 4 != 0) && dia <= 28 && dia > 0 && dia <= 30 && dia > 0){
    printf("Data valida\n");
    system ("pause");
    return 0;
  }
    else {
  printf("Data  invalida\n");
    system ("pause");
    return 0;
  }
}

  if (mes > 12 || mes < 0){
  printf("Data  invalida\n");
}
}

  else {
  printf("Data  invalida\n");
  }
  system ("pause");
  return 0;
}