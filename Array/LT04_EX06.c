#include <stdio.h>
#include <stdlib.h>
//LT04_EX06: Fa�a um programa em Linguagem C para ler dois vetores de n�meros inteiros,
// cada um com 30 posi��es. Crie um terceiro vetor onde cada valor � a soma dos valores
// contidos nas posi��es respectivas dos vetores originais. Imprima depois os tr�s vetores.


int main()
{
    tresVetores();

    return 0;
}



void tresVetores()
{

    int vetor1[30];
    int vetor2[30];
    int vetor3[30];

    int i;


    for(i = 0; i < 30; i++)
    {
        vetor1[i] = rand();
        vetor2[i] = rand();

        vetor3[i] = vetor1[i] + vetor2[i];
    }



    for(i = 0; i < 30; i++)
    {

        printf("posicao %d valor vetor1 = %d \t valor vetor2 = %d \t valor vetor3 =  %d \n",i,vetor1[i],vetor2[i],vetor3[i]);
    }
}
