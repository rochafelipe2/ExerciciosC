#include <stdio.h>
#include <stdlib.h>

//LT05_EX10: Escreva um programa em Linguagem C que simule a venda de ingressos para uma sessão de cinema, sabe-se que o cinema possui 150 poltronas, dispostas em 15 filas de 10 poltronas cada. Representado da seguinte maneira:

//0 - poltrona vazia
//1 - pagante inteira
//2 - pagante meia

//O preenchimento é aleatório (pode usar a função rand() ). Apresente

//a) Ocupação das poltronas;
//b) Quantidade de cada tipo;
//c) Valor apurado na sessão, sabendo que o ingresso custa R$ 12,00 (inteira).


int main ()
{
    exercicio10Cinema();
    return 0;
}

void exercicio10Cinema()
{

    int poltronas[15][10];
    int linha;
    int coluna;
    int qtd_vazias = 0;
    int qtd_inteiras = 0;
    int qtd_meias = 0;
    float total_arrecadado = 0.0;

    for(linha = 0; linha < 15 ; linha ++)
    {

        for(coluna =0; coluna < 10; coluna++)
        {
            poltronas[linha][coluna] = usuariosAleatorios(0,2);

              if(poltronas[linha][coluna] == 0)
        {
            qtd_vazias += 1;
        }

        if(poltronas[linha][coluna] == 1)
        {
            qtd_inteiras += 1;
            total_arrecadado += 12.0;
        }

        if(poltronas[linha][coluna] == 2)
        {
           qtd_meias +=1;
            total_arrecadado += 6.0;
        }

        }
    }


     for(linha = 0; linha < 15 ; linha ++)
    {

        for(coluna =0; coluna < 10; coluna++)
        {
            printf("%d \t", poltronas[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");

    printf("total vazias = %d \n",qtd_vazias);
    printf("total inteiras = %d \n",qtd_inteiras);
    printf("total meias = %d \n",qtd_meias);
    printf("total arrecadado = %f \n",total_arrecadado);
}

int usuariosAleatorios(int min, int max)
{
  return min + (int) (rand() / (double) (RAND_MAX + 1) * (max - min + 1));
}
