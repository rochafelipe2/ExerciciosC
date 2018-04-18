#include <stdio.h>
#include <stdlib.h>
//LT03_EX09: Faça um programa em Linguagem C que receba idade e o peso de sete pessoas. Calcule e mostre: i)
//a quantidade de pessoas com mais de 90 quilos; ii) a média das idades das pessoas.

int verificarPesoMaiorQue90(float peso);


int main ()
{
    printf("Algoritmo para calcular a media de idade e qtd de pessoas acima de 90 kg \n");
    int i;
    int idade;
    float peso;
    int somaIdade =0;
    float mediaIdade =0;
    int qtdPessosAcima90 =0;

    for(i = 1; i<= 7; i++)
    {
       printf("Entre com a idade da pessoa %d: ", i);
       scanf("%d", &idade);
       printf("%d",idade);
       somaIdade += idade;

       printf("Entre com o peso da pessoa %d: ", i);
       scanf("%f", &peso);
       qtdPessosAcima90 += verificarPesoMaiorQue90(peso);

    }

    mediaIdade = somaIdade / 7;

    printf("Media de idade = %f \n", mediaIdade);
    printf("Quantidade de pessoas acima de 90kg = %d",qtdPessosAcima90);

    return 0;
}


//Retorna 1 para pessoa com mais de 90 kg
int verificarPesoMaiorQue90(float peso)
{
    if(peso > 90)
    {
      return 1;
    }else
    {
      return 0;
    }
}

