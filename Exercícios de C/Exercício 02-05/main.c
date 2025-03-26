#include <stdio.h>
#include <stdlib.h>
int main(){
  double metros;
  printf("Insira a quantidade de metros: ");
  scanf("%lf", &metros);
  double conversao = metros * 1000;
  printf("A convesão de metros para milimetros é igual a %g\n", conversao);
  system("pause");
  return 0;
}