#include <stdio.h>


//LT04_EX02: Fa�a um programa em Linguagem C que leia um vetor de 6 posi��es e o
//escreva. A seguir, ele conta quantos valores do vetor s�o negativos e escreva esta informa��o.

int main()
{
    vetorNumerosNegativos();
    return 0;
}


void vetorNumerosNegativos()
{
    int vetor[6];
    int i;
    int numero=0;
    int quantidade_negativos =0;

    for(i = 0; i < 6 ; i++)
    {
        scanf("%d", &numero);
        vetor[i] = numero;
        if(numero < 0)
        {
            quantidade_negativos += 1;
        }

    }

 printf("Quantidade de numeros negativos na lista = %d \n",quantidade_negativos);

}

