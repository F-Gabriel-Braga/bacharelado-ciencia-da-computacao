/*
* Faça um algoritmo que receba uma letra qualquer e retorne se ela é uma vogal, qual é a vogal se a mesma é maiúscula ou minúscula.
*/

#include <stdio.h>

int main() {
    char a;

    printf("Digite uma letra:\n");
    a = getchar();
    switch (a) {
    case 'a':
        printf("Vogal 'a' minuscula");
        break;
    case 'e':
        printf("Vogal 'e' minuscula");
        break;
    case 'i':
        printf("Vogal 'i' minuscula");
        break;
    case 'o':
        printf("Vogal 'o' minuscula");
        break;
    case 'u':
        printf("Vogal 'u' miauscula");
        break;
    case 'A':
        printf("Vogal 'A' maiuscula");
        break;
    case 'E':
        printf("Vogal 'E' maiuscula");
        break;
    case 'I':
        printf("Vogal 'I' maiuscula");
        break;
    case 'O':
        printf("Vogal 'O' maiuscula");
        break;
    case 'U':
        printf("Vogal 'U' maiuscula");
        break;
    default:
        printf("CONSOANTE");
    }
    return 0;
}