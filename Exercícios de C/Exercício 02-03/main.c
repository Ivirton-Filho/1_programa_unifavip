#include <stdio.h>
#include <stdlib.h>

int main(){
   double num1  ;
   printf("Insira o numero 1:\n ");
   scanf("%lf", &num1);
   double num2  ;
   printf("Insira o numero 2:\n ");
   scanf("%lf", &num2);
   double num3  ;
   printf("Insira o numero 3:\n ");
   scanf("%lf", &num3);
   double result = num1 + num2 + num3;
   printf("A soma dos numeros é %g\n", result);
    system("pause");
    
    return 0;
}