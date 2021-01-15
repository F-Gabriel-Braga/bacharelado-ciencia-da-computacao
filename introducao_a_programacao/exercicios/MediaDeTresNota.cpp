#include <stdio.h>

float nota1, nota2, nota3, media;

int main() {
	printf("Digite a nota 1:\n");
	scanf("%f", &nota1);
	printf("Digite a nota 2:\n");
	scanf("%f", &nota2);
	printf("Digite a nota 3:\n");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3)/3;
	printf("A media aritmética das notas: %.2f", media);
	return 0;
}
