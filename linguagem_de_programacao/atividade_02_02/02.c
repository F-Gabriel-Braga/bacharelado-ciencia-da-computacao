/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre | 2020
* Aluno: Francisco Gabriel Braga do Nascimento
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #2. Construa uma função que receba 4 valores e retorno o maior deles.
*/

#include <stdio.h>
#include <windows.h>]

int maior(int n1, int n2, int n3, int n4) {
    int maior = n1;
    if(n1 > n2) {
        if(n1 > n3) {
            if(n1 > n4) {
                maior = n1;
            }
            else {
                maior = n4;
            }
        }
        else {
            if(n3 > n4) {
                maior = n3;
            }
            else {
                maior = n4;
            }
        }
    }
    else {
        if(n2 > n3) {
            if(n2 > n4) {
                maior = n2;
            }
            else {
                maior = n4;
            }
        }
        else {
            if(n3 > n4) {
                maior = n3;
            }
            else {
                maior = n4;
            }
        }
    }
    return maior;

}

int main(){

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int n1, n2, n3, n4;
    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite um número:\n");
    scanf("%d", &n2);
    printf("Digite um número:\n");
    scanf("%d", &n3);
    printf("Digite um número:\n");
    scanf("%d", &n4);
    printf("Maior: %d\n", maior(n1, n2, n3, n4));
    return 0;
}