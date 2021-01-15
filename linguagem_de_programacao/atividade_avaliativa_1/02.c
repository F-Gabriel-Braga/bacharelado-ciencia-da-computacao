/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #2. Construa uma função que monte uma matriz. A função receberá como parâmetros dois valores que definirão a quantidade de linhas e colunas nessa ordem.
* Obs1.: Os valores informados para os parâmetros não podem ser menores que 2 e nem maiores que 5.
* Obs2.: A matriz deve ser preenchida com valores inteiros e positivos informados via teclado pelo usuário.
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void monta_matriz(int linha, int coluna) {
    int **matriz = malloc(linha * sizeof(int));
    for(int i = 0; i < linha; i++)
        matriz[i] = malloc(coluna * sizeof(int));
    
    for(int l = 0; l < linha; l++) {
        for(int c = 0; c < coluna; c++) {
            do {
                printf("Digite um número inteiro positivo: ");
                scanf("%d", &matriz[l][c]);
            }
            while(matriz[l][c] < 1);
        }   
    }
    printf("\n\nMatriz gerada:\n");
    for(int l = 0; l < linha; l++) {
        for(int c = 0; c < coluna; c++) {
            printf("%d ", matriz[l][c]);
            if((c + 1) == coluna) {
                printf("\n");
            }
        }   
    }
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int linha, coluna;
    do {
        printf("Digite o número de linhas:");
        scanf("%d", &linha);
        printf("Digite o número de colunas:");
        scanf("%d", &coluna);
    }
    while((linha < 2 || linha > 5) || (coluna < 2 || coluna > 5));
    monta_matriz(linha, coluna);
    
    return 0;
}