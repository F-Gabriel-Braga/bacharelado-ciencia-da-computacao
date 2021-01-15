#include <stdio.h>

float nota1, nota2, mediaPonderada;

int main() {
	printf("Digite a nota 1:\n");
	scanf("%f", &nota1);
	printf("Digite a nota 2:\n");
	scanf("%f", &nota2);
	mediaPonderada = ((nota1 * 2) + (nota2 * 3))/5;
	printf("A media ponderada das notas eh igual a: %.2f", mediaPonderada);
	return 0;
} 
