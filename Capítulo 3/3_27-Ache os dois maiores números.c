/*Ache os dois maiores n�meros*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");

   int contador = 1;
   float numD, num1, num2; 

   while (contador<=10) {

      printf("Digite o %d� valor: ", contador);
      scanf("%f", &numD);

      if (numD>=num1) {
         num2=num1;
         num1=numD;
      }
      else {
         if (numD>num2) {
            num2=numD;
         }
      }
      contador += 1;
   }
   printf("\nOs dois maiores n�meros, s�o: %.2f e %.2f\n", num1, num2);

   system("pause");
   return 0;
}