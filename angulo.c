#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  int a1, a2, angulo;
  
  printf("Informe o valor do primeiro ângulo:\n");
  scanf("%d",&a1);
  
  printf("Informe o valor do segundo ângulo:\n");
  scanf("%d",&a2);

  angulo = 180-(a1+a2);
  printf("O valor do terceiro ângulo é: %d",angulo);
  
  return 0;
}