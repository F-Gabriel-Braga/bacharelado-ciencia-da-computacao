#include <stdio.h>

int numeros[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int somaPares = 0;
int somaImpares = 0;

int main() {
	for(int i = 0; i < 10; i++) {
		printf("Digite um numero:");
		scanf("%d", &numeros[i]);
		if(numeros[i] % 2 == 0) {
			somaPares += numeros[i];
		}
		else {
			somaImpares += numeros[i];
		}
	}
	
	printf("A soma dos pares: %d\n", somaPares);
	printf("A soma dos impares: %d\n", somaImpares);
	return 0;
}
