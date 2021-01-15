/*
* Instituto Federal de Educação, Ciência e Tecnologia do Ceará | Campus Tianguá
* Bacharelado em Ciências da Computação
* 2° Semestre 2020.1
* Aluno: Francisco Gabriel Braga do Nascimento
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
*
* #6. João abriu uma lanchonete e você foi requisitado para desenvolver um software para ele.
* Sabemos que a principio João somente oferecerá alguns tipos de produtos.
* Esse produtos estando em promoção de estreia são:
*   misto quente + suco de uva = 2.15;
*   hambúrguer + coca-cola = 4.50;
*   caldo de cana + pastel = 2.40;
*   coxinha + guaraná = 2.30;
*   fatia bolo + suco acerola = 1.80;
*   pudim = 2.0.
* Com base nessas informações elabore um programinha onde o cliente escolherá sua opção através de um
* sistema de códigos, para que com base nesses códigos o balconista saiba o valor que deva ser cobrado do cliente.
* Obs. Utilizar a estrutura de múltipla escolha. 
*/

#include <stdio.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int opcao;
    
    printf("Digite o número referente ao seu lanche:\n1 - Misto Quente + Suco de Uva R$2.15\n2 - Hambúrguer + Coca-Cola  R$4.50\n3 - Caldo de Cana + Pastel R$2.40\n4 - Coxinha + Guaraná R$2.30\n5 - Fatia de Bolo + Suco Acerola R$1.80\n6 - Pudim R$2.00\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Total: R$2.15\n");
            break;
        case 2:
            printf("Total: R$4.50\n");
            break;
        case 3:
            printf("Total: R$2.40\n");
            break;
        case 4:
            printf("Total: R$2.30\n");
            break;
        case 5:
            printf("Total: R$1.80\n");
            break;
        case 6:
            printf("Total: R$2.00\n");
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}