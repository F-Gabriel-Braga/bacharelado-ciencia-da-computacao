#include <stdio.h>

int a, b, c;

int main() {
	printf("Digite o valor de A:\n");
	scanf("%d", &a);
	printf("Digite o valor de B:\n");
	scanf("%d", &b);
	printf("Digite o valor de C:\n");
	scanf("%d", &c);
	if(a < b && a < c) {
		printf("%d\n", a);
		if(b < c) {
			printf("%d\n", b);
			printf("%d\n", c);
		}
		else {
			printf("%d\n", c);
			printf("%d\n", b);
		}
	}
	else if(b < a && b < c) {
		printf("%d\n", b);
		if(a < c) {
			printf("%d\n", a);
			printf("%d\n", c);
		}
		else {
			printf("%d\n", c);
			printf("%d\n", a);
		}
	}
	else if(c < b && c < b) {
		printf("%d\n", c);
		if(a < b) {
			printf("%d\n", a);
			printf("%d\n", b);
		}
		else {
			printf("%d\n", b);
			printf("%d\n", a);
		}
	}
	return 0;
}
