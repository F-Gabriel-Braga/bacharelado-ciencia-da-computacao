#include <stdio.h>
/*
* Escreva um programa capaz de ler uma matriz de tamanho variável (leia: linha, depois coluna).
* Depois de lida a dimensão da matriz, o algoritmo deve ler todos os elementos da matriz, um a um.
* Ao final, o algoritmo deve exibir toda a matriz.

* Observe o formato da saída esperada nos casos de teste.
*/

int main() {
    int linha = 0, coluna = 0;
    scanf("%d", &linha);
    scanf("%d", &coluna);
    int matriz[linha][coluna];
    for (int i = 0; i < linha; i++){
        for(int c = 0; c < coluna; c++) {
            scanf("%d", &matriz[i][c]);
        }
    }
    for (int i = 0; i < linha; i++){
        for(int c = 0; c < coluna; c++) {
            printf("%02d ", matriz[i][c]);
            if((c + 1) == coluna) {
                printf("\n");
            }
        }
    }
    return 0;
}