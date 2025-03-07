#include <stdio.h>

 // Tema 4 - Batalha Naval
 // Aluno Kauã de Sousa Ferreira
 // Nível Novato
 
void inicializar_tabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // Inicializa todas as posições com 0 (água)
        }
    }
}

void posicionar_navio(int tabuleiro[10][10], int linha, int coluna, int orientacao) {
    if (orientacao == 0) { // 0 para horizontal
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha][coluna + i] = 3; // Posiciona navio horizontalmente
        }
    } else { // 1 para vertical
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha + i][coluna] = 3; // Posiciona navio verticalmente
        }
    }
}

void exibir_tabuleiro(int tabuleiro[10][10]) {
    // Imprime a linha das letras (A até J)
    printf("  ");
    for (char letra = 'A'; letra < 'A' + 10; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        // Imprime o número da linha (1 até 10)
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[10][10];

    // Inicializa o tabuleiro
    inicializar_tabuleiro(tabuleiro);

    // Coordenadas iniciais dos navios
    int linha_navio1 = 2, coluna_navio1 = 3; // Navio horizontal
    int linha_navio2 = 5, coluna_navio2 = 7; // Navio vertical

    // Posiciona os navios no tabuleiro
    posicionar_navio(tabuleiro, linha_navio1, coluna_navio1, 0); // Navio horizontal
    posicionar_navio(tabuleiro, linha_navio2, coluna_navio2, 1); // Navio vertical

    // Exibe o tabuleiro
    exibir_tabuleiro(tabuleiro);

    return 0;
}
