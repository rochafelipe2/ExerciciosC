#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Algoritmo: verificarMultiplos
// Autor    : Felipe Rocha
// Data     : 03/04/2018
//LT02_EX12: Escreva um algoritmo em pseudocódigo que leia dois valores a e b
//e os escreve com a mensagem: “São múltiplos” ou “Não são múltiplos”.

void verificarMultiplos(int a, int b);

int main ()
{
    verificarMultiplos(2, 1);
    verificarMultiplos(5,3);
    verificarMultiplos(73, 3);
}


void verificarMultiplos(int a, int b)
{
   int multiplicacao = a * b;

    if (multiplicacao%2 == 0)
    {
        printf("Multiplos \n");
    }else
    {
        printf("Nao Multiplos \n");
    }

}
