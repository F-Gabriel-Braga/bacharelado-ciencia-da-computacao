#include <stdio.h>

int numeroHorasMes;
float valorPorHora, totalMes;

int main() {
	printf("Digite o valor que voce ganha por hora de trabalho:\n");
	scanf("%f", &valorPorHora);
	printf("Digite o numeros de horas de trabalho no mes:\n");
	scanf("%d", &numeroHorasMes);
	totalMes = numeroHorasMes * valorPorHora;
	printf("O valor total so salario no mes referido eh igual a: %.2f", totalMes);
	return 0;
}

