/*
* 2) Foi feita uma pesquisa entre os habitantes de uma cidade. Foram coletados os dados de
* idade, sexo (M/F) e salário. Faça um programa que calcule e mostre:
* a) A média dos salários do grupo;
* b) A maior e a menor idade do grupo;
* c) A quantidade de mulheres na cidade;
* d) A idade e o sexo da pessoa que possui o menor salário;
* Finalize a entrada de dados ao ser digitada uma idade igual a zero.
*/

import java.util.Scanner;

public class Exercicio02 {
    public static void main(String[] args) {
    	Scanner entrada = new Scanner(System.in);
    	
        int idade;
        char sexo;
        double salario;

        double somaDosSalariosDoGrupo = 0.0;
        double mediaDosSalariosDoGrupo;
        int menorIdade = 0;
        int maiorIdade = 0;
        int qntMulheres = 0;
        double menorSalario = 0.0;
        int idadePessoaMenorSalario = 0;
        char sexoPessoaMenorSalario = '0';

        int i = 0;
    	do {
            System.out.println("Digite a idade (F/M): ");
            idade = entrada.nextInt();
            if(idade == 0) break;
            System.out.println("Digite o sexo: ");
            sexo = entrada.next().charAt(0);
            System.out.println("Digite o salario: ");
            salario = entrada.nextDouble();

            if(i == 0) {
                menorIdade = idade;
                maiorIdade = idade;
                menorSalario = salario;
                idadePessoaMenorSalario = idade;
                sexoPessoaMenorSalario = sexo;
            }

            somaDosSalariosDoGrupo += salario;

            if(idade < menorIdade) menorIdade = idade;
            if(idade > maiorIdade) maiorIdade = idade;

            if(sexo == 'F') qntMulheres++;

            if (salario < menorSalario) {
                menorSalario = salario;
                idadePessoaMenorSalario = idade;
                sexoPessoaMenorSalario = sexo;
            }

            i++;
        } while(idade != 0);

        mediaDosSalariosDoGrupo = somaDosSalariosDoGrupo / i;

        System.out.printf("A média dos salários do grupo: %.2f\n", mediaDosSalariosDoGrupo);
        System.out.printf("A maior idade do grupo: %d\n", maiorIdade);
        System.out.printf("A menor idade do grupo: %d\n", menorIdade);
        System.out.printf("A quantidade de mulheres na cidade: %d\n", qntMulheres);
        System.out.printf("A idade da pessoa que possui o menor salário: %d\n", idadePessoaMenorSalario);
        System.out.print("O sexo da pessoa que possui o menor salário: " + sexoPessoaMenorSalario + "\n");

    	entrada.close();
    }
}