
#include <stdio.h>
#include <locale.h>

float nota1, nota2, nota3;
char metodo = '0'; 

float calculaNota(float n1, float n2, float n3, char met) {
	float resultado = 0.0;
	if(met == 'A') {
		resultado = ((n1 + n2 + n3) / 3);
	}
	else if(met == 'P') {
		resultado = (((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10);
	}
	else {
		printf("Nao disponivel");
	}
	return resultado;
}

int main() {
	setlocale(LC_ALL, "");
	
	printf("Digite o método de cálculo (A ou P): \n");
	scanf("%c", &metodo);
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	printf("Digite a terceira nota:\n");
	scanf("%f", &nota3);
	
	printf("Nota: %.1f\n", calculaNota(nota1, nota2, nota3, metodo));
	return 0;
}
