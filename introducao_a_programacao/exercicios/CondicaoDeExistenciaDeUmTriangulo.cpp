#include <stdio.h>
#include <locale.h>

float n1 = 0, n2 = 0 , n3 = 0, maior;

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um n�mero:\n");
	scanf("%f", &n1);
	printf("Digite um n�mero:\n");
	scanf("%f", &n2);
	printf("Digite um n�mero:\n");
	scanf("%f", &n3);
	
	if (n1 >= n2 + n3 || n2 >= n1 + n3 || n3 >= n1 + n2) {
		printf("N�o � poss�vel formar um tri�ngulo.\n");
	}
	else {
		printf("� poss�vel formar um tri�ngulo: ");
		if((n1 == n2) && (n1 == n3)) {
			printf("Equil�tero.\n");
		}
		else if((n1 == n2) || (n1 == n2) || (n2 == n3)) {
			printf("Is�sceles.\n");
		}
		else {
			printf("Escaleno.\n");
		}
	}
	
	return 0;
}
