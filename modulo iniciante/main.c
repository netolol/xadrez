#include <stdio.h>

#define TAM 8

void mostrarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Torre: linhas e colunas (usando for)
void moverTorre(int linha, int coluna) {
    int tabuleiro[TAM][TAM] = {0};

    // Movimentos horizontais
    for (int i = 0; i < TAM; i++) {
        tabuleiro[linha][i] = 1;
    }

    // Movimentos verticais
    for (int i = 0; i < TAM; i++) {
        tabuleiro[i][coluna] = 1;
    }

    tabuleiro[linha][coluna] = 8; // posição inicial da peça

    printf("\nMovimentos da Torre:\n");
    mostrarTabuleiro(tabuleiro);
}

// Bispo: diagonais (usando while)
void moverBispo(int linha, int coluna) {
    int tabuleiro[TAM][TAM] = {0};
    int i, j;

    // Diagonal principal
    i = linha;
    j = coluna;
    while (i >= 0 && j >= 0) { tabuleiro[i--][j--] = 1; }

    i = linha;
    j = coluna;
    while (i < TAM && j < TAM) { tabuleiro[i++][j++] = 1; }

    // Diagonal secundária
    i = linha;
    j = coluna;
    while (i >= 0 && j < TAM) { tabuleiro[i--][j++] = 1; }

    i = linha;
    j = coluna;
    while (i < TAM && j >= 0) { tabuleiro[i++][j--] = 1; }

    tabuleiro[linha][coluna] = 8; // posição inicial da peça

    printf("\nMovimentos do Bispo:\n");
    mostrarTabuleiro(tabuleiro);
}

// Rainha: Torre + Bispo (usando do-while)
void moverRainha(int linha, int coluna) {
    int tabuleiro[TAM][TAM] = {0};
    int i, j;

    // Movimentos horizontais e verticais (Torre)
    i = 0;
    do {
        tabuleiro[linha][i] = 1;
        tabuleiro[i][coluna] = 1;
        i++;
    } while (i < TAM);

    // Movimentos diagonais (Bispo)
    i = linha;
    j = coluna;
    do { if (i >= 0 && j >= 0) tabuleiro[i--][j--] = 1; } while (i >= 0 && j >= 0);

    i = linha;
    j = coluna;
    do { if (i < TAM && j < TAM) tabuleiro[i++][j++] = 1; } while (i < TAM && j < TAM);

    i = linha;
    j = coluna;
    do { if (i >= 0 && j < TAM) tabuleiro[i--][j++] = 1; } while (i >= 0 && j < TAM);

    i = linha;
    j = coluna;
    do { if (i < TAM && j >= 0) tabuleiro[i++][j--] = 1; } while (i < TAM && j >= 0);

    tabuleiro[linha][coluna] = 8; // posição inicial da peça

    printf("\nMovimentos da Rainha:\n");
    mostrarTabuleiro(tabuleiro);
}

int main() {
    int linha, coluna;

    printf("Informe a linha (0 a 7): ");
    scanf("%d", &linha);
    printf("Informe a coluna (0 a 7): ");
    scanf("%d", &coluna);

    moverTorre(linha, coluna);
    moverBispo(linha, coluna);
    moverRainha(linha, coluna);

    return 0;
}
