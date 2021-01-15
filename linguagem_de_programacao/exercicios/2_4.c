/*
* Elabore um algoritmo que receba dois números inteiros e verifique qual o maior e o menor entre eles.
*/

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite um numero:\n");
    scanf("%d", &n2);
    n1 > n2 ? printf("Maior: %d\nMenor: %d", n1, n2) : printf("Maior: %d\nMenor: %d", n2, n1);
    return 0;
}