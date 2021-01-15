/*
* Faça um algoritmo que leia três números e mostre-os em ordem decrescente.
*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite um numero:\n");
    scanf("%d", &a);
    printf("Digite um numero:\n");
    scanf("%d", &b);
    printf("Digite um numero:\n");
    scanf("%d", &c);
    if(a > b) {
        if(a > c) {
            if(b > c) {
                printf("Decrescente: %d, %d, %d\n", a, b, c);
            }
            else {
                printf("Decrescente: %d, %d, %d\n", b, c, a);
            }
        }
        else {
            printf("Decrescente: %d, %d, %d\n", c, a, b);
        }
    }
    else if(b > c) {
        if(a > c) {
            printf("Decrescente: %d, %d, %d\n", b, a, c);
        }
        else {
            printf("Decrescente: %d, %d, %d\n", b, c, a);
        }
    }
    else if(c > b) {
        if(a > b) {
            printf("Decrescente: %d, %d, %d\n", c, a, b);
        }
        else {
            printf("Decrescente: %d, %d, %d\n", c, b, a);
        }
    }
    return 0;
}