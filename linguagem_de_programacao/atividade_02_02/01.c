/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre | 2020
* Aluno: Francisco Gabriel Braga do Nascimento
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #1. Construa uma função com passagem de 2 parâmetros que imprima a soma e multiplicação dos valores informados. 
*/

#include <stdio.h>
#include <windows.h>

void soma_multiplica(int n1, int n2) {
    printf("Soma: %d\n", (n1 + n2));
    printf("Multiplicação: %d\n", (n1 * n2));
    return 0;
}

int main(){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n1, n2;
    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite um número:\n");
    scanf("%d", &n2);
    soma_multiplica(n1, n2);
    return 0;
}