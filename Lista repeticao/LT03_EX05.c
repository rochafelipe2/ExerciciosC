#include <stdio.h>

//parametros
//Fa�a um programa em C que imprima todos os m�ltiplos de 3, entre 1 e 100.
// multiplo valor que queres saber os multiplos.
// valor at� onde vevera pesquisar, o inicial � 1.
void multiplosDeAte(int multiplo,int valorAte);


int main()
{
    multiplosDeAte(3,100);

}

void multiplosDeAte(int multiplo, int valorAte)
{
    int multiplicador;
    int i;
    for(i = 1; i < valorAte; i++)
    {
        //captura mo multiplicando
        multiplicador = i * i;

        if(multiplicador%multiplo == 0)
        {
            if(i == 1){printf("{");}



            if(i == (valorAte-1))
            {
                 printf("}");
            }else
            {
                 printf("%d,", i);
            }

        }
    }

}
