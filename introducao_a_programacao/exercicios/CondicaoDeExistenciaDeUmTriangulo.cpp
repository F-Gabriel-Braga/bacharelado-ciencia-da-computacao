#include <stdio.h>
#include <locale.h>

float n1 = 0, n2 = 0 , n3 = 0, maior;

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número:\n");
	scanf("%f", &n1);
	printf("Digite um número:\n");
	scanf("%f", &n2);
	printf("Digite um número:\n");
	scanf("%f", &n3);
	
	if (n1 >= n2 + n3 || n2 >= n1 + n3 || n3 >= n1 + n2) {
		printf("Não é possível formar um triângulo.\n");
	}
	else {
		printf("É possível formar um triângulo: ");
		if((n1 == n2) && (n1 == n3)) {
			printf("Equilátero.\n");
		}
		else if((n1 == n2) || (n1 == n2) || (n2 == n3)) {
			printf("Isósceles.\n");
		}
		else {
			printf("Escaleno.\n");
		}
	}
	
	return 0;
}
