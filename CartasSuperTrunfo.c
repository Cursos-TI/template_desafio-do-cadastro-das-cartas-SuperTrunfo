#include <stdio.h> // Biblioteca padrão para entrada e saída de dados (printf, scanf, fgets)
#include <string.h> // Biblioteca padrão para tratamento de STRING
 
int main() { // Função principal onde o programa começa a executar

    // =============================
    // Variáveis da Carta 1
    // =============================
    int opcao;
    char estado[3]; // Armazena a letra do estado (ex: 'A')
    char codigo[10]; // Armazena o código da carta (string de até 9 caracteres + '\0')
    char cidade[20];  // Armazena o nome da cidade (até 19 caracteres + '\0')
    int pop; // Armazena a população (número inteiro)
    float area; // Armazena a área da cidade
    float pib; // Armazena o PIB da cidade
    int pt;// Armazena número de pontos turísticos
 
    // =============================
    // Variáveis da Carta 2
    // =============================
    char estado2[3];
    char codigo2[10];
    char cidade2[20];
    int pop2;
    float area2;
    float pib2;
    int pt2;
 
    // Exibe o menu principal
    printf("### JOGO DO TRUNFO DE CIDADES ###\n");
    printf("1 - INICIAR JOGO\n");
    printf("2 - REGRAS\n");
    printf("3 - SAIR\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &opcao);

    // =============================
    // Entrada de dados - Carta 1
    // =============================

    switch (opcao) {

    case 1: {
        printf("INCIANDO JOGO...\n");

        printf("digite a letra do Estado: "); // Exibe mensagem
        scanf("%2s", estado); // Lê 2 caracterea
        
        printf("Digite o Código da Carta: ");
        scanf("%s", codigo); // Lê uma string (não precisa de &)

        getchar(); // Limpa o buffer novamente

        printf("Digite a Cidade: ");
        fgets(cidade, sizeof(cidade), stdin); // Lê uma linha inteira (inclusive espaços) e armazena na variável cidade
        cidade[strcspn(cidade, "\n")] = '\0'; // Retira Caracter recebido pelo ENTER

        printf("Digite a População desta cidade: ");
        scanf("%d", &pop); // Lê número inteiro

        getchar(); // Limpa o buffer novamente

        printf("Digite a área desta cidade: ");
        scanf("%f", &area); // Lê número decimal

        getchar(); // Limpa o buffer novamente

        printf("Digite o PIB desta cidade: ");
        scanf("%f", &pib);    

        printf("Digite a quantidade de pontos turisticos desta cidade: ");
        scanf("%d", &pt);

        // Cálculos da Carta 1
        float mediapop = (float) pop / area; // Densidade populacional
        float meidapib = (float) pib / pop; // PIB per capita


        // =============================
        // Entrada de dados - Carta 2
        // =============================

        printf("\ndigite a letra do Estado: ");
        scanf("%2s", estado2);

        getchar(); // Limpa o buffer novamente

        printf("Digite o Código da Carta: ");
        scanf("%s", codigo2);

        getchar();

        printf("Digite a Cidade: ");
        fgets(cidade2, sizeof(cidade2), stdin);
        cidade2[strcspn(cidade2, "\n")] = '\0';

        printf("Digite a População desta cidade: ");
        scanf("%d", &pop2);

        printf("Digite a área desta cidade: ");
        scanf("%f", &area2);

        printf("Digite o PIB desta cidade: ");
        scanf("%f", &pib2);    

        printf("Digite a quantidade de pontos turisticos desta cidade: ");
        scanf("%d", &pt2);

        float mediapop2 = (float) pop2 / area2;
        float meidapib2 = (float) pib2 / pop2;
        
        int opcao2; // Guarda opção do segundo menu

        // Menu secundário
        printf("\n### ESCOLHA SEU PRÓXIMO PASSO ###\n");
        printf("1 - MOSTRAR ATRIBUTOS DAS CARTAS\n");
        printf("2 - COMPARAR ATRIBUTOS ESPECIFICOS DAS CARTAS\n");
        printf("Escolha uma das opções: ");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:
            // =============================
            // Exibição dos dados - Carta 1
            // =============================

            printf("\nCARTA 1:\n");
            printf("Estado: %s\n", estado);
            printf("Código: %s\n", codigo);
            printf("Nome da Cidade: %s\n", cidade);
            printf("População: %d\n", pop);
            printf("Àrea: %.2f km²\n", area);
            printf("PIB: %.2f Milhões de Reais\n", pib);
            printf("Numero de pontos turísticos: %d\n", pt);
            printf("Densidade Populacional: %.3f hab/km²\n", mediapop);
            printf("PIB per Capita: %.3f reais\n", meidapib);
            
            // =============================
            // Exibição dos dados - Carta 2
            // =============================

            printf("\nCARTA 2:\n");
            printf("Estado: %s\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Nome da Cidade: %s\n", cidade2);
            printf("População: %d\n", pop2);
            printf("Àrea: %.2f km²\n", area2);
            printf("PIB: %.2f Milhões de Reais\n", pib2);
            printf("Numero de pontos turísticos: %d\n", pt2);
            printf("Densidade Populacional: %.3f hab/km²\n", mediapop2);
            printf("PIB per Capita: %.3f reais\n", meidapib2);

            float SuperPoder1 = (float)pop + area + pib + (float)pt + (1.0f / meidapib); // somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder").
            float SuperPoder2 = (float)pop2 + area2 + pib2 + (float)pt2 + (1.0f / meidapib2);
       
            break;

        case 2: // Comparar atributos
            int opcao3;

            printf("\n### ESCOLHA DE ATRIBUTOS ###\n");
            printf("1 - POPULAÇÃO\n");
            printf("2 - ÁREA\n");
            printf("3 - PIB\n");
            printf("4 - PONTOS TURÍSTICOS\n");
            printf("5 - DENSIDADE DEMOGRÁFICA\n");
            printf("Escolha uma das opções: ");
            scanf("%d", &opcao3);

            switch (opcao3) {
            case 1:
            
                if (pop > pop2) { // Comparação por população
                    printf("\nCarta 1 - População de %s (%s): %d\n", cidade, estado, pop);
                    printf("Carta 2 - População de %s (%s): %d\n", cidade2, estado2, pop2);
                    printf("Resultado: Carta 1 (%s) Venceu!\n", cidade);
                }
                else if (pop < pop2) {
                    printf("\nCarta 1 - População de %s (%s): %d\n", cidade, estado, pop);
                    printf("Carta 2 - População de %s (%s): %d\n", cidade2, estado2, pop2);
                    printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2);
                } 
                else{ 
                    printf("\nCarta 1 - População de %s (%s): %d\n", cidade, estado, pop);
                    printf("Carta 2 - População de %s (%s): %d\n", cidade2, estado2, pop2);
                    printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!\n", cidade, cidade2);
                }

                break;

            case 2:
                if (area > area2){ // Comparação por área
                    printf("\nCarta 1 - Área de %s (%s): %.2f\n", cidade, estado, area);
                    printf("Carta 2 - Área de %s (%s): %.2f\n", cidade2, estado2, area2);
                    printf("Resultado: Carta 1 (%s) Venceu!\n", cidade);
                }
                else if (area < area2){
                    printf("\nCarta 1 - Área de %s (%s): %.2f\n", cidade, estado, area);
                    printf("Carta 2 - Área de %s (%s): %.2f\n", cidade2, estado2, area2);
                    printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2);

                } else{ 
                    printf("\nCarta 1 - Área de %s (%s): %.2f\n", cidade, estado, area);
                    printf("Carta 2 - Área de %s (%s): %.2f\n", cidade2, estado2, area2);
                    printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!\n", cidade, cidade2);
                }
                break;

            case 3:

                if (pib > pib2) { // Comparação por PIB
                    printf("\nCarta 1 - PIB de %s (%s): %.2f\n", cidade, estado, pib);
                    printf("Carta 2 - PIB de %s (%s): %.2f\n", cidade2, estado2, pib2);
                    printf("Resultado: Carta 1 (%s) Venceu!\n", cidade);
                } 
                else if (pib < pib2) {
                    printf("\nCarta 1 - PIB de %s (%s): %.2f\n", cidade, estado, pib);
                    printf("Carta 2 - PIB de %s (%s): %.2f\n", cidade2, estado2, pib2);
                    printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2);
                }
                 else{
                    printf("\nCarta 1 - PIB de %s (%s): %.2f\n", cidade, estado, pib);
                    printf("Carta 2 - PIB de %s (%s): %.2f\n", cidade2, estado2, pib2);
                    printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!\n", cidade, cidade2);
                }
                break;
         
            case 4:

                if (meidapib > meidapib2){ // Comparação por PIB per capita
                    printf("\nCarta 1 - PIB per Capita de %s (%s): %.2f\n", cidade, estado, meidapib);
                    printf("Carta 2 - PIB per Capita de %s (%s): %.2f\n", cidade2, estado2, meidapib2);
                    printf("Resultado: Carta 1 (%s) Venceu!\n", cidade);
                } 
                else if (meidapib < meidapib2) {
                    printf("\nCarta 1 - PIB per Capita de %s (%s): %.2f\n", cidade, estado, meidapib);
                    printf("Carta 2 - PIB per Capita de %s (%s): %.2f\n", cidade2, estado2, meidapib2);
                    printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2);
                }
                else{
                    printf("\nCarta 1 - PIB per Capita de %s (%s): %.2f\n", cidade, estado, meidapib);
                    printf("Carta 2 - PIB per Capita de %s (%s): %.2f\n", cidade2, estado2, meidapib2);
                    printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!\n", cidade, cidade2);
                }
                break;

            case 5:

                if (1.0f / mediapop < 1.0f / mediapop2){ // Comparação por densidade (menor vence)
                    printf("\nCarta 1 - Densidade Populacional de %s (%s): %.5f\n", cidade, estado, 1.0f / mediapop);
                    printf("Carta 2 - Densidade Populacional de %s (%s): %.5f\n", cidade2, estado2, 1.0f / mediapop2);
                    printf("Resultado: Carta 1 (%s) Venceu!\n", cidade);
                } 
                else if (1.0f / mediapop > 1.0f / mediapop2) {
                    printf("\nCarta 1 - Densidade Populacional de %s (%s): %.5f\n", cidade, estado, 1.0f / mediapop);
                    printf("Carta 2 - Densidade Populacional de %s (%s): %.5f\n", cidade2, estado2, 1.0f / mediapop2);
                    printf("Resultado: Carta 2 (%s) Venceu!\n", cidade2);
                }
                else{
                    printf("\nCarta 1 - Densidade Populacional de %s (%s): %.5f\n", cidade, estado, 1.0f / mediapop);
                    printf("Carta 2 - Densidade Populacional de %s (%s): %.5f\n", cidade2, estado2, 1.0f / mediapop2);
                    printf("Resultado: Carta 1 (%s) e Carta 2 (%s) Empataram!\n", cidade, cidade2);
                }
                break;
            
            default:
                printf("Digito Inválido!\n");
                break;

            }
            
            break;

        default:
            printf("digito invalido!\n");
            break;
        
        }

        break;
    
    }
    
    default:
        printf("digito invalido!\n");
        break;
    

    case 2: // Mostrar regras
        printf("*** REGRAS DO JOGO ***\n");
        printf("Regra 1 - Preencha todos os Atributos\n");
        printf("Regra 2 - Escolha opções válidas\n");
        printf("### Divirta-se! ###");

        break;

    case 3: // Sair
        printf("SAINDO...\n");
        
        break;

    }

    return 0; // Indica que o programa terminou com sucesso
    
    
}
