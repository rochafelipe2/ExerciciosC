#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define DIARIA 60

// Algoritmo: analisarNumeros
// Autor    : Felipe Rocha
// Data     : 03/04/2018
//LT02_EX14: Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de serviços é de:
//• R$ 5.50 por diária, se o número de diárias for maior que 15;
//• R$ 6.00 por diária, se o número de diárias for igual a 15;
//• R$ 8.00 por diária, se o número de diárias for menor que 15.
//Construa um algoritmo que mostre o nome e o total da conta de um cliente.


float calcularContaCliente (int numeroDiarias);

int main ()
{
    printf("Cliente 1 \n");
    printf("Valor da conta = %f\n",calcularContaCliente(14));

    printf("############################################### \n");

     printf("Cliente 2 \n");
    printf("Valor da conta = %f\n",calcularContaCliente(15));

    printf("############################################### \n");

     printf("Cliente 3 \n");
    printf("Valor da conta = %f\n",calcularContaCliente(16));

    return 0;
}


float calcularContaCliente (int numeroDiarias)
{
  float conta;
    if(numeroDiarias > 5)
    {
      conta = DIARIA + (numeroDiarias * 5);
    }
    else
    {
       if(numeroDiarias < 5)
       {
            conta = DIARIA + (numeroDiarias * 8);
       }
       else
       {
            conta = DIARIA + (numeroDiarias * 6);
       }
    }

    return conta;
}
