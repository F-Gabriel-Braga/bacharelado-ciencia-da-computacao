#include <stdio.h>
#include <locale.h>

int n;

int main() {
	setlocale(LC_ALL, "");
	printf("Digite um numero inteiro:");
	scanf("%d", &n);
	if(n % 3 == 0) {
		printf("� multiplo de 3\n");
	}
	else {
		printf("N�o � multiplo de 3");
	}
	return 0;
}
