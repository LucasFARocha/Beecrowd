#include <stdio.h>

int main()
{
    double area, pi=3.14159, raio;

    scanf("%lf", &raio); //para double � usado "lf"

    area = pi * raio * raio;

    printf("A=%.4lf\n", area); //para double � usado "lf"
    //o .4 determina que ser�o mostradas 4 casas decimais
}
