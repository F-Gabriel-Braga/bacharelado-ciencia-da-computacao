#include <stdio.h>
#include <windows.h>

int n1 = 0, n2 = 0, aux = 0;

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n2);
    printf("Numeros antes de trocar as posições.\nNumero 1 = %d\nNumero 2 = %d\n\n", n1, n2);
    aux = n1;
    n1 = n2;
    n2 = aux;
    aux = 0;
    printf("Numeros depois de trocar as posições.\nNumero 1 = %d\nNumero 2 = %d\n\n", n1, n2);
    return 0;
}