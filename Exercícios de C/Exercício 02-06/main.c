#include <stdio.h>
#include <math.h>
int main(void){
  double mercadoria;
  printf("Insira o valor do mercadoria: ");
  scanf("%lf", &mercadoria);
  double desconto;
  printf("Insira o percentual de desconto: ");
  scanf("%lf", &desconto);
  double operacaon1 = mercadoria * (desconto/100) ;
  double operacaon2 = mercadoria - operacaon1  ;
  printf("O valor do desconto foi de %g\nE o valor a se pagar é %g\n",operacaon1, operacaon2);
  return 0;
}