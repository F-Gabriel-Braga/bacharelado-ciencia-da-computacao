#include <stdio.h>

int main() {

    const int cem = 100;
    const int cinquenta = 50;
    const int vinte = 20;
    const int dez = 10;
    const int cinco = 5;
    const int dois = 2;
    const int um = 1;

    int valor = 0, restante = 0, calculado = 0, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1 = 0;

    scanf("%d", &valor);
    calculado = valor;
    if(calculado >= cem) {
        restante = calculado % cem;
        nota100 = (calculado - restante) / cem;
        calculado = restante;
    }
    if(calculado >= cinquenta) {
        restante = calculado % cinquenta;
        nota50 = (calculado - restante) / cinquenta;
        calculado = restante;
    }
    if(calculado >= vinte) {
        restante = calculado % vinte;
        nota20 = (calculado - restante) / vinte;
        calculado = restante;
    }
    if(calculado >= dez) {
        restante = calculado % dez;
        nota10 = (calculado - restante) / dez;
        calculado = restante;
    }
    if(calculado >= cinco) {
        restante = calculado % cinco;
        nota5 = (calculado - restante) / cinco;
        calculado = restante;
    }
    if(calculado >= dois) {
        restante = calculado % dois;
        nota2 = (calculado - restante) / dois;
        calculado = restante;
    }
    if(calculado >= um) {
        restante = calculado % um;
        nota1 = (calculado - restante) / um;
        calculado = restante;
    }
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", nota100, nota50, nota20, nota10, nota5, nota2, nota1);
    return 0;
}