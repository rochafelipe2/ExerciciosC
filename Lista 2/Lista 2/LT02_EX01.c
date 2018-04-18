#include <stdio.h>
#include <stdlib.h>

// Algoritmo: verificarNumeroMaior
// Autor    : Felipe Rocha
// Data     : 03/04/2018
// Descricao: LT02_EX01: Criar um algoritmo que leia 2 números. Caso o primeiro número lido seja maior que o segundo,
//imprima na tela o primeiro número menos o segundo, caso contrário mostre a soma dos dois números.

void verificarNumeroMaior(int num1, int num2);

int main()
{
    verificarNumeroMaior(10, 12);
    return 0;
}

void verificarNumeroMaior(int num1, int num2)
{

    if(num1 > num2)
    {
        printf("Primeiro número maior = %d", num1 - num2);
    }else
    {
        printf("Segundo número maior = %d", num1 + num2);
    }

}
