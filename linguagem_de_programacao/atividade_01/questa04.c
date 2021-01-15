/*                       
* IFCE - Instituto Federal do Ceará - Campus Tianguá-CE
* Membros da Equipe:
*    ANTONIO RICARDO DE CASTRO CHAVES
*    EVERTON DE ALMEIDA VERAS
*    FRANCISCO ALAN DO NASCIMENTO MARINHO
*    FRANCISCO ERINELDO XAVIER FILHO
*    FRANCISCO GABRIEL BRAGA DO NASCIMENTO
*    FRANCISCO WELLESSON BEZERRA DA SILVA
*    GERLAN ALVES MUNIZ
* Disciplina: Linguagem de Programação - I
* 2º Semestre (Bacharelado em Ciência da Computação) - 2020.2
*
* Questão 04 - Escreva um algoritmo que leia a distância percorrida por uma automóvel (em km) e o intervalo de
* tempo correspondente (em horas), a quilometragem percorrida com 1 L de gasolina e o valor do litro
* de gasolina, a seguir calcule e imprima a sua velocidade média no percurso em km/h e em m/s e quanto
* custaria em reais a gasolina consumida.
*/

#include <stdio.h>
#include <windows.h>

float distanciaP = 0, intervaloP = 0, quilometragemLitro = 0, valorLitro = 0, velocidade = 0, custoG = 0, consumidoG = 0;

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Digite a distância percorrida, em km:\n");
    scanf("%f", &distanciaP);
    printf("Digite o intervalo de tempo durante a trajetória, em horas:\n");
    scanf("%f", &intervaloP);
    printf("Digite a quilometragem percorrida com 1L de gasolina, em km:\n");
    scanf("%f", &quilometragemLitro);
    printf("Digite a valor do litro de gasolina, em reais:\n");
    scanf("%f", &valorLitro);
    velocidade = (distanciaP / intervaloP);
    consumidoG = (distanciaP / quilometragemLitro);
    custoG = (consumidoG * valorLitro);
    printf("Velocidade média no percurso, em km/h: %.2f\n", velocidade);
    printf("Velocidade média no percurso, em m/s: %.2f\n", (velocidade / 3.6));
    printf("Custo consumido de gasolina, em reais: %.2f\n", custoG);
    return 0;
}