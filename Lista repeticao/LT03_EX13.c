#include <stdio.h>
#include <stdlib.h>

//LT03_EX13: Em uma eleição presidencial existem quatro candidatos.
//Os votos são informados por código. Os dados utilizados para a escrutinagem obedecem à seguinte codificação:

//1, 2, 3, 4 = voto para os respectivos candidatos;
//5 = voto nulo;
//6 = voto em branco.
//Faça um programa em Linguagem C que calcule e escreva:

//o total de votos para cada candidato e seu percentual sobre o total;
//o total de votos nulos e seu percentual sobre o total;
//o total de votos em branco e seu percentual sobre o total.
//Como finalizador do conjunto de votos, tem-se o valor 0 (zero).


void votacao();

int main ()
{
    votacao();
  return 0;
}


void votacao()
{
    int flag = 1;
    int voto;
    int total_1 = 0;
    int total_2 = 0;
    int total_3 = 0;
    int total_4 = 0;
    int total_5 = 0;
    int total_6 = 0;

    printf("##############VOTACAO 2018###############\n");
    while(flag > 0)
    {

      printf("ENTRE 1 PARA CANDIDATO 1 \n");
      printf("ENTRE 2 PARA CANDIDATO 2 \n");
      printf("ENTRE 3 PARA CANDIDATO 3 \n");
      printf("ENTRE 4 PARA CANDIDATO 4 \n");
      printf("ENTRE 5 PARA NULO \n");
      printf("ENTRE 6 PARA BRANCO \n");
        scanf("%d", &voto);

        switch(voto)
        {
        case 1:
            total_1 +=1;
            break;
        case 2:
            total_2 +=1;
            break;
        case 3:
            total_3 +=1;
            break;
        case 4:
            total_4 +=1;
            break;
        case 5:
            total_5 +=1;
            break;
        case 6:
            total_6 +=1;
            break;
        }

        printf("1 Para continuar a votacao e 0 para sair...");
         scanf("%d", &flag);
    }

      printf("TOTAL CANDIDATO 1 = %d\n",total_1);
      printf("TOTAL CANDIDATO 2 = %d\n",total_2);
      printf("TOTAL CANDIDATO 3 = %d\n",total_3);
      printf("TOTAL CANDIDATO 4 = %d\n",total_4);
      printf("TOTAL NULOS = %d\n",total_5);
      printf("TOTAL BRANCOS =  %d\n",total_6);

}
