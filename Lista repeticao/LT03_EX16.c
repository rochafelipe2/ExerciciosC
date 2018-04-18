#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//LT03_EX16: Em um campeonato de futebol existem QUATRO times, e cada um possui CINCO jogadores.
//Faça um programa em Linguagem C que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
//a quantidade de jogadores com idade inferior a 18 anos;
//a média das idades dos jogadores de cada time;
//a média das alturas de todos os jogadores do campeonato;
//a percentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato.


void montarCompeonato();

int main ()
{
    montarCompeonato();
    return 0;
}

void montarCompeonato()
{
    int times;
    int jogadores_menor18 = 0;
    float media_altura_campeonato = 0;
    float prc_jogadores_maior_80 = 0;
    int total_jogadores_campeonato = 0;

    for(times =1; times <= 4; times++)
    {
        int jogadores;
        int idade=0;
        float peso=0;
        float altura=0;
        float media_idade_time = 0;

        printf("##TIME %d\n", times);
        for(jogadores =1; jogadores <= 5; jogadores++)
        {
            printf("Entre com os dados do jogador %d do time %d \n",jogadores, times);
            printf("Idade: \n");
            scanf("%d", &idade);

            printf("Peso: \n");
            scanf("%f", &peso);

            printf("Altura: \n");
            scanf("%f", &altura);

            //alimenta media
            media_idade_time += idade;

            //verifica menor 18
            if(idade < 18)
            {
                jogadores_menor18 +=1;
            }

            //alimenta media altura
            media_altura_campeonato += altura;

            total_jogadores_campeonato +=1;

            //verifica peso
            if(peso > 80)
            {
                prc_jogadores_maior_80 +=1;
            }
        }
        printf("Media idade time %f = \n",(media_idade_time / 5));
    }

        printf("Jogadores com menos de 18 = %d", jogadores_menor18);
        printf("Media de altura do campeonato = %f", media_altura_campeonato / total_jogadores_campeonato);
        printf("% acima de 80 kg  = %f", (prc_jogadores_maior_80 / total_jogadores_campeonato) * 100);

}
