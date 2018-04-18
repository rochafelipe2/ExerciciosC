#include <stdio.h>
#include <stdlib.h>

//LT03_EX11: Faça um programa em Linguagem C que gere a série de Fibonacci
//até o vigésimo termo. A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc.


void binonacci(int termo);


int main ()
{
    binonacci(20);
    return 0;
}

void binonacci(int termo)
{
    int i;
    int n1 = 0;
    int n2 = 1;
    int razao;

    for(i =1; i <= termo; i++)
    {

       if(i == 1)
       {
           printf("%d \n",1);
       }else
       {
           razao = n1 + n2;
           n1 = n2;
           n2 = razao;

          printf("%d \n",razao);
       }
    }
}
