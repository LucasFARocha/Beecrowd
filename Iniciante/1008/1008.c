#include <stdio.h>

int main()
{
    int numFuncionario, horasTrabalhadas;
    float qtdHora, salario;

    scanf("%d", &numFuncionario);
    scanf("%d", &horasTrabalhadas);
    scanf("%f", &qtdHora);

    salario = horasTrabalhadas * qtdHora;

    printf("NUMBER = %d\n", numFuncionario);
    printf("SALARY = U$ %.2f\n", salario);
}
