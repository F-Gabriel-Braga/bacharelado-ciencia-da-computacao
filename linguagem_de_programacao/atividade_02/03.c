/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #3. Faça um programa que leia um número inteiro e imprima o seu antecedente e o seu sucessor.
*/

#include <stdio.h>
#include <windows.h>

int numero = 0, antecessor = 0, sucessor = 0;

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Digite o número inteiro:\n");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
    return 0;
}