#include <stdio.h>

float pedro = 0, maria = 0, joao = 0, ana = 0, nulo = 0, branco = 0, total = 0, n = 0;

int main() {
	while(true) {
		printf("Digite um numero entre 1 e 6:\n");
		scanf("%f", &n);
		if(n == 0) {
			break;
		}
		else if(n == 1) {
			pedro++;
			total++;
		}
		else if(n == 2) {
			maria++;
			total++;
		}
		else if(n == 3) {
			joao++;
			total++;
		}
		else if(n == 4) {
			ana++;
			total++;
		}
		else if(n == 5) {
			nulo++;
			total++;
		}
		else if(n == 6) {
			branco++;
			total++;
		}
		else {
			printf("Numero invalido.\n");
		}
	}
	
	float porPedro = (pedro / total) * 100;
	printf("Total de votos de Pedro: %.0f. ", pedro);
	printf("(%.2f)\n", porPedro);
	
	float porMaria = (maria / total) * 100;
	printf("Total de votos de Maria: %.0f. ", maria);
	printf("(%.2f)\n", porMaria);
	
	float porJoao = (joao / total) * 100;
	printf("Total de votos de Joao: %.0f. ", joao);
	printf("(%.2f)\n", porJoao);
	
	float porAna = (ana / total) * 100;
	printf("Total de votos de Ana: %.0f. ", ana);
	printf("(%.2f)\n", porAna);
	
	float porNulo = (nulo / total) * 100;
	printf("Total de votos nulos: %.0f. ", nulo);
	printf("(%.2f)\n", porNulo);
	
	float porBranco = (branco / total) * 100;
	printf("Total de votos em branco: %.0f. ", branco);
	printf("(%.2f)\n", porBranco);
	
	if(pedro > maria) {
		if(pedro > joao) {
			if(pedro > ana) {
				printf("Pedro eh o vencedor.\n");
			}
		}
	}
	
	if(maria > pedro) {
		if(maria > joao) {
			if(maria > ana) {
				printf("Maria eh a vencedora.\n");
			}
		}
	}
	
	if(joao > pedro) {
		if(joao > maria) {
			if(joao > ana) {
				printf("Joao eh o vencedor.\n");
			}
		}
	}
	
	if(ana > pedro) {
		if(ana > maria) {
			if(ana > joao) {
				printf("Ana eh a vencedora.\n");
			}
		}
	}
	
	return 0;
}
