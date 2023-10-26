#include <stdio.h>

// Função para trocar duas linhas de uma matriz
void trocarLinhas(int matriz[10][10], int linha1, int linha2) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[linha1][i];
        matriz[linha1][i] = matriz[linha2][i];
        matriz[linha2][i] = temp;
    }
}

// Função para trocar duas colunas de uma matriz
void trocarColunas(int matriz[10][10], int coluna1, int coluna2) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][coluna1];
        matriz[i][coluna1] = matriz[i][coluna2];
        matriz[i][coluna2] = temp;
    }
}

// Função para trocar a diagonal principal com a diagonal secundária
void trocarDiagonais(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }
}

// Função para trocar uma linha com uma coluna
void trocarLinhaComColuna(int matriz[10][10], int linha, int coluna) {
    for (int i = 0; i < 10; i++) {
        int temp = matriz[linha][i];
        matriz[linha][i] = matriz[i][coluna];
        matriz[i][coluna] = temp;
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[10][10];
    
    // Preencha a matriz com os valores desejados
    
    // Trocar a linha 2 com a linha 8
    trocarLinhas(matriz, 1, 7);
    
    // Trocar a coluna 4 com a coluna 10
    trocarColunas(matriz, 3, 9);
    
    // Trocar a diagonal principal com a diagonal secundária
    trocarDiagonais(matriz);
    
    // Trocar a linha 5 com a coluna 10
    trocarLinhaComColuna(matriz, 4, 9);
    
    // Imprimir a matriz resultante
    imprimirMatriz(matriz);
    
    return 0;
}
