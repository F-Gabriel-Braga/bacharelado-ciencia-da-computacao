/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #1. Construa um algoritmo com o laço de repetição (do... while(condicao);, para calcular o valor do fatorial de um número inteiro e maior ou igual a Zero.
* Obs. Os número devem ser informados via teclado.
*/

#include <stdio.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n, i = 1, fatorial = 1;
    printf("Digite um número:\n");
    scanf("%d", &n);
    do {
        fatorial *= i;
        i++;
    }
    while(i <= n);
    printf("!%d = %d\n", n, fatorial);
}