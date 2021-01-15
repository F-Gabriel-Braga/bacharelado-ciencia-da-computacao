/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #2. Receba o número de horas trabalhadas por uma pessoa e o valor do salário mínimo e mostre o salário a receber baseado nas seguintes regras:
* a) A hora trabalhada equivale a 10% do salário mínimo informado.
* b) O salário bruto é dado pelo número de horas trabalhadas multiplicadas pelo valor de cada hora.
* c) O imposto pago é de 3%.
* d) O salário a receber é equivalente ao salário bruto subtraído do imposto.
*/

#include <stdio.h>
#include <windows.h>

float numeroHT = 0, salarioM = 0, horaT = 0, salarioB = 0, imposto = 0, salarioR = 0;

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Digite o número de horas trabalhadas:\n");
    scanf("%f", &numeroHT);
    printf("Digite o valor do salário mínimo:\n");
    scanf("%f", &salarioM);
    horaT = (salarioM * 0.10);
    salarioB = (numeroHT * horaT);
    imposto = (salarioB * 0.03);
    salarioR = (salarioB - imposto);
    printf("Salário a receber: %.2f", salarioR);
    return 0;
}