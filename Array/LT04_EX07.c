#include <stdio.h>
#include <stdlib.h>
#define MAX 100
//LT04_EX07: Fa�a um programa em Linguagem C para ler um vetor de 100 posi��es.
// Solicitar ao usu�rio a quantidade de n�meros que pretende informar.
// Lembrem-se a quantidade deve ser avaliada e n�o poder� ultrapassar o
// limite m�ximo do vetor. Apresente o maior valor encontrado no vetor lido e sua posi��o.


int main()
{
     vetor100MaiorValorPosicao();
    return 0;
}

void vetor100MaiorValorPosicao()
{


    int vetor[100];
    int i;
    int maior_valor;
    int posicao;
    int quantidade_numeros =0;

    printf("ESCOLHA O TAMANHO DO VETOR LEMBRANDO QUE DEVE SER ENTRE 1 E 100 \n");
    scanf("%d", &quantidade_numeros);

    if(quantidade_numeros > 100 || quantidade_numeros <= 0)
    {
        //Exception
        printf("TAMANHO DE VETOR INVALIDO");
    }else
    {

        for(i =0; i < quantidade_numeros;i++ )
        {
            vetor[i] = rand();

            if(i == 0)
               maior_valor =  vetor[i];

            if(vetor[i] >= maior_valor)
            {
                 maior_valor = vetor[i];
                 posicao = i;
            }

        }

    printf("Maior valor = %d posicao %d",maior_valor,posicao);
    }




}
