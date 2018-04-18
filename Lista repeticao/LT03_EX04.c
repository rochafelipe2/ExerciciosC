#include <stdio.h>

int calcularFatorial(int num);

int main ()
{

    printf("%d \n",calcularFatorial(5));
    printf("%d\n",calcularFatorialRecursivamente(5));

    printf("%d\n",calcularFatorial(6));
    printf("%d\n",calcularFatorialRecursivamente(6));

    return 0;
}


int calcularFatorialRecursivamente(int num)
{
    int i;

    if(num == 1)
    {
        return 1;
    }


  return num * calcularFatorial(num-1);
}

int calcularFatorial(int num)
{
    int i;
    int x = 1;
    for(i = num; i > 1;i--)
    {
        x = x * i;
    }

    return x;
}
