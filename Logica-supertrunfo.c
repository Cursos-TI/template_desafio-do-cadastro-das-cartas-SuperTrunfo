#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Super Trunfo Avançado - Comparação por dois atributos

    Funcionalidades principais:
    - Cadastro de duas cartas (países) com os atributos:
        nome, população (unsigned long int), área (float),
        PIB (float) e número de pontos turísticos (int).
    - Cálculo da densidade demográfica (população / área).
    - Menus dinâmicos (switch) para escolher dois atributos distintos.
    - Comparação por atributo (densidade: menor vence; demais: maior vence).
    - Soma dos valores dos dois atributos para definir o vencedor final.
    - Tratamento básico de entradas inválidas (opções fora do intervalo).
    - Código comentado e organizado.
*/

/* Enum para facilitar referência aos atributos com nomes legíveis */
enum ATTR {
    ATTR_POPULACAO = 1,
    ATTR_AREA = 2,
    ATTR_PIB = 3,
    ATTR_PONTOS = 4,
    ATTR_DENSIDADE = 5
};

/* Estrutura que representa uma carta (país) */
struct Carta {
    char nome[100];                  // Nome do país/cidade
    unsigned long int populacao;     // População (tipo aumentado para grandes valores)
    float area;                      // Área em km²
    float pib;                       // PIB (unidade: conforme entrada, por ex. bilhões)
    int pontosTuristicos;            // Número de pontos turísticos

    float densidade;                 // Densidade calculada (habitantes/km²)
};

/* Retorna o valor numérico do atributo selecionado para a carta.
   Todos os retornos são convertidos para double para facilitar soma e comparação. */
double obter_valor_atributo(const struct Carta *c, int atributo) {
    switch (atributo) {
        case ATTR_POPULACAO:
            return (double)c->populacao;      // População como número inteiro grande
        case ATTR_AREA:
            return (double)c->area;           // Área em km² (float -> double)
        case ATTR_PIB:
            return (double)c->pib;            // PIB (float -> double)
        case ATTR_PONTOS:
            return (double)c->pontosTuristicos; // Número de pontos turísticos
        case ATTR_DENSIDADE:
            return (double)c->densidade;     // Densidade (float -> double)
        default:
            return 0.0;
    }
}

/* Retorna uma string com o nome legível do atributo (para exibição) */
const char* nome_do_atributo(int atributo) {
    switch (atributo) {
        case ATTR_POPULACAO: return "Populacao";
        case ATTR_AREA: return "Area (km^2)";
        case ATTR_PIB: return "PIB";
        case ATTR_PONTOS: return "Pontos Turisticos";
        case ATTR_DENSIDADE: return "Densidade Demografica (hab/km^2)";
        default: return "Atributo Desconhecido";
    }
}

