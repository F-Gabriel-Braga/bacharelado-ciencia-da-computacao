#include <stdio.h>
#include <locale.h>

float calculaMedia() {
	float n = 0, soma = 0, quantidade = 0, media = 0;
	while(true) {
		printf("Digite um número:\n");
		scanf("%f", &n);
		if(n <= 0) {
			break;
		}
		else {
			soma += n;
			quantidade++;
			n = 0;	
		}
	}
	if(soma > 0) {
		media = soma / quantidade;
	}
	return media;
}

int main() {
	setlocale(LC_ALL, "");
	float media = calculaMedia();
	if(media > 0) {
		printf("Média = %.2f", media);
	}
	return 0;
}
