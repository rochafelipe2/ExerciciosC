#include <stdio.h>
#include <stdlib.h>

//LT05_EX05: Leia uma matriz de 3 x 3 elementos. Calcule a soma
//dos elementos que estão acima da diagonal principal.

int main()
{
    somaAcimaDiagonal();
    return 0;
}

void somaAcimaDiagonal()
{

    int matriz[3][3];
    int linha;
    int coluna;
    int soma =0;
    int numero;
    for(linha=0; linha < 3; linha ++)
    {

        for(coluna =0; coluna < 3; coluna++)
        {
            scanf("%d", &numero);

            matriz[linha][coluna] = numero;

            if(linha > 0 && linha == coluna)
                soma += matriz[linha+1][coluna-1];
        }
    }

      for(linha=0; linha < 3; linha ++)
    {

        for(coluna =0; coluna < 3; coluna++)
        {
            if(linha > 0 && linha == coluna)
                soma += matriz[linha+1][coluna-1];
        }
    }


    printf("%d",soma);
}
