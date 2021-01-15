#include <stdio.h>

float alturas[6] = {0, 0, 0, 0, 0, 0};
float menor = 0, maior = 0;

int main() {
	for(int i = 0; i < 6; i++) {
		printf("Digite sua idade:\n");
		scanf("%f", &alturas[i]);
		
		if(alturas[i] > maior) {
			maior = alturas[i];
		}
		
		if(alturas[i] < menor || i == 0) {
			menor = alturas[i];
		}
	}
	printf("Maior altura eh: %f", maior);
	printf("Menor altura eh: %f", menor);
	return 0;
}
