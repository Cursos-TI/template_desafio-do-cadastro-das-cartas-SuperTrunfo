#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// nivel aventureiro
// nivel mestre

int main() {
                   // variáveis 
     char estado;           // 'A' a 'B'
    char codigo[10];       // "A01", "B03", etc. (10 é um tamanho seguro)
    char nomeCidade[100];  // Nome com espaços (ex: "São Paulo")
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    double densidade_populacional;// populaçao dividida pela area  // nivel aventureiro
    double pib_per_capita; // calculo do PIB percapita             // nivel  aventureiro
    double super_poder;                                            // nivel mestre
    double densidade _populaçao;                                    // nivel mestre
    double pib_per_capita;                                          //nivel mestre     
    
  
                             // Área para entrada de dados
    printf("--- Inserir dados da Carta 1 ---\n");

    printf("Digite o Estado (A-B): ");
        scanf(" %c", &carta1.estado); 

    printf("Digite o Código da Carta (ex: A01): ");
         scanf("%s", carta1.codigo); // %s para strings sem espaço

    printf("Digite o Nome da Cidade: ");
         scanf(" %[^\n]", carta1.nomeCidade); // Lê a string até o 'Enter' (permite espaços)

    printf("Digite a População: ");
         scanf("%d", &carta1.populacao);

    printf("Digite a Área (em km²): ");
         scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões de reais): ");
         scanf("%f", &carta1.pib);

    printf("Digite o Número de Pontos Turísticos: ");
         scanf("%d", &carta1.pontosTuristicos);
    
    
  

    printf("\n--- Carta 1 cadastrada com sucesso! ---\n\n");


    printf("--- Inserir dados da Carta 2 ---\n");

    printf("Digite o Estado (A-B): ");
         scanf(" %c", &carta2.estado); // O espaço limpa o 'Enter'  
     scanf(" %[^\n]", carta2.nomeCidade); // Lê a string com espaços

    printf("Digite a População: ");
         scanf("%d", &carta2.populacao);

    printf("Digite a Área (em km²): ");
         scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões de reais): ");
         scanf("%f", &carta2.pib);

    printf("Digite o Número de Pontos Turísticos: ");
         scanf("%d", &carta2.pontosTuristicos);

    printf("\n--- Carta 2 cadastrada com sucesso! ---\n\n");


    printf("--- INFORMAÇÕES CADASTRADAS ---\n\n"
      
               // Área para exibição dos dados da cidade
     
              // Dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area); // "%.2f" formata para 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km\n");
    printf("PIB per capita:%.2f reai\n") // nivel mestre 
     
    printf("\n"); // Adiciona uma linha em branco entre as cartas


            // Dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km\n");
    printf("PIB per capita:%.2f reai\n")

      //  comparaçao entre cartas 

      if (populacao carta 1 > populaçao carta 2) {
      printf ( "a populaçao da carta 1 é maior que a carta 2\n");
      }else{
       printf("a populaçao da carta 1 é menor que a carta 2\n");
    }


      
      }
    
  
    return 0;
} 
