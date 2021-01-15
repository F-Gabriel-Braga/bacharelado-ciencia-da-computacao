
/*
* 1. Crie um programa modularizado capaz de alocar dinamicamente um
* vetor de números reais de tamanho n. Nesse vetor, serão armazenados a
* altura de n pessoas. Ao final, o programa deve imprimir a maior, a
* menor e a média das alturas.
*/

#include <stdio.h>
#include <stdlib.h>

void teste_ponteiros(int n, float *v) {
    float maior = v[0], menor = v[0], soma, media;
    for(int i = 0; i < n; i++) {
        if(v[i] >  maior) {
            maior = v[i];
        }
        if(v[i] < menor) {
            menor = v[i];
        }
        soma += v[i];
    }
    media = soma / n;
    printf("Maior: %f\n", maior);
    printf("Menor: %f\n", menor);
    printf("Media: %f\n", media);
}

int main() {
    int n = 0;
    printf("Digite o numero n:\n");
    scanf("%d", &n);
    float *alturas = (float *) malloc(n * sizeof(float));
    for(int i = 0; i < n; i++) {
        printf("Digite a altura da pessoa %d:\n", (i + 1));
        scanf("%f", &alturas[i]);
    }
    teste_ponteiros(n, alturas);
    return 0;
}