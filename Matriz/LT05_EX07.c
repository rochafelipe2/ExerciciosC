#include <stdio.h>
#include <stdlib.h>
//Faça um programa em Linguagem C que crie e alimente uma matriz 2 x 4 de valores inteiros e:

//a) apresente a média dos valores da matriz toda;
//b) apresente a média dos valores de cada linha da matriz;
//c) apresente qual a linha que tem a menor média de valores;


int main()
{
    exercicio7();
    return 0;
}

void exercicio7()
{
  int matriz[2][4];
  int media_total = 0;
  int medias[2];
  int linha_menor_media;
  int menor_media_temporaria;
  int linha;
  int coluna;
  int numero;
  int media_linha;

  for(linha = 0; linha < 2; linha++)
  {

      for(coluna = 0; coluna < 4; coluna++)
      {
          scanf("%d", &numero);

          matriz[linha][coluna] = numero;
          media_total += numero;
          media_linha += numero;
          //captura os valores para média da linha

      }

      medias[linha] = media_linha / 4;
      media_linha = 0;

      if(linha == 0)
      {
       linha_menor_media = linha;
       menor_media_temporaria = medias[linha];
      }


      if(medias[linha] <= menor_media_temporaria)
      {

          linha_menor_media = linha;
      }
  }

  printf("Media total = %d \n",media_total/8);

  for(linha = 0; linha < 2; linha ++)
  {
      printf("Media linha %d = %d \n",linha+1,medias[linha]);
  }

  printf("Linha com menor media = %d \n",linha_menor_media+1);

  for(linha=0; linha < 2; linha++)
  {
      for(coluna =0; coluna < 4; coluna++)
      {
          printf("%d \t", matriz[linha][coluna]);
      }
  printf("\n");
  }

}
