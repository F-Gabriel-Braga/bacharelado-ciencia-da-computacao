/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #5. Elabore um algoritmo que receba dois números inteiros e verifique qual o maior e o menor entre eles.
* Obs. Utilizar a estrutura do operador ternário.
*/

#include <stdio.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n1 = 0, n2 = 0, maior = 0, menor = 0;

    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite um número:\n");
    scanf("%d", &n2);
    
    n1 > n2 ? printf("Maior: %d\nMenor: %d", n1, n2) : printf("Maior: %d\nMenor: %d\n", n2, n1);
    return 0;
}