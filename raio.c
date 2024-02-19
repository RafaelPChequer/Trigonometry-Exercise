#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  int r;
  float pi = 3.14;
  float comprimento, area, volume;
  
  printf("Informe o valor do raio:\n");
  scanf("%d",&r);

  comprimento = 2*pi*r;
  printf("O valor do comprimento é: %.2f\n",comprimento);

  area = pi*(pow(r,2));
  printf("O valor da area é: %.2f\n",area);

  volume = (4*pi*(pow(r,3)))/3;
  printf("O valor do volume é: %.2f\n",volume);
  
  return 0;
}