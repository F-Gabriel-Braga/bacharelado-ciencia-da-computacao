
#include <stdio.h>
#include<locale.h>
	
int numero = 0;

int menorprimo(int n) {
	int n_primo = 0;
	bool cod = true;
	int numero = n;
	
	while(cod){
		numero++;
		
		int condicaPrimo = 0;
		for(int y=2; y < numero; y++){
			if (numero % y == 0){
				condicaPrimo++;
				break;
			}
		}
		if (condicaPrimo == 0){
			n_primo = numero;
			cod = false;
		}
	}
	return n_primo;
}

int main() {
	setlocale (LC_ALL,"Portuguese");
	printf("Digite um numero inteiro :\n");
	scanf("%d",&numero);
	printf("O menor número primo, maior que o número passado como parâmeto é: %d", menorprimo(numero));
	return 0;
}
