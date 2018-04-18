#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Algoritmo: analisarNumeros
// Autor    : Felipe Rocha
// Data     : 03/04/2018
//LT02_EX13: Faça um algoritmo que leia dois números e indique
//se são iguais ou se são diferentes. Mostre o maior e o menor (nesta sequência).


void analisarNumeros( int n1, int n2);

int main ()
{

    analisarNumeros(4,5);
    analisarNumeros(587,5);
    analisarNumeros(157,175);
    analisarNumeros(9,10000);
    analisarNumeros(0,0);
    analisarNumeros(12,12);
    return 0;
}

void analisarNumeros( int n1, int n2)
{
    if(n1 == n2)
    {
      printf("Numeros iguais. %d\n",n1);
    }
    else
    {
      if(n1 > n2)
      {
       printf("Maior numero = %d \n",n1);
       printf("Menor numero = %d \n",n2);
      }
      else
      {
        printf("Maior numero = %d \n",n2);
       printf("Menor numero = %d \n",n1);
      }
    }
    printf("\n");
    printf("####################################################### \n");
    printf("\n");
}
