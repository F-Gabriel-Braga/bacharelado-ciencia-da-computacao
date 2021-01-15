/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #1. Construa um algoritmo que receba 3 números quaisquer e informe qual é o maior, o menor e se os mesmos são iguais.
* Obs. Utilizar estrutura de seleção encadeada.
*/

#include <stdio.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n1 = 0, n2 = 0, n3 = 0, maior = 0, menor = 0;

    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite um número:\n");
    scanf("%d", &n2);
    printf("Digite um número:\n");
    scanf("%d", &n3);

    if(n1 == n2) {
        if(n1 == n3) {
            maior = n1;
            menor = n1;
        }
        else {
            if(n1 > n3) {
                maior = n1;
                menor = n3;
            }
            else {
                maior = n3;
                menor = n1;
            }
        }
    }
    else if(n1 == n3) {
        if(n1 > n2) {
            maior = n1;
            menor = n2;
        }
        else {
            maior = n2;
            menor = n1;
        }
    }
    else if(n3 == n2) {
        if(n3 > n1) {
            maior = n3;
            menor = n1;
        }
        else {
            maior = n1;
            menor = n3;
        }
    }
    else if(n1 > n2) {
        if(n1 > n3) {
            maior = n1;
            if(n2 > n3) {
                menor = n3;
            }
            else {
                menor = n2;
            }
        }
        else {
            maior = n3;
            menor = n2;
        }
    }
    else if(n2 > n3) {
        maior = n2;
        if(n1 > n3) {
            menor = n3;
        }
        else {
            menor = n1;
        }
    }
    else {
        maior = n3;
        menor = n1;
    }
    
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    if(maior == menor) {
        printf("Os mesmos são iguais.");
    }
    else {
        printf("Os mesmos não são iguais.");
    }
    return 0;
}