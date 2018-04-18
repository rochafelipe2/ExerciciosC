#include <stdio.h>
#include <stdlib.h>

// Algoritmo: verificarNumerosSoma
// Autor    : Felipe Rocha
// Data     : 03/04/2018
// Descricao: LT02_EX02: Faça um programa que leia dois números. Caso a soma dos dois
// números apresente um número par e seja maior que 100 mostre a metade da
// soma na tela, se a soma for um número par menor que 100, mostre a soma
//multiplicada por 2. Se a soma resultar em um número ímpar apenas apresente a soma.


int verificarNumerosSoma(int num1, int num2);

int main()
{
    printf("Resultado = %d",verificarNumerosSoma(10, 12));
    return 0;
}

int verificarNumerosSoma(int num1, int num2)
{

    int soma = num1 + num2;
    int resultado = 0;

    if(soma%2 == 0)
    {
        if(soma > 100)
        {
          resultado = soma / 2; //metade da soma
        }else
        {
          resultado = soma * 2; //soma mult 2
        }

    }else
    {
        resultado = soma;
    }

   return resultado;
}
