#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  int b1, b2, a, trapezio;
  
  printf("Informe a base maior:\n");
  scanf("%d",&b1);
  
  printf("Informe a base menor:\n");
  scanf("%d",&b2);

  printf("Informe a altura:\n");
  scanf("%d",&a);

  trapezio = ((b1+b2)*a)/2;
  printf("A área do trapézio é: %d",trapezio);
  
  return 0;
}