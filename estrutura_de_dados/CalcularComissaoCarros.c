#include <stdio.h>
#include <windows.h>
#include <math.h>

float salariofixo = 0, totalvendas = 0, salariofinal = 0;
int numcarros = 0;

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Digite o valor do salário fixo:\n");
    scanf("%f", &salariofixo);
    printf("Digite o valor total das vendas de carro deste mês:\n");
    scanf("%f", &totalvendas);
    printf("Digite o número de carros vendidos esse mês:\n");
    scanf("%d", &numcarros);
    salariofinal = salariofixo + (totalvendas * 0.0025);
    printf("O valor final do salário, após vender %d carros, é: %.2f ", numcarros, salariofinal);
    return 0;
}