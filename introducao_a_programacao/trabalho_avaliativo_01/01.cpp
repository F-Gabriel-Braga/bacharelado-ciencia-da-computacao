#include <stdio.h>

float alturaJoao = 1.34, alturaPedro = 1.60; 
int quantidadeAnos = 0;

int main() {
	while(true) {
		if(alturaJoao > alturaPedro) {
			break;
		}
		else {
			alturaJoao += 0.15;
			alturaPedro += 0.085;
			quantidadeAnos++;
		}
	}
	printf("A quantidade de anos para Joao ficar mais alto que Pedro eh igual a: %d", quantidadeAnos);
	return 0;
}
