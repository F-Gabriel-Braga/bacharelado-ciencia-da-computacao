
/*
* 2. Crie um programa que aloca dinamicamente uma matriz de números
* inteiros de dimensão MxN. O programa deve ver modularizado e ter
* funções para alocar, ler, imprimir e deslocar a matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int m, n;
int **interios;

void alocar() {
    printf("Digite o numero de linhas M:");
    scanf("%d", &m);
    printf("Digite o numero de colunas N:");
    scanf("%d", &n);
    interios = (int *) malloc(m * sizeof(int));
    for(int i = 0; i < m; i++) {
        interios[i] = (int *) malloc(n * sizeof(int));
    }
}
void ler() {
    for(int i = 0; i < m; i++) {
        for(int c = 0; c < n; c++) {
            printf("Digite o numero da linha %d coluna %d:", (i + 1), (c + 1));
            scanf("%d", &interios[i][c]);
        }
    }
}
void imprimir() {
    for(int i = 0; i < m; i++) {
        for(int c = 0; c < n; c++) {
            printf("%d ", interios[i][c]);
            if((c + 1) == n) {
                printf("\n");
            }
        }
    }
}
void deslocar() {
    free(interios);
}

int main() {
    alocar();
    ler();
    imprimir();
    deslocar();
    return 0;
}