#include <stdio.h>
#include <stdlib.h>

//LT03_EX14: Faça um programa em Linguagem C que seja capaz de obter o resultado de
//uma exponenciação para qualquer base e expoente inteiro fornecidos, SEM utilizar a operação de exponenciação - pow().


int exponenciacao(int base, int expoente);

int main ()
{
    printf("Para a base %d e expoente %d o resultado eh = %d",2,5,exponenciacao(2,5));
    return 0;
}


int exponenciacao(int base, int expoente)
{
    int i;
    int resultado =0;

    for(i =1; i < expoente; i++)
    {

        if(i == 1)
        {
          resultado = base * base;
        }else
        {
          resultado = resultado * base;
        }

    }
        return resultado;

}
