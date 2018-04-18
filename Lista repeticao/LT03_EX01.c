#include <stdio.h>

void imprimirUsuarios(int numUsuario);

int main ()
{
    imprimirUsuarios(5);
}


void imprimirUsuarios(int numUsuario)
{
    int contador;

    for(contador = 1 ; contador <= numUsuario; contador++)
    {
        printf("Seja bem vindo \n");
    }

}
