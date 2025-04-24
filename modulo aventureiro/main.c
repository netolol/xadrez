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

// Movimento do Cavalo com loops aninhados
void moverCavalo(int linha, int coluna) {
    int tabuleiro[TAM][TAM] = {0};
    int movimentos[8][2] = {
        { -2, -1 }, { -2,  1 },
        { -1, -2 }, { -1,  2 },
        {  1, -2 }, {  1,  2 },
        {  2, -1 }, {  2,  1 }
    };

    for (int i = 0; i < 8; i++) {
        int novaLinha = linha + movimentos[i][0];
        int novaColuna = coluna + movimentos[i][1];

        if (novaLinha >= 0 && novaLinha < TAM && novaColuna >= 0 && novaColuna < TAM) {
            tabuleiro[novaLinha][novaColuna] = 1;
        }
    }

    tabuleiro[linha][coluna] = 8; // posição inicial do Cavalo

    printf("\nMovimentos do Cavalo:\n");
    mostrarTabuleiro(tabuleiro);
}

int main() {
    int linha, coluna;

    printf("Informe a linha (0 a 7): ");
    scanf("%d", &linha);
    printf("Informe a coluna (0 a 7): ");
    scanf("%d", &coluna);

    moverCavalo(linha, coluna);

    return 0;
}
