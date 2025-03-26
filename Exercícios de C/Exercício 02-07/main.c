#include <stdio.h>

int main (void){

  double salario;
  printf("Qual é o seu salario?");
  scanf("%lf", &salario);
  double aumento;
  printf("Qual vai ser a porcentagem de aumento?");
  scanf("%lf", &aumento);
  double calculo_aumento = salario * (aumento/100);
  double novo_salario = salario + calculo_aumento;
  printf(" O valor do aumento é de %g e o valor do salário é %g",calculo_aumento , novo_salario);
  return 0;
}