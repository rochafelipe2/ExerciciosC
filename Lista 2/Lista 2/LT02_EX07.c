#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Algoritmo: notasMusicais
// Autor    : Felipe Rocha
// Data     : 03/04/2018
// Descricao: LT02_EX07: Escreva um algoritmo em pseudocódigo usando a seleção de múltipla
//escolha para ler uma letra indicando o nome de uma nota musical e escreva o nome correspondente da mesma.
//Se uma nota inválida for informada então escreva uma mensagem informando o ocorrido. Pesquise as letras -
//notas musicais básicas. Exemplo: “A” - Nota Lá. “H”: Nota Inválida..



void buscarNotaMusical(char letra);

int main ()
{
    char letra;

    printf("Escolha uma nota musical \n");
    printf("D para Do \n");
    printf("R para Re \n");
    printf("M para Mi \n");
    printf("F para Fa \n");
    printf("S para So \n");
    printf("L para La \n");
    printf("S para Si \n");
    scanf(" %c", &letra);

    buscarNotaMusical(letra);

    //Unit test
    buscarNotaMusical('D');
    buscarNotaMusical('R');
    buscarNotaMusical('M');
    buscarNotaMusical('F');
    buscarNotaMusical('S');
    buscarNotaMusical('L');
    buscarNotaMusical('z');
    buscarNotaMusical('k');
    return 0;
}

void buscarNotaMusical(char letra)
{

    switch(letra)
    {
    case 'D':
    case 'd':
        printf("Do\n");
    break;
    case 'R':
    case 'r':
        printf("Re\n");
    break;
    case 'M':
    case 'm':
        printf("Mi\n");
    break;
    case 'F':
    case 'f':
        printf("Fa\n");
    break;
    case 'S':
    case 's':
        printf("So\n");
    break;
    case 'L':
    case 'l':
        printf("La\n");
    break;
    case 'Z':
    case 'z':
        printf("Si\n");
    break;
    default:
        printf("Nota inválida. =/ \n");
    }

}
