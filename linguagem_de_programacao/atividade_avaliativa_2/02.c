/*
* Instituto Fedederal do Ceará Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre - turma 2020
* Aluno: Francisco Wellesson Bezerra da Silva
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #2. Construa um algoritmo que leia 10 valores inteiros. Em seguida para cada valor,
* mostrar se o valor é primo ou não. Em caso negativo, mostre quantos divisores o número possui.
* Obs1. Validar os dados.
* Ob2. Utilizar o laço de repetição do while. 
*/

#include <stdio.h>
int main()
{

    int cont_d = 0;
    int qtd = 10;
    int num;
    //scanf("%d", &qtd);
    if(qtd>=0)
    {
        while (qtd>0)
        {
            printf("Digite um numero: ");
            scanf("%d", &num);
            cont_d = 0;
            int aux = num;
            while(aux>0)
            {
                if (num%aux == 0)
                {
                    cont_d++;
                }
                aux--;
            }
            if (cont_d == 2)
            {
                printf("Eh primo\n");
            }
            else
            {

                printf("Nao eh primo. Quantidade de divisores: %d\n", cont_d );

            }
            qtd--;
        }
    }
    else
    {
        printf("Digite números positivos");
    }
}