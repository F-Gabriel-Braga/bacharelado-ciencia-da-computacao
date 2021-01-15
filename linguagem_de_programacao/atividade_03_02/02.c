/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre | 2020
* Aluno: Francisco Gabriel Braga do Nascimento
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #2. Construa uma função recursiva com passagem de parâmetro que receba a quantidade de número para uma sequência de fibonacci e em seguida exiba a sequência.
* Obs.: Não aceitar como entrada valores menores que 1 nem maiores que 20.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void sequencia_fibonacci(int n) {
    for(int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero;
    do {
        printf("Digite um número:\n");
        scanf("%d", &numero);
    } while(numero < 1 || numero > 20);
    sequencia_fibonacci(numero);
    return 0;
}