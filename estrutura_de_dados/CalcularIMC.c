#include <stdio.h>
#include <windows.h>
#include <math.h>

float altura = 0, peso = 0, imc = 0;

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Digite a altura em metros:\n");
    scanf("%f", &altura);
    printf("Digite o peso em quilogramas:\n");
    scanf("%f", &peso);
    imc = peso / (pow(altura, 2));
    printf("IMC = %.2f", imc);
    return 0;
}