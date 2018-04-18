#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


// Algoritmo: notasMusicais
// Autor    : Felipe Rocha
// Data     : 03/04/2018
//LT02_EX09: Elabore um algoritmo em pseudocódigo que receba a idade de um nadador
//e apresente sua classificação em uma das categorias abaixo:
//    Infantil A= de 5 a 7 anos,
//    Infantil B= de 8 a 10 anos,
//    Juvenil A= de 11 a 13 anos,
//    Juvenil B= de 14 a 17 anos e
//    Sênior= maiores de 18 anos.


void classificarNadadador (int idade);

int main ()
{
    int idade;

    printf("Entre com a idade do atleta \n");
    printf("lembrando que somente atletas a partir de 5 anos. \n");
    scanf("%d", &idade);

    if(idade < 5)
    {
       printf("Bebe chorao nao desce para o play");
    }
    else
    {
      classificarNadadador(idade);
    }


 return 0;
}

void classificarNadadador (int idade)
{

    switch(idade)
    {
        case 5:
        case 6:
        case 7:
            printf("infantil A");
        break;
        case 8:
        case 9:
        case 10:
            printf("Infantil B");
        break;
        case 11:
        case 12:
        case 13:
            printf("Juvenil A");
        break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            printf("Juvenil B");
        break;
        default:
           printf("Senior");

    }
}
