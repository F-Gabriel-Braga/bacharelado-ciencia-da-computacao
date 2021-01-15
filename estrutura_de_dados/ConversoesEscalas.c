#include <stdio.h>
#include <windows.h>

float tcelsius = 0, tfahrenheit = 0;

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Digite a temperatura em graus celsius:\n");
    scanf("%f", &tcelsius);
    tfahrenheit = (1.8 * tcelsius + 32.0);
    printf("A temperatura em graus fahrenheit é: %.2f\n", tfahrenheit);
    return 0;
}