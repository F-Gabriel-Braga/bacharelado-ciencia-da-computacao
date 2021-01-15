#include <stdio.h>

int numeros[5] = {0, 0, 0, 0, 0};
int quantidade = 0;

int main() {
	for(int i = 0; i < 5; i++) {
		printf("Digite um numero: \n");
		scanf("%d", &numeros[i]);
		for(int c = 2; c < numeros[i]; c++) {
			if(numeros[i] % c == 0) {
				if(numeros[i] != 2) {
					numeros[i] = 0;
					break;
				}
			}
		}
	}
	
	for(int i = 0; i < 5; i++) {
		if(i == 0) {
			printf("Primos:\n");
		}
		if(numeros[i] != 0) {
			quantidade++;
			printf("%d\n", numeros[i]);
			
		}
	}
	
	printf("\nQuantidade: %d\n", quantidade);
	return 0;
}
