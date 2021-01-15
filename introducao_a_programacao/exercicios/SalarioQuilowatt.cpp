#include <stdio.h>

float salarioMinimo;
int qntQuiloWatts;

int main() {
	printf("Digite o valor do salario minimo:\n");
	scanf("%f", &salarioMinimo);
	printf("Digite a quantidade de quilowatts:\n");
	scanf("%f", &qntQuiloWatts);
	printf("O valor de cada quilowatt: %.2f\n", (salarioMinimo / 5));
	printf("O valor a ser pago por essa residencia: %.2f\n", (qntQuiloWatts * (salarioMinimo / 5)));
	printf("O valor a ser pago com desconto de 15: %.2f\n", ((qntQuiloWatts * (salarioMinimo / 5)) * 0.85));
	return 0;
}
