#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//LT02_EX08: Escreva um algoritmo em pseudocódigo que leia o conceito anual de um aluno em uma disciplina
//e informe o desempenho dele. Se for um conceito inválido escreva uma mensagem informando o ocorrido.
//Exemplo: “A” - Conhecimento Pleno, “B” - Conhecimento Parcialmente Pleno,
//“C” - Conhecimento Suficiente,
//“D” - Conhecimento Insuficiente. “Qualquer outro valor”: Conceito Inválido..


void informarDesempenho (char conceito);

int main ()
{

    char c;

    printf("Entre com o conceito do aluno \n");
    printf("Valores validos: A, B, C ou D \n");
    scanf(" %c", &c);

    informarDesempenho(c);

    return 0;
}

void informarDesempenho (char conceito)
{
    switch(conceito)
    {

    case 'A':
    case 'a':
        printf("Conhecimento Pleno");
    break;
    case 'B':
    case 'b':
        printf("Conhecimento Parcialmente Pleno");
    break;
    case 'C':
    case 'c':
        printf("Conhecimento Suficiente");
    break;
    case 'D':
    case 'd':
        printf("Conhecimento Insuficiente");
    break;
    default:
        printf("Conceito Inválido..");
    }

}
