#include <stdio.h>

int main()
{
    double area, pi=3.14159, raio;

    scanf("%lf", &raio); //para double é usado "lf"

    area = pi * raio * raio;

    printf("A=%.4lf\n", area); //para double é usado "lf"
    //o .4 determina que serão mostradas 4 casas decimais
}