int main() {
    /* Declaração das duas cartas que serão comparadas */
    struct Carta c1, c2;

    /* --- CADASTRO DAS CARTAS ---
       Aqui realizamos leitura simples dos atributos.
       Usamos scanf com " %[^\n]" para permitir nomes com espaços.
       Em um projeto maior, recomendamos usar fgets + parsing mais robusto.
    */

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do pais (ex: Brasil): ");
    scanf(" %[^\n]", c1.nome);

    printf("Populacao (numero inteiro, sem pontuacao): ");
    if (scanf("%lu", &c1.populacao) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }

    printf("Area (km2): ");
    if (scanf("%f", &c1.area) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }

    printf("PIB (unidade conforme entrada, ex: bilhoes): ");
    if (scanf("%f", &c1.pib) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }

    printf("Numero de Pontos Turisticos: ");
    if (scanf("%d", &c1.pontosTuristicos) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do pais (ex: Argentina): ");
    scanf(" %[^\n]", c2.nome);

    printf("Populacao (numero inteiro, sem pontuacao): ");
    if (scanf("%lu", &c2.populacao) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }

    printf("Area (km2): ");
    if (scanf("%f", &c2.area) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }

    printf("PIB (unidade conforme entrada, ex: bilhoes): ");
    if (scanf("%f", &c2.pib) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }

    printf("Numero de Pontos Turisticos: ");
    if (scanf("%d", &c2.pontosTuristicos) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }

    /* --- CÁLCULO DA DENSIDADE ---
       Protegemos contra divisão por zero (área <= 0).
       Se a área for inválida, definimos densidade como 0 e avisamos o usuário.
    */
    if (c1.area > 0.0f) {
        c1.densidade = (float)((double)c1.populacao / (double)c1.area);
    } else {
        c1.densidade = 0.0f;
        printf("\nAviso: Area da Carta 1 invalida (<= 0). Densidade definida para 0.\n");
    }

    if (c2.area > 0.0f) {
        c2.densidade = (float)((double)c2.populacao / (double)c2.area);
    } else {
        c2.densidade = 0.0f;
        printf("Aviso: Area da Carta 2 invalida (<= 0). Densidade definida para 0.\n");
    }

    /* --- MENU DINÂMICO: Escolha de dois atributos distintos ---
       Primeiro apresentamos o menu completo e lemos a primeira escolha.
       Depois mostramos o segundo menu sem a opção já escolhida.
       Tratamos entradas inválidas com mensagens e encerramento gracioso.
    */

    int escolha1 = 0;
    printf("\n===== MENU: Escolha o primeiro atributo =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area (km2)\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao (1-5): ");
    if (scanf("%d", &escolha1) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }
    if (escolha1 < 1 || escolha1 > 5) { printf("Opcao invalida. Encerrando.\n"); return 1; }

    /* Constrói array com atributos restantes (exclui escolha1) para menu dinâmico */
    int restantes[4];
    int idx = 0;
    for (int a = 1; a <= 5; ++a) {
        if (a == escolha1) continue;
        restantes[idx++] = a;
    }

    /* Exibe o segundo menu baseado no array 'restantes' */
    int escolha2_idx = 0;
    printf("\n===== MENU: Escolha o segundo atributo (diferente do primeiro) =====\n");
    for (int i = 0; i < 4; ++i) {
        printf("%d - %s\n", i + 1, nome_do_atributo(restantes[i]));
    }
    printf("Opcao (1-4): ");
    if (scanf("%d", &escolha2_idx) != 1) { printf("Entrada invalida. Encerrando.\n"); return 1; }
    if (escolha2_idx < 1 || escolha2_idx > 4) { printf("Opcao invalida. Encerrando.\n"); return 1; }

    int escolha2 = restantes[escolha2_idx - 1]; // Mapear para atributo real (1..5)

    /* --- Exibição do que foi escolhido --- */
    printf("\nComparacao entre: %s e %s\n", c1.nome, c2.nome);
    printf("Atributos escolhidos:\n");
    printf("1) %s\n", nome_do_atributo(escolha1));
    printf("2) %s\n\n", nome_do_atributo(escolha2));

    /* --- Obter os valores dos atributos escolhidos para cada carta --- */
    double valor1_attr1 = obter_valor_atributo(&c1, escolha1);
    double valor2_attr1 = obter_valor_atributo(&c2, escolha1);

    double valor1_attr2 = obter_valor_atributo(&c1, escolha2);
    double valor2_attr2 = obter_valor_atributo(&c2, escolha2);

    /* --- Comparações por atributo ---
       Para densidade, menor valor vence; para os demais, maior vence.
       Usamos if/else aninhados para deixar a lógica clara e explicita.
    */

    /* Resultado da comparação do primeiro atributo:
       vence_atr1 = 1 => Carta 1 venceu; 2 => Carta 2 venceu; 0 => empate
    */
    int vence_atr1 = 0;
    if (escolha1 == ATTR_DENSIDADE) {
        if (valor1_attr1 < valor2_attr1) vence_atr1 = 1;
        else if (valor2_attr1 < valor1_attr1) vence_atr1 = 2;
        else vence_atr1 = 0;
    } else {
        if (valor1_attr1 > valor2_attr1) vence_atr1 = 1;
        else if (valor2_attr1 > valor1_attr1) vence_atr1 = 2;
        else vence_atr1 = 0;
    }

    /* Resultado da comparação do segundo atributo */
    int vence_atr2 = 0;
    if (escolha2 == ATTR_DENSIDADE) {
        if (valor1_attr2 < valor2_attr2) vence_atr2 = 1;
        else if (valor2_attr2 < valor1_attr2) vence_atr2 = 2;
        else vence_atr2 = 0;
    } else {
        if (valor1_attr2 > valor2_attr2) vence_atr2 = 1;
        else if (valor2_attr2 > valor1_attr2) vence_atr2 = 2;
        else vence_atr2 = 0;
    }

    /* --- Soma dos dois atributos para cada carta (definida como double) ---
       Convertendo corretamente tipos para evitar perda de informação.
    */
    double soma_carta1 = valor1_attr1 + valor1_attr2;
    double soma_carta2 = valor2_attr1 + valor2_attr2;

    /* Determina vencedor pela soma (maior soma vence). Empate possível. */
    int vencedor_soma = 0; // 1 -> carta1, 2 -> carta2, 0 -> empate
    if (soma_carta1 > soma_carta2) vencedor_soma = 1;
    else if (soma_carta2 > soma_carta1) vencedor_soma = 2;
    else vencedor_soma = 0;

    /* --- Exibição organizada dos resultados --- */
    printf("----- Resultados Detalhados -----\n\n");

    /* Atributo 1 */
    printf("Atributo 1: %s\n", nome_do_atributo(escolha1));
    /* Impressão diferenciada de populacao (unsigned long) para manter legibilidade */
    if (escolha1 == ATTR_POPULACAO) {
        printf("  %s: %lu\n", c1.nome, c1.populacao);
        printf("  %s: %lu\n\n", c2.nome, c2.populacao);
    } else {
        printf("  %s: %.2f\n", c1.nome, valor1_attr1);
        printf("  %s: %.2f\n\n", c2.nome, valor2_attr1);
    }

    /* Mostra quem venceu o atributo 1, usando operador ternário para ficar elegante */
    printf("Vencedor (atributo 1): %s\n\n",
           (vence_atr1 == 1) ? c1.nome : (vence_atr1 == 2) ? c2.nome : "Empate");

    /* Atributo 2 */
    printf("Atributo 2: %s\n", nome_do_atributo(escolha2));
    if (escolha2 == ATTR_POPULACAO) {
        printf("  %s: %lu\n", c1.nome, c1.populacao);
        printf("  %s: %lu\n\n", c2.nome, c2.populacao);
    } else {
        printf("  %s: %.2f\n", c1.nome, valor1_attr2);
        printf("  %s: %.2f\n\n", c2.nome, valor2_attr2);
    }

    printf("Vencedor (atributo 2): %s\n\n",
           (vence_atr2 == 1) ? c1.nome : (vence_atr2 == 2) ? c2.nome : "Empate");

    /* Soma dos atributos e resultado final */
    printf("Soma dos atributos:\n");
    /* Se algum atributo for populacao, imprimimos com %lu ao invés de %.2f--mas soma é double */
    printf("  %s: %.2f\n", c1.nome, soma_carta1);
    printf("  %s: %.2f\n\n", c2.nome, soma_carta2);

    if (vencedor_soma == 1) {
        printf("Resultado Final: %s venceu por soma dos atributos!\n", c1.nome);
    } else if (vencedor_soma == 2) {
        printf("Resultado Final: %s venceu por soma dos atributos!\n", c2.nome);
    } else {
        printf("Resultado Final: Empate!\n");
    }

    /* Fim do programa */
    return 0;
}
