/*
* Instituto Fedederal do Ceará Campus Tianguá
* Bacharelado em Ciências da Computação
* 2º Semestre - turma 2020
* Aluno: Everton de Almeida Veras
* Professor: Rhyan Ximenes de Brito
* Diciplina: Linguagem de programação I
*
* #3. Elabore um algoritmo que recebará um número inteiro qualquer
* que representará a quantidade de vezes que o laço de repetição terá.
* Em seguida, receber um número não negativo e retorne o seu fatorial.
* Lembrando que o fatorial de 0! = 1 e de 1! = 1. Obs1.
* Utilizar o laço de repetição for. Obs2. Validar os dados.
* Obs3.: O número que definirá a quantidade de vezes do laço de repetição
* deverá estar no intervalo de 10 (inclusive) e 20 (inclusive). 
*/

#include <stdio.h>
#include <windows.h>

int main(){

  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  int Iteracoes = 0, numero = 0, contador = 0, resultado = 1;

  do{
    printf("Digite um número de iterações entre 10 e 20: ");
    scanf("%d", &Iteracoes);
  } while(Iteracoes < 10 || Iteracoes > 20);

  do{
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
  } while(numero < 0);

  for(contador = Iteracoes; contador > 1; contador--){
    if(numero == 1 || numero == 0){
      break;
    } else{
      resultado *= numero;
      numero = numero - 1;
    }
  }
  
  printf("O fatorial é: %d", resultado);

  return 0;
}