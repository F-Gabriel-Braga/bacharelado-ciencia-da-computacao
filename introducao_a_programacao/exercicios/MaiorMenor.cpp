#include <stdio.h>

int a, b;

int main() {
	printf("Digite o valor de A.\n");
	scanf("%d", &a);
	printf("Digite o valor de B.\n");
	scanf("%d", &b);
	if(a > b) {
		printf("Maior -> A\n");
		printf("Menor -> B\n");
	}
	else {
		printf("Menor -> A\n");
		printf("Maior -> B\n");
	}
	return 0;
}
