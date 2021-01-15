#include <stdio.h>
/*
* Escreva um programa capaz de ler os elementos de um vetor de tamanho fixo (10 elementos) e mostre, ao final, o maior elemento.
*/

int main() {
    int vetor[10] = {0};
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    int maior = vetor[0];
    for (int i = 0; i < 10; i++){ 
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    printf("%d", maior);
    return 0;
}