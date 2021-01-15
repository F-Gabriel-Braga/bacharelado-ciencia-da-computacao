/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #3. Construa um algoritmo que receba um número inteiro positivo e retorne se o mesmo é par ou ímpar.
* Obs. Utilizar a estrutura de seleção simples ou composta, ou (simples e composta).
*/

#include <stdio.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n = 0;

    printf("Digite um número:\n");
    scanf("%d", &n);
    
    if(n % 2 == 0) {
        printf("Par\n");
    }
    else {
        printf("Ímpar\n");
    }
    return 0;
}