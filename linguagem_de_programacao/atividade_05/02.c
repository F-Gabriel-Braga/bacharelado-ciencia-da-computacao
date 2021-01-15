/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #2 Elabore uma matriz quadrada 3x3 e preencha com nomes de animais, em seguida imprima-a.
*/

#include <stdio.h>

int main(void) {
    char animais[3][3][101];
    for(int i = 0; i < 3; i++) {
        for(int c = 0; c < 3; c++) {
            printf("Digite um nome de um animal:\n");
            gets(animais[i][c]);
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int c = 0; c < 3; c++) {
            printf("%s ", animais[i][c]);
            if((c + 1) == 3) {
                printf("\n");
            }
        }
    }
}