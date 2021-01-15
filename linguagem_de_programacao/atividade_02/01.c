/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #1. Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
* a) A idade dessa pessoa
* b) Quantos anos ela terá em 2021
* c) A idade dessa pessoa em dias (considere que um ano possui 365 dias)
* d) A idade dessa pessoa em meses
*/

#include <stdio.h>
#include <windows.h>

int anoN = 0, anoA = 0, idadeA = 0, idadeD = 0, idadeM = 0;

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Digite o ano de nascimento:\n");
    scanf("%d", &anoN);
    printf("Digite o ano atual:\n");
    scanf("%d", &anoA);
    idadeA = anoA - anoN;
    idadeD = (idadeA * 365);
    idadeM = (idadeA * 12);
    printf("Idade em Anos: %d\n", idadeA);
    printf("Idade em 2021: %d\n", (2021 - anoN));
    printf("Idade em Dias: %d\n", idadeD);
    printf("Idade em Meses: %d\n", idadeM);
    return 0;
}