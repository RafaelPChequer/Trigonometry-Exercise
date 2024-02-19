#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  int p, desconto;
  
  printf("Informe o valor para a aplicação do desconto:\n");
  scanf("%d",&p);

  desconto = p-(p/10);
  printf("O valor com desconto é: %d",desconto);
  
  return 0;
}