#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Algoritmo: impartOuPar
// Autor    : Felipe Rocha
// Data     : 03/04/2018
// LT02_EX11: Escreva um algoritmo em pseudoc�digo que leia um n�mero inteiro
// e mostre uma mensagem indicando se este n�mero � par ou �mpar e se � positivo ou negativo.


void impartOuPar (int numero);

int main ()
{
    impartOuPar(8);
    impartOuPar(0);
    impartOuPar(7);
    impartOuPar(-1);
    impartOuPar(178);


    return 0;
}

void impartOuPar(int numero)
{
    if(numero%2 == 0)
    {
     printf("O numero eh par \n");
    }else
    {
      printf("O numero eh impar \n");
    }

}
