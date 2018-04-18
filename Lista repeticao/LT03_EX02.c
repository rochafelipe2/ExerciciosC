
#include <stdio.h>

void tabuadaComFor(int num);
void tabuadaComWhile(int num);
void tabuadaComDoWhile(int num);

int main ()
{
    tabuadaComFor(5);
    printf("\n################################ \n ");
    tabuadaComWhile(5);
    printf("\n################################ \n ");
    tabuadaComDoWhile(5);
}


void tabuadaComFor(int num)
{
    printf("Tabuada do %d \n", num);
    int i;
    for( i= 1; i<= 10; i++)
    {

        printf("%d x = %d \n", i,i*num);
    }

}

void tabuadaComWhile(int num)
{
    printf("Tabuada do %d \n", num);
    int i = 1;
    while(i <= 10)
    {
         printf("%d x = %d \n", i,i*num);

         i++;
    }

}

void tabuadaComDoWhile(int num)
{
    int i = 1;
    do
    {
           printf("%d x = %d \n", i,i*num);
        i++;
    }while(i < 11);
}

