#include <stdio.h>
#include <stdlib.h>

//LT05_EX09: Elabore um programa em Linguagem C para ler uma matriz 4 x 3
//real e imprimir a soma dos elementos de uma linha L fornecida pelo usuário;


int main()
{
exercicio9();
return 0;
}

void exercicio9()
{

    float matriz[4][3];
    float soma = 0;
    int linha;
    int coluna;
    int linha_usuario;
    float numero;

    for(linha = 0; linha < 4; linha++)
    {
        for(coluna =0; coluna < 3; coluna++)
        {
            printf("Entre com o valor [%d][%d] ",linha, coluna);

            scanf("%d", &numero);
        }
    }

    printf("Entre com a linha que quer imprimir [1 a 4]: ");
    scanf("%d", &linha_usuario);

    if(linha_usuario > 4 || linha < 1)
    {
        printf("Erro: linha invalida para impressao.");
    }
    else{
        for(coluna = 0; coluna < 3; coluna++)
        {
            soma += matriz[linha_usuario][coluna];
        }
        printf("Soma = %d", soma);
    }

}
