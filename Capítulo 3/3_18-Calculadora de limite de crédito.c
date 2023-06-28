/*Calculadora de limite de cr�dito*/
//Repeti��o controlada por sentinela

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese_Brazil");
   
   int numConta;
   float saldoIni, saldoFin, encargos, totCreditos, limCreditos;

   //Recebendo primeiros dados
   printf("Informe o n�mero da conta (-1 para terminar): ");
   scanf("%d", &numConta);

      while (numConta != -1) {
         printf("Informe o saldo inicial: ");
         scanf("%f", &saldoIni);
         printf("Informe o total de encargos: ");
         scanf("%f", &encargos);
         printf("Informe o total de cr�ditos: ");
         scanf("%f", &totCreditos);
         printf("Informe o limite de cr�dito: ");
         scanf("%f", &limCreditos);
         
         saldoFin = saldoIni + encargos - totCreditos;

         if(saldoFin > limCreditos) {
            printf("\nConta: %d\n", numConta);
            printf("Limite de cr�dito: %f\n", limCreditos);
            printf("Saldo: %f\n", saldoFin);
            printf("Limite de cr�dito ultrapassado.\n");
         }

         printf("\nInforme o n�mero da conta (-1 para terminar): ");
         scanf("%d", &numConta);
      }
   
   system("pause");
   return 0;
}