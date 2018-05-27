#include <stdio.h>
#include <stdlib.h>

//LT04_EX8: Faça um programa em Linguagem C para ler o salário de 10 funcionarios.
//Mostrar uma lista desses salários em ordem decrescente.


int main()
{

salario10Funcionarios();

 return 0;
}


void salario10Funcionarios()
{

    float lista[10];
    float salario;
    int index;
    float maior_salario;
    float temporario;
    int index_indeterno;


    for(index =0; index <10; index++)
    {
         printf("Entre com o salario do funcionario %d \n",index+1);
         scanf("%f",&salario);

        if(index == 0)
        {
           maior_salario = salario;
           lista[index] = salario;
        }else
        {
            if(salario >= maior_salario)
            {
                maior_salario = salario; //atualiza o maior salario para o maior atual
                for(index_indeterno = 0; index_indeterno < index; index_indeterno++)
                {
                    temporario = lista[index_indeterno]; //Tecnica da bolha, passa o valor anterior para temporario
                    lista[index_indeterno] = maior_salario; //organiza o maior para o inicio da lista
                    lista[index_in] = temporario; // organiza menor para frente da lista
                }
            }else
            {
               maior_salario = salario;
               lista[index] = salario;
            }
        }




        }



for(index =0; index < 10; index++)
{

    printf("%f \n",lista[index]);
}

}

