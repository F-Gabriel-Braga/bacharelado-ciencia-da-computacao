#include <stdio.h>

float pesoSaco, gato1, gato2, resto;

int main() {
	printf("Digite o valor do peso do saco em quilos:\n");
	scanf("%f", &pesoSaco);
	printf("Digite o valor do peso da racao do gato 1 em gramas:\n");
	scanf("%f", &gato1);
	printf("Digite o valor do peso da racao do gato 2 em gramas:\n");
	scanf("%f", &gato2);
	resto = (pesoSaco * 1000) - 5 * (gato1 + gato2);
	printf("Restará %.2f de racao em gramas apos cinco dias.", resto);
	return 0;
}
