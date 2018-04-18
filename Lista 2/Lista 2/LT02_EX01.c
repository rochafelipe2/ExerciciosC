#include <stdio.h>
#include <stdlib.h>

// Algoritmo: verificarNumeroMaior
// Autor    : Felipe Rocha
// Data     : 03/04/2018
// Descricao: LT02_EX01: Criar um algoritmo que leia 2 n�meros. Caso o primeiro n�mero lido seja maior que o segundo,
//imprima na tela o primeiro n�mero menos o segundo, caso contr�rio mostre a soma dos dois n�meros.

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
        printf("Primeiro n�mero maior = %d", num1 - num2);
    }else
    {
        printf("Segundo n�mero maior = %d", num1 + num2);
    }

}
