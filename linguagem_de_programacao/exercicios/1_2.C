/*
* Leia um número para verificar se ele é maior do que 20. Caso afirmativo imprima a metade desse número. Caso contrário imprima o seu quadrado.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);
    if(n > 20) {
        printf("%d\n", (n / 2));
    }
    else {
        printf("%d\n", (n * n));
    }
    return 0;
}