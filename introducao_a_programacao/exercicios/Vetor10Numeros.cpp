#include <stdio.h>

int numeros[10] = {0};
int n = 0;

int main() {
	for(int i = 0; i < 10; i++) {
		printf("Digite um numero:\n");
		scanf("%d", &n);
		if(n > 0) {
			numeros[i] = n;
		}
		else {
			numeros[i] = 0;
		}
	}
	
	for(int i = 0; i < 10; i++) {
		printf("%d ", numeros[i]);
	}
 	return 0;
}
