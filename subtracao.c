#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  int n1, n2, subtracao;
  
  printf("Informe o primeiro numero da subtração:\n");
  scanf("%d",&n1);
  
  printf("Informe o segundo numero da subtração:\n");
  scanf("%d",&n2);

  subtracao = n1-n2;
  printf("O resultado da subtração é: %d",subtracao);
  
  return 0;
}