#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
//contratos das funções
double calcularMedia(int n1, int n2, int n3, int n4);

float calcularArea(float raio);

int main()
{
    printf("Média = %lf",calcularMedia(6,7,8,9));
    return 0;
}


double calcularMedia(int n1, int n2, int n3, int n4)
{
    return (n1 + n2 + n3 + n4) / 4;
}

float calcularArea(float raio)
{
    float area = PI * pow(raio,2);

    return area;
}
