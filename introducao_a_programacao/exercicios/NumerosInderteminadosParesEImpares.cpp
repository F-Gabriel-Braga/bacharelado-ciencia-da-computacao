#include <stdio.h>

int numero = 0, pares = 0, impares = 0;

int main() {
	
	while(true) {
		printf("Digite um numero:");
		scanf("%d", &numero);
		if(numero == 0) {
			break;
		}
		if(numero % 2 == 0) {
			pares++;
		}
		else {
			impares++;
		}
	}
	printf("Numero de pares: %d\n", pares);
	printf("Numero de Impares: %d\n", impares);
	return 0;
}
