#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  float sm, sf, salarios;
  
  printf("Informe o valor de um salário mínimo:\n");
  scanf("%f",&sm);
  
  printf("Informe o salario do funcionário:\n");
  scanf("%f",&sf);

  salarios = sf/sm;
  printf("O funcionário recebe %.2f salários mínimos",salarios);
  
  return 0;
}