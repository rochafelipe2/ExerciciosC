#include <stdio.h>

//LT04_EX03: Fa�a um programa em Linguagem C para ler 15 n�meros reais em um
//vetor e depois exibir os n�meros localizados nas posi��es impares.

int main()
{
    vetorNumerosReais();
    return 0;
}

void vetorNumerosReais()
{

    float vetor[15];
    int i;
    float numero;

    for(i =0; i < 15; i++)
    {
            scanf("%f",&numero);

            vetor[i] = numero;
    }

    //Rodar o vetor de 2 em 2 come�ando num impar.
    for(i =0; i < 15; i++)
    {
            if(i%2 != 0)
            printf("%f", vetor[i]);
    }
}
