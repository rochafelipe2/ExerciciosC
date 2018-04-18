#include <stdio.h>
#include <stdlib.h>
//LT03_EX10: Faça um programa em Linguagem C que receba dez números
// e que calcule e mostre a quantidade de números entre 30 e 90.


int verificarNumeroEntre30e90(float numero);

int main ()
{
    int i;
    int qtdNumerosEntre30e90 = 0;
    float numero = 0;
    for(i = 1; i <= 10; i++)
    {
        printf("Entre com o numero %d: ", i);
        scanf("%f", &numero);
        qtdNumerosEntre30e90 += verificarNumeroEntre30e90(numero);
    }
    printf("Quantidade de numeros entre 30 e 90 = %d", qtdNumerosEntre30e90);
    return 0;
}

int verificarNumeroEntre30e90(float numero)
{

    if(numero >= 30 && numero <= 90)
    {
        return 1;
    }else
    {
        return 0;
    }

}
