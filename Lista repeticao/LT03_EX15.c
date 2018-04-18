#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//LT03_EX15: Faça um programa em Linguagem C que verifique se um número fornecido pelo usuário é primo ou não.

bool numeroPrimo(int numero);

int main ()
{
    int i;
    for(i =0; i <= 100; i++)
    {
      printf("%d = %d\n", i,numeroPrimo(i));
    }

    return 0;
}

bool numeroPrimo(int numero)
{
    int i;
    int contadorDivisores=0;
    for(i = numero; i > 1; i--)
    {
        if(numero%i == 0)
        {
            contadorDivisores +=1;
        }

    }

    //Numero primo só é divisível por 1 e por ele mesmo
    if(contadorDivisores == 1)
    {
        return true;
    }
    else{
        return false;
    }

}
