#include <stdio.h>

int menorPrimo(int n) {
	int primo = 0;
	bool condicao = true;
	// Repetir a verificação dos primos acima do numero n
    for(int i = 1; condicao; i++) {
    	int numero = (n + i);
    	
    	// Verificar se o numero atual é primo
		int resultado = 0;
		for(int c = 2; c < numero; c++) {
    		if(numero % c == 0) {
    			resultado++;
				break;
			}
		}
		
		if(resultado == 0) {
			primo = numero;
			condicao = false;	
		}
    }
    return primo;
}

int main() {
	int n;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	printf("O numero primo acima e mais proximo de %d eh: %d", n, menorPrimo(n));
	return 0;
}
