#include <stdio.h>

int a = 0, fatorial = 1;

int main(){
	printf("Digite o valor de A.\n");
	scanf("%d", &a);
	for(int i = a; i > 0; i--) {
		fatorial *= i; 
	}
	printf("%d! = %d\n", a, fatorial);
}
