#include <stdio.h>
#include <locale.h>
#include <math.h>

int hipotenusa(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  int c1, c2;
  float hipotenusa;
  
  printf("Informe o valor do primeiro cateto:\n");
  scanf("%d",&c1);
  
  printf("Informe o valor do segundo cateto:\n");
  scanf("%d",&c2);

  hipotenusa = sqrt(pow(c2,2)+pow(c1,2));
  printf("O valor da hipotenusa é: %.2f",hipotenusa);
  
  return 0;
}