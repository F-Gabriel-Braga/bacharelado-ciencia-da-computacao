#include <stdio.h>

int idade;

int main() {
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	if(idade > 17 && idade < 65) {
		printf("Maior de idade");
	}
	else if(idade < 18) {
		printf("Menor de idade");
	}
	else {
		printf("Pessoa idosa");
	}
	return 0;
}
