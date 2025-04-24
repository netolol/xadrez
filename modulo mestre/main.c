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

// Função recursiva para movimentar a Rainha em uma direção
void moverRecursivo(int tabuleiro[TAM][TAM], int linha, int coluna, int deltaLinha, int deltaColuna) {
    linha += deltaLinha;
    coluna += deltaColuna;

    if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM)
        return; // saiu do tabuleiro

    tabuleiro[linha][coluna] = 1;

    moverRecursivo(tabuleiro, linha, coluna, deltaLinha, deltaColuna);
}

void moverRainhaAvancada(int linha, int coluna) {
    int tabuleiro[TAM][TAM] = {0};

    tabuleiro[linha][coluna] = 8; // posição inicial

    // Movimentos em todas as direções (8 direções)
    int direcoes[8][2] = {
        { -1,  0 }, {  1,  0 }, // vertical
        {  0, -1 }, {  0,  1 }, // horizontal
        { -1, -1 }, { -1,  1 }, // diagonais
        {  1, -1 }, {  1,  1 }
    };

    for (int i = 0; i < 8; i++) {
        moverRecursivo(tabuleiro, linha, coluna, direcoes[i][0], direcoes[i][1]);
    }

    printf("\nMovimentos Avançados da Rainha:\n");
    mostrarTabuleiro(tabuleiro);
}

int main() {
    int linha, coluna;

    printf("Informe a linha (0 a 7): ");
    scanf("%d", &linha);
    printf("Informe a coluna (0 a 7): ");
    scanf("%d", &coluna);

    moverRainhaAvancada(linha, coluna);

    return 0;
}
