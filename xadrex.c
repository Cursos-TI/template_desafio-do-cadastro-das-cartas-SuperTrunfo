#include <stdio.h>

int main() {
    // Cartas cadastradas previamente
    char nome1[] = "Brasil";
    char pais1[] = "BR";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1440000000000.0;
    int pontos1 = 10;
    float densidade1 = populacao1 / area1;

    char nome2[] = "Argentina";
    char pais2[] = "AR";
    int populacao2 = 45100000;
    float area2 = 2780400.0;
    float pib2 = 491000000000.0;
    int pontos2 = 8;
    float densidade2 = populacao2 / area2;

    int escolha;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    float valor1, valor2;
    char atributo[30];
    int menorVence = 0; // usado apenas para densidade

    switch (escolha) {
        case 1:
            valor1 = populacao1;
            valor2 = populacao2;
            sprintf(atributo, "População");
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            sprintf(atributo, "Área");
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            sprintf(atributo, "PIB");
            break;
        case 4:
            valor1 = pontos1;
            valor2 = pontos2;
            sprintf(atributo, "Número de pontos turísticos");
            break;
        case 5:
            valor1 = densidade1;
            valor2 = densidade2;
            sprintf(atributo, "Densidade demográfica");
            menorVence = 1; // menor vence para densidade
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    printf("\nComparação de cartas (%s):\n", atributo);
    printf("Carta 1 - %s (%s): %.2f\n", nome1, pais1, valor1);
    printf("Carta 2 - %s (%s): %.2f\n\n", nome2, pais2, valor2);

    if (valor1 == valor2) {
        printf("Resultado: Empate!\n");
    } else if ((menorVence && valor1 < valor2) || (!menorVence && valor1 > valor2)) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }

    return 0;
}


DESAVIO AVENTUREIRO

#include <stdio.h>

int main() {
    // =========================
    // Movimento da Torre
    // =========================
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas à direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // =========================
    // Movimento do Bispo
    // =========================
    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo (5 casas diagonal Cima-Direita):\n");
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // =========================
    // Movimento da Rainha
    // =========================
    int casasRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha (8 casas à esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    // =========================
    // Movimento do Cavalo
    // =========================
    printf("\nMovimento do Cavalo (em L: 2 para baixo, 1 para esquerda):\n");
    // Loop externo: 2 casas para baixo
    for (int k = 0; k < 2; k++) {
        printf("Baixo\n");
    }

    // Loop interno: 1 casa para esquerda
    int l = 0;
    while (l < 1) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}




DESAFIO MESTRE

#include <stdio.h>

// =========================
// Funções recursivas
// =========================

// Torre: move-se para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha: move-se para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo: move-se na diagonal cima-direita usando recursão e loops aninhados
void moverBispo(int casasVertical, int casasDiagonal) {
    if (casasVertical == 0) return;
    for (int i = 0; i < casasDiagonal; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(casasVertical - 1, casasDiagonal);
}

// =========================
// Função principal
// =========================
int main() {
    // =========================
    // Torre
    // =========================
    int casasTorre = 5;
    printf("Movimento da Torre (recursivo, 5 casas à direita):\n");
    moverTorre(casasTorre);

    // =========================
    // Bispo
    // =========================
    int casasBispoVertical = 5;  // loop externo
    int casasBispoDiagonal = 1;  // loop interno
    printf("\nMovimento do Bispo (recursivo + loops aninhados, diagonal Cima-Direita):\n");
    moverBispo(casasBispoVertical, casasBispoDiagonal);

    // =========================
    // Rainha
    // =========================
    int casasRainha = 8;
    printf("\nMovimento da Rainha (recursivo, 8 casas à esquerda):\n");
    moverRainha(casasRainha);

    // =========================
    // Cavalo com loops complexos
    // =========================
    printf("\nMovimento do Cavalo (L: 2 casas para cima, 1 para direita, loops complexos):\n");
    int movimentoVertical = 0;
    int movimentoHorizontal = 0;

    // Loop externo: 2 casas para cima
    while (movimentoVertical < 2) {
        printf("Cima\n");
        movimentoVertical++;

        // Loop interno: 1 casa para direita
        for (movimentoHorizontal = 0; movimentoHorizontal < 1; movimentoHorizontal++) {
            printf("Direita\n");
            // break poderia ser usado se houvesse mais condições
        }
    }

    return 0;
}