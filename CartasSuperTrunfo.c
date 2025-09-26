#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre: duas cartas, cálculos (densidade, PIB per capita, super poder) e comparações.
// Observações:
// - População agora é unsigned long int.
// - PIB continua em bilhões de reais (entrada). Para PIB per capita, convertemos para reais (x 1e9).
// - Super Poder = população + área + PIB (bilhões) + pontos turísticos + PIB per capita + (1 / densidade).
// - Comparações: densidade (menor vence), demais (maior vence).

int main() {
    // -------- Carta 1 --------
    char estado1[10];
    char codigo1[10];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;            // km²
    float pib_bilhoes1;     // bilhões de R$
    int pontos1;

    // -------- Carta 2 --------
    char estado2[10];
    char codigo2[10];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;            // km²
    float pib_bilhoes2;     // bilhões de R$
    int pontos2;

    // -------- Derivados --------
    float dens1, dens2;             // hab/km²
    float pib_pc1, pib_pc2;         // R$ por pessoa
    float inv_dens1, inv_dens2;     // 1 / densidade
    float super1, super2;           // Super Poder

    // ================= ENTRADAS =================
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: A): ");
    scanf("%9s", estado1);

    printf("Codigo (ex: A01): ");
    scanf("%9s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade1);  // permite espaços

    printf("Populacao (inteiro nao negativo): ");
    scanf("%lu", &populacao1);

    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB em bilhoes de reais: ");
    scanf("%f", &pib_bilhoes1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: B): ");
    scanf("%9s", estado2);

    printf("Codigo (ex: B02): ");
    scanf("%9s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade2);

    printf("Populacao (inteiro nao negativo): ");
    scanf("%lu", &populacao2);

    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB em bilhoes de reais: ");
    scanf("%f", &pib_bilhoes2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // ================= CALCULOS =================
    // Densidade = populacao / area
    dens1 = (float)populacao1 / area1;
    dens2 = (float)populacao2 / area2;

    // PIB per capita = (PIB em reais) / populacao  [converter bilhoes -> reais]
    pib_pc1 = (pib_bilhoes1 * 1e9f) / (float)populacao1;
    pib_pc2 = (pib_bilhoes2 * 1e9f) / (float)populacao2;

    // Inverso da densidade (evita divisao por zero usando operador ternario)
    inv_dens1 = (dens1 > 0.0f) ? (1.0f / dens1) : 0.0f;
    inv_dens2 = (dens2 > 0.0f) ? (1.0f / dens2) : 0.0f;

    // Super Poder (somando todos os numericos; cuidado com conversao para float)
    super1 = (float)populacao1 + area1 + pib_bilhoes1 + (float)pontos1 + pib_pc1 + inv_dens1;
    super2 = (float)populacao2 + area2 + pib_bilhoes2 + (float)pontos2 + pib_pc2 + inv_dens2;

    // ================= SAIDAS DAS CARTAS =================
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib_bilhoes1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", dens1);
    printf("PIB per Capita: %.2f reais\n", pib_pc1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib_bilhoes2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", dens2);
    printf("PIB per Capita: %.2f reais\n", pib_pc2);
    printf("Super Poder: %.2f\n", super2);

    // ================= COMPARACOES =================
    // Expressões geram 1 (Carta 1 venceu) ou 0 (Carta 2 venceu).
    int cmp_pop   = (populacao1 > populacao2);
    int cmp_area  = (area1 > area2);
    int cmp_pib   = (pib_bilhoes1 > pib_bilhoes2);
    int cmp_pts   = (pontos1 > pontos2);
    int cmp_dens  = (dens1 < dens2);   // menor vence
    int cmp_pc    = (pib_pc1 > pib_pc2);
    int cmp_super = (super1 > super2);

    // Tabela de mensagens indexada por 0/1 
    const char* venceu[2] = { "Carta 2 venceu (0)", "Carta 1 venceu (1)" };

    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: %s\n", venceu[cmp_pop]);
    printf("Area: %s\n", venceu[cmp_area]);
    printf("PIB: %s\n", venceu[cmp_pib]);
    printf("Pontos Turisticos: %s\n", venceu[cmp_pts]);
    printf("Densidade Populacional: %s\n", venceu[cmp_dens]);
    printf("PIB per Capita: %s\n", venceu[cmp_pc]);
    printf("Super Poder: %s\n", venceu[cmp_super]);

    return 0;
}