/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #2. Elabore um algoritmo que receba um número qualquer via teclado e informe se o mesmo é primo.
* Obs1. Utilize o laço de repetição, while(condicao).
* Obs2. Validar o número, não pode ser menor ou igual a Zero. 
*/

#include <stdio.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n, i = 2, primo = 0;
    printf("Digite um número:\n");
    scanf("%d", &n);
    if(n > 0) {
        while(i < n) {
            if(n % i == 0) {
                primo++;
                break;
            }
            i++;
        }
        if(primo == 0) {
            printf("Primo.\n");
        }
        else {
            printf("Não primo.\n");
        }
    }
    else {
        printf("Número inválido.\n");
    }
}