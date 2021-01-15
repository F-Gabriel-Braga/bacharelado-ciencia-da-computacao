/*                       
* IFCE - Instituto Federal do Ceará - Campus Tianguá-CE
* Nome: FRANCISCO GABRIEL BRAGA DO NASCIMENTO
* Disciplina: Linguagem de Programação - I
* 2º Semestre (Bacharelado em Ciência da Computação) - 2020.2
* 
* #1. Construa uma função que receba um valor inteiro positivo e retorne o fatorial desse número.
* Obs1.: 0! ou 1! = 1 .
*/

#include <stdio.h>
#include <windows.h>

int calculaFatorial(int numero) {
    int fatorial = 1;
    if(numero > 1) {
        for(int i = 2; i <= numero; i++) {
            fatorial *= i;
        }
    }
    return fatorial;
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero;    
    printf("Digite um número inteiro positivo:");
    scanf("%d", &numero);
    printf("!%d = %d", numero, calculaFatorial(numero));

    return 0;
}