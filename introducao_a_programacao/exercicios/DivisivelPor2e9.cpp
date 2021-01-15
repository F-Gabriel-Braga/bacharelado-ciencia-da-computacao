#include <stdio.h>

int n;

int main() {
	printf("Digite um numero:\n");
	scanf("%d", &n);
	if((n % 2 == 0) && (n % 9 == 0)) {
		printf("O numero eh divisivel por 2 e 9.\n");
	}
	else {
		printf("O numero nao eh divisivel por 2 e 9.\n");
	}
	return 0;
}
