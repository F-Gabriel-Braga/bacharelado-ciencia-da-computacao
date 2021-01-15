#include <stdio.h>

int n;

int main() {
	printf("Digite um numero:\n");
	scanf("%d", &n);
	if(n > 0 && n < 100) {
		printf("%d compreende entre 0 e 100.\n", n);
	}
	else {
		
		printf("%d nao compreende entre 0 e 100.\n", n);
	}
	return 0;
}
