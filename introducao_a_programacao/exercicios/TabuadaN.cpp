#include <stdio.h>

int n = 0;

int main() {
	printf("Digite um numero entre 1 e 10:\n");
	scanf("%d", &n);
	
	for(int i = 0; i <= 10; i++) {
		printf("%d x %d = %d\n", i, n, n * i);
	}
	
	return 0;
}
