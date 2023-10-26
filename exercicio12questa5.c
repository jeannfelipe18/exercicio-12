#include <stdio.h>
#include <time.h>

// Função para calcular a idade em dias, meses e anos
void calcularIdade(int diaNasc, int mesNasc, int anoNasc) {
    // Obtém a data atual
    time_t t;
    struct tm *dataAtual;
    time(&t);
    dataAtual = localtime(&t);

    int diaAtual = dataAtual->tm_mday;
    int mesAtual = dataAtual->tm_mon + 1;
    int anoAtual = dataAtual->tm_year + 1900;

    // Calcula a idade em anos, meses e dias
    int idadeAnos = anoAtual - anoNasc;
    int idadeMeses = mesAtual - mesNasc;
    int idadeDias = diaAtual - diaNasc;

    // Ajusta a idade se a diferença dos dias for negativa
    if (idadeDias < 0) {
        idadeMeses--;
        if (idadeMeses < 0) {
            idadeAnos--;
            idadeMeses += 12;
        }
        idadeDias += 30; // Usando 30 como um valor médio para os dias em um mês
    }

    printf("Idade: %d anos, %d meses e %d dias\n", idadeAnos, idadeMeses, idadeDias);
}

int main() {
    int diaNasc, mesNasc, anoNasc;

    printf("Digite a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    calcularIdade(diaNasc, mesNasc, anoNasc);

    return 0;
}
