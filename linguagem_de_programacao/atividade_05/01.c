/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #1. Construa um vetor de 10 posições de números inteiros, insira os valores via
* teclado, em seguida imprima-o invertido, ou seja, do último ao primeiro valor informado.
*/

#include <stdio.h>

int main() {
    int vetor[10] = {0};
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero na posicao %d:", (i + 1));
        scanf("%d", &vetor[i]);
    }
    for(int i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
}