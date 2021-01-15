/*
* Faça um algoritmo que leia os valores A, B e informe o maior, menor ou se ambos são iguais.
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    if(a > b) {
        printf("Maior: A\nMenor: B\n");
    }
    if(a < b) {
        printf("Maior: B\nMenor: A\n");
    }
    if(a == b) {
        printf("A = B\n");
    }
    return 0;
}