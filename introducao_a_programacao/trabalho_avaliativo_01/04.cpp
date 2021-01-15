#include <stdio.h>

int base = 0, expoente = 0, resultado = 1;

int main() {
	printf("Digite a base:");
	scanf("%d", &base);
	printf("Digite o expoente:");
	scanf("%d", &expoente);
	if(expoente > 0) {
		for(int i = 0; i < expoente; i++) {
			resultado *= base;
		}
	}
	printf("O resultado de %d^%d = %d", base, expoente, resultado);
	return 0;
}
