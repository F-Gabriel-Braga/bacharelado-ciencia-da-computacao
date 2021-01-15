/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #2. Elabore um algoritmo utilizando o case no C para que sejam verificadas as faixas etárias onde de
* 0 .. 3 (bebê),
* 4 .. 10 (criança),
* 11 ..17 (adolescente),
* e acima de 17 (adulto),
* de modo que o usuário digitará o nome e a idade de uma pessoa qualquer.
* 
* Obs1. Utilizar estrutura de seleção (multipla escolha)
* Obs2. Validar os dados, ou seja, não aceitar idade menor que Zero ou maior que 125 anos.
*/

#include <stdio.h>
#include <Windows.h>

int main() {

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int idade = 0;
    char nome[100];

    printf("Digite o nome:\n");
    gets(nome);
    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Faixa etária: ");
    switch(idade) {
    case 0 ... 3:
        printf("bebê\n");
        break;
    case 4 ... 10:
        printf("criança\n");
        break;
    case 11 ... 17:
        printf("adolescente\n");
        break;
    case 18 ... 125:
        printf("adulto\n");
        break;
    default:
        idade = 0;
        printf("inválido\n");
    }
    return 0;
}