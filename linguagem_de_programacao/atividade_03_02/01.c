/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre | 2020
* Aluno: Francisco Gabriel Braga do Nascimento
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #1. Construa uma função recursiva com passagem de parâmetro e com retorno que receba um valor inteiro e retorno o fatorial do mesmo.
* Obs.: não aceitar valores negativos.. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int fatorial(int n) {
    if(n == 1 || n == 0) {
        return 1;
    }
    else {
        return (n * fatorial(n - 1));
    }
}

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero;
    do {
        printf("Digite um número:\n");
        scanf("%d", &numero);
    } while(numero < 0);
    printf("%d! = %d", numero, fatorial(numero));
    return 0;
}