/*                       
* IFCE - Instituto Federal do Ceará - Campus Tianguá-CE
* Nome: FRANCISCO GABRIEL BRAGA DO NASCIMENTO
* Disciplina: Linguagem de Programação - I
* 2º Semestre (Bacharelado em Ciência da Computação) - 2020.2
*
* #3. Observe a tabela abaixo e construa uma estrutura heterogênea para o cadastro de produtos e ao finalizar exiba os dados.
*/

#include <stdio.h>
#include <windows.h>


int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    typedef struct produtoEstrutura {
        char nome[100];
        char tipo[50];
        int quantidade;
        float valorUnit;
    };
    produtoEstrutura produto;
    printf("Digite o nome do produto:\n");
    scanf("%s", produto.nome);
    printf("Digite o tipo do produto:\n");
    scanf("%s", produto.tipo);
    printf("Digite a quantidade do produto:\n");
    scanf("%d", &produto.quantidade);
    printf("Digite o valor unitário do produto:\n");
    scanf("%f", &produto.valorUnit);
    printf("Nome: %s\nTipo: %s\nQuantidade: %d\nValoe Unitário: %.2f\n",produto.nome, produto.tipo, produto.quantidade, produto.valorUnit);
    return 0;
}