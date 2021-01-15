/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #4. Elabore um algoritmo que receba uma idade e retorne se a mesma é válida.
* Obs1. A idade será válida se estiver no intervalo de 0 a 125 anos.
* Obs2. Utilizar estruturas de seleção: simples ou composta, ou ambas.
*/

#include <stdio.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int idade = 0;

    printf("Digite a idade:\n");
    scanf("%d", &idade);
    
    if(idade >= 0 && idade <= 125) {
        printf("Idade válida");
    }
    else {
        printf("Idade inválida");
    }
    return 0;
}