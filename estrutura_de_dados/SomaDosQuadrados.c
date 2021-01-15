#include <stdio.h>


int main() {
    int numero = 0, soma = 0;
    scanf("%d", &numero);
    for(int i = 1; i <= numero; i++) {
        soma += (i * i);
    }
    printf("%d", soma);
    return 0;
}