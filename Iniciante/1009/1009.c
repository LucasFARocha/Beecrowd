#include <stdio.h>

int main()
{
    char nome[15];
    double salarioFixo, valorVendas, comissao = 0.15, salarioFinal;

    scanf("%s", nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &valorVendas);

    salarioFinal = salarioFixo + valorVendas * comissao;

    printf("TOTAL = R$ %.2lf\n", salarioFinal);
}
