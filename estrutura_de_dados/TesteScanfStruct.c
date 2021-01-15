#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int i;
    typedef struct {
        char nome[200];
        int idade;
        float salario;
    } Funcionario;
    Funcionario *func = malloc(10 * sizeof(Funcionario));

    for(i=0; i<10; i++) {
        strcpy(func[i].nome, "NULL");
        func[i].idade = 0;
        func[i].salario = 0.0;
    }

    for(i=0; i<10; i++) {
        printf(" Digite NOME do funcionário: ");
        scanf("%s%*c", func[i].nome);
        printf(" Digite a IDADE do funcionário: ");
        scanf("%d%*c", &func[i].idade);
        printf(" Digite o SALÁRIO do funcionário: ");
        scanf("%f%*c", &func[i].salario);
    }

    for(i=0; i<10; i++) {
        printf(" \n O nome do funcionário é: %s ", func[i].nome);
        printf(" \n A idade do funcionário é: %d ", func[i].idade);
        printf(" \n O salário do funcionário é: %.2f ", func[i].salario);
    }
}