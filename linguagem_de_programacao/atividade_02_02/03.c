/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre | 2020
* Aluno: Francisco Gabriel Braga do Nascimento
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #3. Construa uma função que receba um valor inteiro maior que 5 e menor que 10 e imprima um vetor de igual tamanho com valores inteiros informados pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void exibe_vetor(int n) {
    int *vetor;
    vetor = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        printf("Digite um número:\n");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
        if((i + 1) == n) {
            printf("\n");
        }
    }
}

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n;
    do {
        printf("Digite o número de elementos:\n");
        scanf("%d", &n);
    }
    while(n < 4 || n > 9);
    exibe_vetor(n);
    return 0;
}