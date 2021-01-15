/*
* Faça um algoritmo que receba um número e diga qual mês do ano ele representa caso contrário retorne uma mensagem de erro.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);
    if(n == 1) {
        printf("JANEIRO\n");
    }
    if(n == 2) {
        printf("FEVEREIRO\n");
    }
    if(n == 3) {
        printf("MARCO\n");
    }
    if(n == 4) {
        printf("ABRIL\n");
    }
    if(n == 5) {
        printf("MAIO\n");
    }
    if(n == 6) {
        printf("JUNHO\n");
    }
    if(n == 7) {
        printf("JULHO\n");
    }
    if(n == 8) {
        printf("AGOSTO\n");
    }
    if(n == 9) {
        printf("SETEMBRO\n");
    }
    if(n == 10) {
        printf("OUTUBRO\n");
    }
    if(n == 11) {
        printf("NOVEMBRO\n");
    }
    if(n == 12) {
        printf("DEZEMBRO\n");
    }
    if(n > 12 || n < 1 ) {
        printf("ERRO\n");
    }
    return 0;
}