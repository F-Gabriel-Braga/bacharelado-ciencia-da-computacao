#include <stdio.h>

int numeroHoras = 0;
float salarioMinimo = 0, salario = 0;

int main() {
	printf("Digite o numero de horas trabalhadas:\n");
	scanf("%d", &numeroHoras);
	printf("Digite o valor do salario minimo:\n");
	scanf("%f", &salarioMinimo);
	salario = (((salarioMinimo / 2.0) * numeroHoras) * 0.97);
	printf("O salario a receber eh igual a: %.2f", salario);
	return 0;
}
