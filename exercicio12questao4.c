#include <stdio.h>

void somarColunas(int matriz[61][10]) {
    for (int j = 0; j < 10; j++) {
        int soma = 0;
        for (int i = 0; i < 61; i++) {
            soma += matriz[i][j];
        }
        matriz[60][j] = soma; // Armazena o resultado na 61ª linha da matriz
    }
}

int main() {
    int matriz[61][10];

    // Preencha a matriz com os valores desejados aqui

    // Chame o procedimento para somar as colunas
    somarColunas(matriz);

    // Exemplo de impressão da matriz após a soma das colunas
    for (int i = 0; i < 61; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
