#include <stdio.h>
#include <stdlib.h>

int main (void){
  float salario = 750;
  float resultado = (750 * 0.15) + salario;
  printf("O salario com o aumento aplicado é igual a : %g", resultado);
  system("pause");
  return 0;
}