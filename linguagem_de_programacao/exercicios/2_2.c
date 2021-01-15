/*
* Construa um algoritmo que receba um número inteiro e informar que dia da semana ele representa. Caso esteja fora da faixa retornar mensagem de erro.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite o valor de A:\n");
    scanf("%d", &n);
    if(n == 1) {
        printf("Domingo\n");
    }
    else if(n == 2) {
        printf("Segunda-Feira\n");
    }
    else if(n == 3) {
        printf("Terça-Feira\n");
    }
    else if(n == 4) {
        printf("Quarta-Feira\n");
    }
    else if(n == 5) {
        printf("Quinta-Feira\n");
    }
    else if(n == 6) {
        printf("Sexta-Feira\n");
    }
    else if(n == 7) {
        printf("Sabado\n");
    }
    else {
        printf("ERRO\n");
    }
    return 0;
}