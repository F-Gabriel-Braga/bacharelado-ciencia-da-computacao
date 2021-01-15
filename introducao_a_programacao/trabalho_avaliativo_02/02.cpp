#include <stdio.h>
#include <locale.h>

int n;

bool verificarPerfeitabilidade(int n) {
	bool perfeitabilidade = false;
	int soma = 0;
	for(int i = 1; i < n; i++) {
		if(n % i == 0) {
			soma += i;
		}
	}
	if(soma == n) {
		perfeitabilidade = true;
	}
	else {
		perfeitabilidade = false;
	}
	return perfeitabilidade;
} 

int main() {
	setlocale(LC_ALL,"");
	printf("Digite um n�mero: \n");
	scanf("%d", &n);
	if(verificarPerfeitabilidade(n)) {
		printf("Perfeito");
	}
	else {
		printf("N�o Perfeito");
	}
	return 0;
	
}
