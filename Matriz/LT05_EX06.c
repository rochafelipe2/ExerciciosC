#include <stdio.h>
#include <stdlib.h>

//LT05_EX06: Fa�a um programa que permita ao usu�rio entrar com uma matriz de 3 x 3 n�meros inteiros.
//Em seguida, gere um array unidimensional (vetor) pela soma dos n�meros de cada coluna da matriz e mostrar
//na tela esse array. Por exemplo, a matriz:


int main()
{
    arraySomaMatriz();
    return 0;
}

void arraySomaMatriz()
{

    int matriz[3][3];
    int lista[3];
    int linha;
    int coluna;
    int index;
    int numero;

    for(linha = 0; linha < 3 ; linha++)
    {
        for(coluna =0; coluna < 3; coluna++)
        {
            printf("Entre com valor para a posicao [%d][%d] \n",linha,coluna);
            scanf("%d", &numero);
            matriz[linha][coluna] = numero;
            lista[coluna] = 0;
        }
    }


    for(linha = 0; linha < 3 ; linha++)
    {
        for(coluna =0; coluna < 3; coluna++)
        {
            printf("%d \t",matriz[linha][coluna]);
            lista[coluna] += matriz[linha][coluna];
        }
        printf("\n");
    }
    for(index = 0; index < 3; index++)
    {
        printf("%d \t",lista[index]);
    }
}
