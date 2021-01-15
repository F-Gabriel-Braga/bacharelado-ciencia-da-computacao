/*
* Elabore um algoritmo que verifique se um número digitado é positivo, negativo ou nulo.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);
    if(n > 0) {
        printf("POSITIVO\n");
    }
    if(n < 0) {
        printf("NEGATIVO\n");
    }
    if(n == 0) {
        printf("NULO\n");
    }
    return 0;
}