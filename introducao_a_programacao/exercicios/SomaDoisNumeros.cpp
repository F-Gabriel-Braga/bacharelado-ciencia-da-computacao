#include <stdio.h>

int numero1, numero2, soma;

int main() {
	printf("Digite o primeiro numero:\n");
	scanf("%d", &numero1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &numero2);
	soma = numero1 + numero2;
	printf("A soma dos numeros eh igual a: %d", soma);
	return 0;
}
