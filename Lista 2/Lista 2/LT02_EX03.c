#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Algoritmo: verificarQuadrado
// Autor    : Felipe Rocha
// Data     : 03/04/2018
// Descricao: LT02_EX03: 3 - Faça uma programa que leia 3 valores A, B e C e verifique se esses valores representam os
//lados de um triângulo. Para que seja um triângulo, todos os lados devem ser maiores que zero
//e nenhum lado deve ser igual ou maior que a soma dos outros dois lados. Se A, B e C
//representam os lados de um triângulo, então calcule e imprima sua área:
//Área =SQRT (S*(S-a)*(S-b)*(S-c)) onde S = (a+b+c)/2
//Informe também o tipo do triângulo:
//Escaleno: todos os lados diferentes.
//Isósceles: 2 lados iguais.
//Eqüilátero: todos os lados iguais.

char verificarTipoQuadrado(int ladoA, int ladoB, int ladoC);
float calcularTriangulo(int ladoA, int ladoB, int ladoC);

int main()
{
     printf("Area do tringulo = %f \n", calcularTriangulo(4,5,6));



    return 0;
}

//Tipos de retorno
// A - Escaleno
// B - Isosceles
// C - Equilatero

float calcularTriangulo(int ladoA, int ladoB, int ladoC)
{
    float area = 0;
    float S = (ladoA + ladoB + ladoC) / 2;

    if((ladoA > 0 && ladoB > 0 && ladoC > 0) &&
       (ladoA < (ladoC + ladoB) &&
        ladoB < (ladoA + ladoC) &&
        ladoC < (ladoA + ladoB)
       ))
    {
      area = sqrt((S*(S-ladoA)*(S-ladoB)*(S-ladoC)));

      switch(verificarTipoQuadrado(ladoA,ladoB,ladoC))
     {
     case 'A':
         printf("Tipo trinqulo = Escaleno \n");
        break;
     case 'B':
           printf("Tipo trinqulo = Isosceles \n");
        break;
     case 'C':
           printf("Tipo trinqulo = Equilatero \n");
        break;

     }

    }else
    {

        printf("Não é trinagulo \n");
    }
    return area;
}


char verificarTipoQuadrado(int ladoA, int ladoB, int ladoC)
{

    char tipo;

    if(ladoA != ladoB && ladoA != ladoC)
    {
        tipo = 'A';
    }else
    {
        if(ladoA == ladoB && ladoB == ladoC && ladoA == ladoC)
        {
            tipo = 'C';
        }else
        {
            tipo = 'B';
        }
    }



    return tipo;
}
