/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre
* Aluno: GERLAN ALVES MUNIZ
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #4. Construa uma função que informe quantos números inteiros, primos e divisíveis por 2 existem entre 2 e 10.000. 
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int isPrimo(int n) {
    int primo = 0;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            primo++;
            break;
        }
    }
    if(primo == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int isPar(int n) {
    if(n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void function() {
    int inteiros = 0, primos = 0, pares = 0;
    for(int i = 2; i < 10001; i++) {
        inteiros++;
        if(isPrimo(i)) {
            primos++;
        }
        if(isPar(i)) {
            pares++;
        }
    }
    printf("Inteiros: %d\n", inteiros);
    printf("Primos: %d\n", primos);
    printf("Pares: %d\n", pares);
    return 0;
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    function();

    return 0;
}