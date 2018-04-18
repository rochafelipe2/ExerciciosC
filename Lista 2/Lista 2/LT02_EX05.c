#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void ordenarMenorMaior(int n1, int n2,int n3);


int main ()
{

    ordenarMenorMaior(800,15,70000);

 return 0;
}

void ordenarMenorMaior(int n1, int n2,int n3)
{
  int menor = n1;
  int p1 = n1;
  int p2 = n2;
  int p3 = n3;

    if(n2 <= menor)
    {
        menor = n2;
      p1 = n2;
      p2 = n1;
      p3 = n3;

    }

    if(n3 <= menor){
      menor = n3;
      p1 = n3;

      if(n1 <= n2)
      {
        p2 = n1;
        p3 = n2;

      }else{
        p2 = n2;
        p3 = n1;
      }
    }

    printf("Números ordenados: %d | %d | %d",p1,p2,p3);
}
