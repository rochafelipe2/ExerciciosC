#include <stdio.h>
#include <stdlib.h>

//LT05_EX08: Faça um programa em Linguagem C que leia duas
//matrizes A e B de tamanho 3 x 3 e calcule C = A x B.

int main()
{
    exercicio8();
    return 0;
}


void exercicio8()
{

    int matrizA[3][3];
    int matrizB[3][3];
    int matrizC[3][3];
    int linha;
    int coluna;
    int numero;

    for(linha =0; linha < 3; linha++)
    {
        for(coluna =0; coluna < 3; coluna++)
        {
            printf("Entre com o valor de [%d][%d] para a matriz A \n",linha,coluna);
            scanf("%d", &matrizA[linha][coluna]);
            printf("Entre com o valor de [%d][%d] para a matriz B \n",linha,coluna);
            scanf("%d", &matrizB[linha][coluna]);

            matrizC[linha][coluna] = matrizA[linha][coluna] * matrizB[linha][coluna];
        }
    }


    for(linha =0; linha < 3; linha++)
    {
        for(coluna =0; coluna < 3; coluna++)
        {
            printf("%d \t",matrizA[linha][coluna]);
        }
        printf("\n");
    }
        printf("\n");
        for(linha =0; linha < 3; linha++)
    {
         for(coluna =0; coluna < 3; coluna++)
        {
            printf("%d \t",matrizB[linha][coluna]);
        }
        printf("\n");
    }
        printf("\n");
        for(linha =0; linha < 3; linha++)
    {
         for(coluna =0; coluna < 3; coluna++)
        {
            printf("%d \t",matrizC[linha][coluna]);
        }
        printf("\n");
    }

}
