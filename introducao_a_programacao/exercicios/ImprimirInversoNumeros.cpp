#include <stdio.h>

int numeros[6] = {0};

int main() {
	for(int i = 0; i < 6; i++) {
		printf("Digite um numero:\n");
		scanf("%d", &numeros[i]);
	}
	for(int i = 5; i >= 0; i--) {
		printf("%d ", numeros[i]);
	}
	return 0;
}
