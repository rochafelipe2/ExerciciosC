#include <stdio.h>
#include <stdlib.h>
//LT03_EX07: Para cada um de 10 números fornecidos pelo usuário informar se este nº é par, ímpar, positivo ou negativo.


void verificarImparPar();

int main ()
{
    verificarImparPar();

    return 0;
}


void verificarImparPar ()
{
    int i;
    int num;
    for(i =1; i <= 10; i++)
    {
        printf("Entre com o %d numero: ",i);
        scanf("%d", &num);

        if(num%2 == 0)
        {
          printf("Numero par / ");
        }else
        {
           printf("Numero impar / ");
        }

        if( num > 0)
        {
             printf("Numero positivo \n ");
        }else
        {
             printf("Numero negativo \n ");
        }

    }

}
