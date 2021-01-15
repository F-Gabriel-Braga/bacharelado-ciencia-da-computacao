#include <stdio.h>

int n;

int main() {
	printf("Digite um numero inteiro:");
	scanf("%d", &n);
	if(n > 0) {
		printf("POSITIVO");
	}
	else if(n < 0) {
		printf("NEGATIVO");
	}
	else {
		printf("NULO");
	}
	return 0;
}
