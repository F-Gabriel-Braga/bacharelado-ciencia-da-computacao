/*
* Construa um algoritmo que receba dois número e informe-os em ordem crescente e em decrescente.
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite um numero:\n");
    scanf("%d", &a);
    printf("Digite um numero:\n");
    scanf("%d", &b);
    if(a < b) {
        printf("Crescente: %d, %d\n", a, b);
        printf("Decrescente: %d, %d\n", b, a);
    }
    else if(a > b) {
        printf("Crescente: %d, %d\n", b, a);
        printf("Decrescente: %d, %d\n", a, b);
    }
    return 0;
}