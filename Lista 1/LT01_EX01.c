#include <stdio.h>
#include <stdlib.h>

double calcularMedia(int n1, int n2, int n3, int n4);

int main()
{
    printf("M�dia = %lf",calcularMedia(6,7,8,9));
    return 0;
}

double calcularMedia(int n1, int n2, int n3, int n4)
{
    return (n1 + n2 + n3 + n4) / 4;
}
