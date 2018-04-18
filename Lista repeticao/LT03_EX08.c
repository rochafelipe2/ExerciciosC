#include <stdio.h>
#include <stdlib.h>
//LT03_EX08: Construa um programa em Linguagem C que, dado um conjunto de valores inteiros
//e positivos (recebidos do usuário), determine qual o menor valor do conjunto. O final do
//conjunto de valores é conhecido através do valor zero, que não deve ser considerado.


void menorNumeroDoConjunto();

int main ()
{
    menorNumeroDoConjunto();
}

void menorNumeroDoConjunto()
{

    int parada = 1;
    int numero;
    int menor;
    while(parada > 0)
    {


        printf("Entre com o num: ");
        scanf("%d", &numero);

        if(parada == 1)
        {
          menor = numero;
        }

       if(numero <= menor && numero != 0)
       {
           menor = numero;
       }

        parada++;
       if(numero == 0)
       {
         parada = 0;
       }

       printf("menor numero %d \n", menor);

    }

}
