#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  int n1, n2, media;
  
  printf("Informe a primeira nota do cálculo de média:\n");
  scanf("%d",&n1);
  
  printf("Informe a segunda nota do cálculo de média:\n");
  scanf("%d",&n2);

  media = (2*n1 + 3*n2)/5;
  printf("A média é: %d",media);
  
  return 0;
}