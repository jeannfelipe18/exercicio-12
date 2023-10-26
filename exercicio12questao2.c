#include <stdio.h>
#include <stdlib.h>

void calcularLocacoesGratuitas(const int A[], int locacoes[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        locacoes[i] = A[i] / 15;
    }
}

int main() {
    int A[500]; // Vetor com a quantidade de filmes retirados por cada cliente
    int locacoes[500]; // Vetor para armazenar a quantidade de locações gratuitas

    // Preencha o vetor A com os dados dos clientes (exemplo)
    for (int i = 0; i < 500; i++) {
        A[i] = rand() % 1000; // Número aleatório de filmes retirados
    }

    calcularLocacoesGratuitas(A, locacoes, 500);

    // Exibir os resultados
    for (int i = 0; i < 500; i++) {
        printf("Cliente %d tem direito a %d locações gratuitas.\n", i + 1, locacoes[i]);
    }

    return 0;
}
