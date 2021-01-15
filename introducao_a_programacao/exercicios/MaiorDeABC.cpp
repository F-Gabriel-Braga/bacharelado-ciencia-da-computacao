#include <stdio.h>

int a, b, c;

int main() {
	printf("Digite o valor de A:\n");
	scanf("%d", &a);
	printf("Digite o valor de B:\n");
	scanf("%d", &b);
	printf("Digite o valor de C:\n");
	scanf("%d", &c);
	if(a > b && a > c) {
		printf("Maior eh %d", a);
	}
	else if(b > a && b > c) {
		printf("Maior eh %d", b);
	}
	else if(c > a && c > b) {
		printf("Maior eh %d", c);
	}
	return 0;
}
