#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    char letra_estado_1; // Letra representando o Estado (de A a H)
    char codigo_estado_1[3]; // Código do estado (2 dígitos + '\0')
    char nome_cidade_1[50]; // Nome da cidade
    int populacao_1; // Número de habitantes
    float area_km2_1; // Área da cidade em km²
    float pib_1; // Produto Interno Bruto da cidade
    int numero_ponto_turistico_1; // Quantidade de pontos turísticos

    char letra_estado_2; // Letra representando o Estado (de A a H)
    char codigo_estado_2[3]; // Código do estado (2 dígitos + '\0')
    char nome_cidade_2[50]; // Nome da cidade
    int populacao_2; // Número de habitantes
    float area_km2_2; // Área da cidade em km²
    float pib_2; // Produto Interno Bruto da cidade
    int numero_ponto_turistico_2; // Quantidade de pontos turísticos
    
    printf("Insira os dados da carta 01\n");

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &letra_estado_1); // Espaço antes do %c ignora espaços em branco e quebras de linha

    printf("Digite o número do código do Estado de 01 a 04: ");
    scanf("%s", &codigo_estado_1); // Lê no máximo 2 caracteres (ex: "01", "02")

    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Limpa o buffer
    printf("Digite o nome da Cidade: "); // Lê o nome da Cidade (suporta nomes compostos)
    fgets(nome_cidade_1, sizeof(nome_cidade_1), stdin);

    // Leitura de dados numéricos
    printf("Digite o número de habitantes da Cidade: "); 
    scanf("%d", &populacao_1);

    printf("Digite a área da Cidade em quilômetros quadrados: ");
    scanf("%f", &area_km2_1);

    printf("Digite o Produto Interno Bruto da Cidade: ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos na Cidade: ");
    scanf("%d", &numero_ponto_turistico_1);
    
    printf("\n");

    printf("Insira os dados da Carta 2!\n");

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &letra_estado_2); // Espaço antes do %c ignora espaços em branco e quebras de linha
    
    printf("Digite o número do código do Estado de 01 a 04: ");
    scanf("%s", &codigo_estado_2); // Lê no máximo 2 caracteres (ex: "01", "02")

    int c_2;
    while ((c_2 = getchar()) != '\n' && c_2 != EOF); // Limpa o buffer
    printf("Digite o nome da Cidade: "); // Lê o nome da Cidade (suporta nomes compostos)
    fgets(nome_cidade_2, sizeof(nome_cidade_2), stdin);

    printf("Digite o número de habitantes da Cidade: "); // Leitura de dados numéricos
    scanf("%d", &populacao_2);

    printf("Digite a área da Cidade em quilômetros quadrados: ");
    scanf("%f", &area_km2_2);

    printf("Digite o Produto Interno Bruto da Cidade: ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos na Cidade: ");
    scanf("%d", &numero_ponto_turistico_2);
    printf("\n");

    //Exibindo os dados da carta
    printf("Carta 01!\n");
    printf("\n");

    printf("Estado: %c\n", letra_estado_1); // Letra estado
    printf("Código da Carta: %c%s\n", letra_estado_1, codigo_estado_1); // Letra e código formam a identificação da carta
    printf("Nome da Cidade: %s\n", nome_cidade_1); // Nome da Cidade
    printf("População: %d\n", populacao_1); // Número de população da cidade
    printf("Área: %.2fkm²\n", area_km2_1);  // 2 casas decimais
    printf("PIB: %.2f\n", pib_1);  // 2 casas decimais
    printf("Pontos turísticos: %d\n", numero_ponto_turistico_1); // Número de Ponto Turístico da Cidade.
    printf("\n");
    
    //Exibindo os dados da carta
    printf("CARTA 02\n");
    printf("\n");

    printf("Estado: %c\n", letra_estado_2); // Letra estado
    printf("Código da Carta: %c%s\n", letra_estado_2, codigo_estado_2); // Letra e código formam a identificação da carta
    printf("Nome da Cidade: %s\n", nome_cidade_2); // Nome da Cidade
    printf("População: %d\n", populacao_2); // Número inteiro
    printf("Área: %.2fkm²\n", area_km2_2);  // 2 casas decimais
    printf("PIB: %.2f\n", pib_2);  // 2 casas decimais
    printf("PIB Per Capta: %.2f reais\n", pib_2/populacao_2); // PIB dividido pela população.

   return 0;
}
