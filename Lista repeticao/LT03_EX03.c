
#include <stdio.h>

void produtoDosInteirosImpares();


int main ()
{
    produtoDosInteirosImpares();
}

    void produtoDosInteirosImpares()
{
    int i;

    for(i = 1; i <= 15; i++)
    {

        if(i%2 != 0)
        {
           printf("Numero %d, produto = %d \n",i,i*i);
        }

    }

}
