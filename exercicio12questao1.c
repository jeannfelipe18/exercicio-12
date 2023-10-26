#include <stdio.h>

// Função para imprimir as opções de pagamento e obter a opção escolhida
char imprimirOpcoes() {
    char opcao;
    
    printf("Escolha a opção de pagamento:\n");
    printf("a) À vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preço da etiqueta)\n");
    printf("c) De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");
    printf("Digite a opção desejada: ");
    
    // Lê a opção do usuário
    scanf(" %c", &opcao);
    
    return opcao;
}

// Função para calcular o valor das prestações com 10% de desconto
void opcaoAVista(float total) {
    float valorComDesconto = total * 0.9;
    printf("Total das prestações (à vista com 10%% de desconto): R$ %.2f\n", valorComDesconto);
}

// Função para calcular o valor das prestações em duas vezes
void opcaoDuasVezes(float total) {
    printf("Total das prestações (em duas vezes): R$ %.2f\n", total);
}

// Função para calcular o valor das prestações com juros
void opcaoJuros(float total, int parcelas) {
    float juros = 0.03; // 3% de juros ao mês
    float valorPrestacao = total / parcelas * (1 + juros);
    printf("Total das prestações (em %d vezes com 3%% de juros ao mês): R$ %.2f\n", parcelas, valorPrestacao);
}

int main() {
    float total;
    char opcao;
    
    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &total);
    
    if (total < 100) {
        printf("Essa opção de pagamento não está disponível para compras abaixo de R$ 100,00.\n");
        return 1;
    }
    
    opcao = imprimirOpcoes();
    
    switch (opcao) {
        case 'a':
            opcaoAVista(total);
            break;
        case 'b':
            opcaoDuasVezes(total);
            break;
        case 'c':
            {
                int parcelas;
                printf("Digite o número de parcelas (de 3 até 10): ");
                scanf("%d", &parcelas);
                if (parcelas < 3 || parcelas > 10) {
                    printf("Número de parcelas inválido.\n");
                    return 1;
                }
                opcaoJuros(total, parcelas);
            }
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }
    
    return 0;
}
