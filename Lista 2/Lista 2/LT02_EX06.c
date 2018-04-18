#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Algoritmo: calculadora
// Autor    : Felipe Rocha
// Data     : 03/04/2018
// Descricao: LT02_EX06: Escreva um algoritmo em pseudocódigo que leia duas variáveis dadas
// pelo usuário, em seguida apresente um menu para o usuário perguntando qual operação
// matemática ele deseja executar. Cuidado com a divisão que não pode ser por 0 (zero).


float soma (float a, float b);
float subtracao (float a, float b);
float multiplicacao (float a, float b);
float divisao (float a, float b);
float calculadora(float a, float b, char operacao);

int main ()
{

   float a;
   float b;
   char operacao;

    printf("#########################################\n");
    printf("Ola, iniciando calculadora...\n");
    printf("Escolha dois numeros e depois a operacao.\n");
    printf("Entre com o primeiro numero \n");
        scanf("%f", &a);
    printf("Entre com o segundo numero \n");
        scanf("%f", &b);
    printf("Escolha a operacao:\n");
    printf(" + para adicao \n");
    printf(" - para subtracao \n");
    printf(" * para multiplicacao \n");
    printf(" / para divisao \n");
        scanf(" %c",&operacao);

     printf("Resultado = %f", calculadora(a,b,operacao));

    return 0;
}


float calculadora(float a, float b, char operacao)
{
    float retorno = 0;

  switch(operacao)
  {
    case '+':
      retorno = soma(a,b);
    break;
    case '-':
    retorno = subtracao(a,b);
    break;
    case '*':
     retorno = multiplicacao(a,b);
    break;
    case '/':
      retorno = divisao(a,b);
    break;
    default:
       retorno = 0;
  }

  return retorno;
}

float soma (float a, float b)
{
   return a + b;
}

float subtracao (float a, float b)
{
    return a - b;
}

float multiplicacao (float a, float b)
{
    return a * b;
}

float divisao (float a, float b)
{
    float div = 0;
    if(a  == 0|| b == 0)
    {
       printf("Exception: Calculadora não pode fazer divisao por zero.");
    }
    else
    {
      div = a / b;
    }

    return div;
}
