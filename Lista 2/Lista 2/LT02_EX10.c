#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define PESO1 3
#define PESO2 3
#define PESO3 4

// Algoritmo: calculaMediaPorTipo
// Autor    : Felipe Rocha
// Data     : 03/04/2018
//LT02_EX10: Escreva um algoritmo em pseudocódigo que o usuário possa escolher que tipo de média que deseja calcular a partir de três notas. Deve-se ler as notas e a opção escolhida pelo usuário e calcule a média:
//1 - aritmética
//2 - ponderada (pesos 3, 3, 4)


float calculaMediaPorTipo (float n1, float n2, float n3);

int main ()
{
    printf("Resultado da media = %f", calculaMediaPorTipo(10, 10, 6));
    return 0;
}

float calculaMediaPorTipo (float n1, float n2, float n3)
{
   float media;

    media = ((n1 * PESO1) + (n2 * PESO2) + (n3 * PESO3)) / (PESO1 + PESO2 + PESO3);


    return media;
}
