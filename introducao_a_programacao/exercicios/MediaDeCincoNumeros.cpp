#include <stdio.h>
#include <locale.h>

float n1 = 0, n2 = 0 , n3 = 0, n4 = 0, n5 = 0, media = 0;

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número:\n");
	scanf("%f", &n1);
	printf("Digite um número:\n");
	scanf("%f", &n2);
	printf("Digite um número:\n");
	scanf("%f", &n3);
	printf("Digite um número:\n");
	scanf("%f", &n4);
	printf("Digite um número:\n");
	scanf("%f", &n5);
	media = (n1 + n2 + n3 + n4 + n5) / 5.0;
	printf("A media dos números é igual a: %.2f \n", media);
	printf("Os números acima da media são: ");
	if(n1 > media) {
		printf("%.2f, ", n1);
	}
	if(n2 > media) {
		printf("%.2f, ", n2);
	}
	if(n3 > media) {
		printf("%.2f, ", n3);
	}
	if(n4 > media) {
		printf("%.2f, ", n4);
	}
	if(n5 > media) {
		printf("%.2f.", n5);
	}
	return 0;
}
