/*Ache o n�mero maior*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int contador = 1;
   float num, maior;

   while (contador <=10) {
      printf("Digite um n�mero: ");
      scanf("%f", &num);

      if (num>=maior) {
         maior=num;
      }
      contador = contador + 1;
   }
   
   printf("\nO maior n�mero digitado foi: %f\n", maior);

   system("pause");
   return 0;
}