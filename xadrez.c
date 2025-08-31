#include <stdio.h>

// Definindo constantes para os limites de movimento das peças
#define MOVIMENTO_BISPO 5      // Movimento do bispo: 5 casas na diagonal
#define MOVIMENTO_TORRE 5      // Movimento da torre: 5 casas para a direita
#define MOVIMENTO_RAINHA 8     // Movimento da rainha: 8 casas para a esquerda

// Função para movimentar o Bispo
void movimentar_bispo() {
    int i;
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    for(i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Diagonal direita, movimento %d: Cima\n", i);
    }
}

// Função para movimentar a Torre
void movimentar_torre() {
    int i;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Movimento %d: Direita\n", i);
    }
}

// Função para movimentar a Rainha
void movimentar_rainha() {
    int i;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    for(i = 1; i <= MOVIMENTO_RAINHA; i++) {
        printf("Movimento %d: Esquerda\n", i);
    }
}

int main() {
    // Exibindo o menu de opções
    int opcao;
    
    printf("Escolha uma peça para movimentar:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("Escolha uma opção (1/2/3): ");
    scanf("%d", &opcao);

    // Estrutura de repetição baseada na escolha do usuário
    switch(opcao) {
        case 1:
            movimentar_bispo();
            break;
        case 2:
            movimentar_torre();
            break;
        case 3:
            movimentar_rainha();
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
