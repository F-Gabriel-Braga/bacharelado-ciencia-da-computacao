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
		printf("O maior eh %d\n", a);
		if(b < c) {
			printf("O menor eh %d\n", b);
		}
		else {
			printf("O menor eh %d\n", c);
		}
	}
	else if(b > a && b > c) {
		printf("O maior eh %d\n", b);
		if(a < c) {
			printf("O menor eh %d\n", a);
		}
		else {
			printf("O menor eh %d\n", c);
		}
	}
	else if(c > b && c > a) {
		printf("O maior eh %d\n", c);
		if(b < a) {
			printf("O menor eh %d\n", b);
		}
		else {
			printf("O menor eh %d\n", a);
		}
	}
	return 0;
}
