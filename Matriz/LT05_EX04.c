#include <stdio.h>
#include <stdlib.h>

//LT05_EX04: Leia uma matriz 4 x 4, imprima a matriz e retorne a
//localização (a linha e a coluna) do maior valor.


int main()
{
maiorDaMatriz();
    return 0;
}

void maiorDaMatriz()
{

    int matriz[4][4];
    int linha;
    int coluna;
    int maior;
    int linha_maior;
    int coluna_maior;
    int numero;
    for(linha = 0; linha < 4; linha++)
    {
        for(coluna =0; coluna < 4 ; coluna++)
        {
            scanf("%d",&numero);

            matriz[linha][coluna] = numero;

            if(linha == 0 && coluna ==0)
            {
                maior = matriz[linha][coluna];
            }

            if(matriz[linha][coluna] >= maior)
            {
                maior = matriz[linha][coluna];
                linha_maior = linha;
                coluna_maior = coluna;
            }
        }


    }


printf("Linha = %d \n Coluna = %d",linha_maior,coluna_maior);

}
