#include <stdio.h>

int a, b;

int main() {
	printf("Digite o numero A:\n");
	scanf("%d", &a);
	printf("Digite o numero B:\n");
	scanf("%d", &b);
	if( b != 0) {	
	 	if(a % b == 0) {
	 		printf("Eh divisivel.\n");
	 	}
	 	else {
	 		printf("Nao eh divisivel.\n");
		 }
	}
	else {
		printf("O denominador nao pode ser igual a 0.\n");
	}
	return 0;
}
