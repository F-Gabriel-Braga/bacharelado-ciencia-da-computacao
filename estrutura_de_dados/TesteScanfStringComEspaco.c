#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    char nome[400];
    char endereco[400];
    int numero;

    gets(nome);
    gets(endereco);
    scanf("%d", &numero);
    printf("%s | %s | %d", nome, endereco, numero);
}