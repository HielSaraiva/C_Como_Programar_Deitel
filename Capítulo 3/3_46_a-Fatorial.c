/*Fatorial!-Item A*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int num, prod=1;

   printf("Escreva um n�mero inteiro n�o-negativo: ");
   scanf("%d", &num);

   if (num>=0) {
      while (num>=1) {
         prod = num*prod;
         num-=1;
      }
      printf("O seu fatorial �: %d\n", prod);
   }
   else {
      printf("Digite um n�mero positivo!\n");
   }
   system("pause");
   return 0;
}//S� calcula corretamente at� 2^12!