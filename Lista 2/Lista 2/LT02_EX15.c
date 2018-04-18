#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Algoritmo: realizarOperacaobancaria
// Autor    : Felipe Rocha
// Data     : 03/04/2018
//LT02_EX15: Escreva um algoritmo que, para uma conta bancária, leia o seu número,
// o saldo, o tipo de operação a ser realizada (depósito ou retirada) e o valor da
//  operação. Após, determine e mostre o novo saldo. Se o novo saldo ficar negativo,
//   deve ser mostrada, também, a mensagem “conta estourada”.


realizarOperacaobancaria(int conta, char tipo_operacao, float saldo, float valorOperacao);

int main()
{
    realizarOperacaobancaria(100,'R',1000,50);
    realizarOperacaobancaria(100,'R',1000,50);
    realizarOperacaobancaria(200,'D',1000,50);
    realizarOperacaobancaria(200,'R',1000,50);
    realizarOperacaobancaria(300,'D',1000,-100);

    return 0;
}

realizarOperacaobancaria(int conta, char tipo_operacao, float saldo, float valorOperacao)
{
    float novoSaldo = saldo;


    printf("##############################################\n");

    printf("Conta: %d \n", conta);

    switch(tipo_operacao)
    {
     case 'D':
         if(valorOperacao > 0)
         {
            novoSaldo = saldo +  valorOperacao;
         }else
         {
          printf("Valor invalido para a operacao \n");
         }

         break;
     case 'R':
         if(valorOperacao > 0)
         {
            novoSaldo = saldo -  valorOperacao;
         }else
         {
          printf("Valor invalido para a operacao \n");
         }

         break;
     default:
         printf("Operacao invalida \n");
    }



    printf("Novo saldo: %f \n", novoSaldo);
    if(novoSaldo < 0)
    {
       printf("Conta estourada.");
    }
    printf("##############################################\n");
}
