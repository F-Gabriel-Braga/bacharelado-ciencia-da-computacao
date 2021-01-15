#include <stdio.h>

int n1, n2, n3, n4, soma;

int main() {
	printf("Digite o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &n2);
	printf("Digite o terceiro numero:\n");
	scanf("%d", &n3);
	printf("Digite o quarto numero:\n");
	scanf("%d", &n4);
	soma = n1 + n2 + n3 + n4;
	printf("A soma dos numeros eh igual a: %d", soma);
	return 0;
}
