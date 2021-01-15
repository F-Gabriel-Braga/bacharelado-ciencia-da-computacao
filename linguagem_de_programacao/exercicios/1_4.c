/*
* Elabore um algoritmo que verifique se um número é par ou ímpar.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);
    n % 2 == 0 ? printf("PAR") : printf("IMPAR");
    return 0;
}