#include <stdio.h>

int main() {
    // Declaração da matriz 10x10 representando o tabuleiro
    int tabuleiro[10][10];

    // Inicializa todas as posições com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Tamanho fixo dos navios
    int tamanhoNavio = 3;

    // Navio 1 - posição horizontal
    int linhaHorizontal = 2;
    int colunaHorizontal = 1;

    for (int j = 0; j < tamanhoNavio; j++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + j] = 3;
    }

    // Navio 2 - posição vertical
    int linhaVertical = 5;
    int colunaVertical = 7;

    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    // Exibe o tabuleiro no console
    printf("=== BATALHA NAVAL - NIVEL NOVATO ===\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}





aventureiro

#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializa todas as posições com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int tamanhoNavio = 3;

    // --- Navio 1: Horizontal ---
    int linhaH = 1, colunaH = 2;
    for (int j = 0; j < tamanhoNavio; j++) {
        tabuleiro[linhaH][colunaH + j] = 3;
    }

    // --- Navio 2: Vertical ---
    int linhaV = 4, colunaV = 6;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // --- Navio 3: Diagonal principal (↘) ---
    int linhaD1 = 0, colunaD1 = 0;
    for (int k = 0; k < tamanhoNavio; k++) {
        tabuleiro[linhaD1 + k][colunaD1 + k] = 3;
    }

    // --- Navio 4: Diagonal secundária (↙) ---
    int linhaD2 = 0, colunaD2 = 9;
    for (int k = 0; k < tamanhoNavio; k++) {
        tabuleiro[linhaD2 + k][colunaD2 - k] = 3;
    }

    // Exibe o tabuleiro completo
    printf("=== BATALHA NAVAL - NIVEL AVENTUREIRO ===\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


mestre  
#include <stdio.h>

#define TAM 10
#define HABILIDADE 5

// Função para imprimir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para sobrepor a habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[TAM][TAM], int habilidade[HABILIDADE][HABILIDADE], int origemX, int origemY) {
    int offset = HABILIDADE / 2;
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            int x = origemX - offset + i;
            int y = origemY - offset + j;

            // Verifica se está dentro do tabuleiro
            if (x >= 0 && x < TAM && y >= 0 && y < TAM) {
                if (habilidade[i][j] == 1 && tabuleiro[x][y] == 0) {
                    tabuleiro[x][y] = 5; // marca área afetada
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa tabuleiro com 0
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int tamanhoNavio = 3;

    // --- Navio Horizontal ---
    for (int j = 0; j < tamanhoNavio; j++)
        tabuleiro[2][j + 2] = 3;

    // --- Navio Vertical ---
    for (int i = 0; i < tamanhoNavio; i++)
        tabuleiro[i + 5][7] = 3;

    // --- Navio Diagonal ↘ ---
    for (int k = 0; k < tamanhoNavio; k++)
        tabuleiro[k + 1][k + 1] = 3;

    // --- Navio Diagonal ↙ ---
    for (int k = 0; k < tamanhoNavio; k++)
        tabuleiro[k + 1][8 - k] = 3;

    // --- Matrizes de habilidades (5x5) ---
    int cone[HABILIDADE][HABILIDADE];
    int cruz[HABILIDADE][HABILIDADE];
    int octaedro[HABILIDADE][HABILIDADE];

    // Habilidade Cone
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            if (j >= 2 - i && j <= 2 + i)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    // Habilidade Cruz
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            if (i == HABILIDADE / 2 || j == HABILIDADE / 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // Habilidade Octaedro
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    // Aplica as habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, cone, 2, 2);
    aplicarHabilidade(tabuleiro, cruz, 6, 6);
    aplicarHabilidade(tabuleiro, octaedro, 4, 8);

    printf("=== BATALHA NAVAL - NIVEL MESTRE ===\n\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}