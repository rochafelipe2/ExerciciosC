#include <stdio.h>
#include <stdlib.h>

//LT03_EX12: Faça um programa em Linguagem C que imprima uma tabela de
//conversão de polegadas para centímetros, de 1 a 20. Considere que Polegada = Centímetro * 2,54. (A saída deve ficar alinhada como se fosse uma tabela)

float converterPolegadasParaCentimetro(int polegada);


int main ()
{
    int i;
    for(i = 1; i <= 20 ; i++)
    {
       printf("Conversao %d para %f\n",i, converterPolegadasParaCentimetro(i));
    }


    return 0;
}


float converterPolegadasParaCentimetro(int polegada)
{
    return polegada / 2.54;
}
