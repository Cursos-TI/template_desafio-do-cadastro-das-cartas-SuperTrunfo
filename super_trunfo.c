#include <stdio.h>

int main (){

    char codigo_da_carta[4],nome_da_cidade[30],estado[50];
    int numero_de_pontos_turisticos;
    float area_em_km, pib_cidade, densidade_populacional, populacao, pib_percapita;
    
        printf ("\nVamos a Primeira Carta do Super Trunfo!\n");

        printf ("\nDigite um nome de estado: \n");
        scanf ("%s", &estado);

        printf ("Digite o código da carta: \n");
        scanf ("%s", &codigo_da_carta);

        printf ("Digite o nome da cidade:\n");
        scanf ("%s", &nome_da_cidade);

        printf ("Digite a população: \n");
        scanf ("%f", &populacao);

        printf ("Digite a área da cidade Km²:\n");
        scanf ("%f", &area_em_km);

        printf ("Digite o PIB da cidade:\n");
        scanf ("%f", &pib_cidade);

        printf ("Digite o número de pontos turisticos da cidade:\n");
        scanf ("%d", &numero_de_pontos_turisticos);

        densidade_populacional = populacao / area_em_km;
        pib_percapita = pib_cidade / populacao;

    char codigo_da_carta2[4],nome_da_cidade2[30],estado2[50];
    int numero_de_pontos_turisticos2;
    float area_em_km2, pib_cidade2, densidade_populacional2, populacao2, pib_percapita2;

        printf ("\nVamos a Segunda Carta do Super Trunfo!\n");

        printf ("\nDigite um nome de estado: \n");
        scanf ("%s", &estado2);

        printf ("Digite o código da carta: \n");
        scanf ("%s", &codigo_da_carta2);

        printf ("Digite o nome da cidade:\n");
        scanf ("%s", &nome_da_cidade2);

        printf ("Digite a população: \n");
        scanf ("%f", &populacao2);

        printf ("Digite a área da cidade Km²:\n");
        scanf ("%f", &area_em_km2);

        printf ("Digite o PIB da cidade:\n");
        scanf ("%f", &pib_cidade2);

        printf ("Digite o número de pontos turisticos da cidade:\n");
        scanf ("%d", &numero_de_pontos_turisticos2);

        densidade_populacional2 = populacao2 / area_em_km2;
        pib_percapita2 = pib_cidade2 / populacao2;

    char codigo_da_carta3[4],nome_da_cidade3[30],estado3[50];
    int numero_de_pontos_turisticos3;
    float area_em_km3, pib_cidade3, densidade_populacional3, populacao3, pib_percapita3;

        printf ("\nVamos a Terceira Carta do Super Trunfo!\n");

        printf ("\nDigite um nome de estado: \n");
        scanf ("%s", &estado3);

        printf ("Digite o código da carta: \n");
        scanf ("%s", &codigo_da_carta3);

        printf ("Digite o nome da cidade:\n");
        scanf ("%s", &nome_da_cidade3);

        printf ("Digite a população: \n");
        scanf ("%f", &populacao3);

        printf ("Digite a área da cidade Km²:\n");
        scanf ("%f", &area_em_km3);

        printf ("Digite o PIB da cidade:\n");
        scanf ("%f", &pib_cidade3);

        printf ("Digite o número de pontos turisticos da cidade:\n");
        scanf ("%d", &numero_de_pontos_turisticos3);

        densidade_populacional3 = populacao3 / area_em_km3;
        pib_percapita3 = pib_cidade3 / populacao3;

    char codigo_da_carta4[4],nome_da_cidade4[30],estado4[50];
    int numero_de_pontos_turisticos4;
    float area_em_km4, pib_cidade4, densidade_populacional4, populacao4, pib_percapita4;

        printf ("\nVamos a Quarta Carta do Super Trunfo!\n");

        printf ("\nDigite um nome de estado: \n");
        scanf ("%s", &estado4);

        printf ("Digite o código da carta: \n");
        scanf ("%s", &codigo_da_carta4);

        printf ("Digite o nome da cidade:\n");
        scanf ("%s", &nome_da_cidade4);

        printf ("Digite a população: \n");
        scanf ("%f", &populacao4);

        printf ("Digite a área da cidade Km²:\n");
        scanf ("%f", &area_em_km4);

        printf ("Digite o PIB da cidade:\n");
        scanf ("%f", &pib_cidade4);

        printf ("Digite o número de pontos turisticos da cidade:\n");
        scanf ("%d", &numero_de_pontos_turisticos4);

        densidade_populacional4 = populacao4 / area_em_km4;
        pib_percapita4 = pib_cidade4 / populacao4;

    printf ("\nCarta 1 \n");
        printf ("Estado: %s \n", estado);
        printf ("Código da carta: %s \n", codigo_da_carta);
        printf ("Nome da cidade: %s \n", nome_da_cidade);
        printf ("População: %f \n", populacao);
        printf ("Área em Km²: %.2f Km² \n", area_em_km);
        printf ("PIB: %.2f Bilhões de Reais \n", pib_cidade);
        printf ("Numero de Pontos Turisticos: %d \n", numero_de_pontos_turisticos);
        printf ("Densidade Populacional: %f hab/Km² \n", densidade_populacional);
        printf ("PIB per Capita: %.2f reais\n\n", pib_percapita);

    printf ("Carta 2 \n");
        printf ("Estado: %s \n", estado2);
        printf ("Código da carta: %s \n", codigo_da_carta2);
        printf ("Nome da cidade: %s \n", nome_da_cidade2);
        printf ("População: %f \n", populacao2);
        printf ("Área em Km²: %.2f km² \n", area_em_km2);
        printf ("PIB: %.2f Bilhões de Reais \n", pib_cidade2);
        printf ("Numero de Pontos Turisticos: %d \n", numero_de_pontos_turisticos2);
        printf ("Densidade Populacional: %f hab/Km² \n", densidade_populacional2);
        printf ("PIB per Capita: %.2f reais\n\n", pib_percapita2);

    printf ("Carta 3 \n");
        printf ("Estado: %s \n", estado3);
        printf ("Código da carta: %s \n", codigo_da_carta3);
        printf ("Nome da cidade: %s \n", nome_da_cidade3);
        printf ("População: %f \n", populacao3);
        printf ("Área em Km²: %.2f km² \n", area_em_km3);
        printf ("PIB: %.2f Bilhões de Reais \n", pib_cidade3);
        printf ("Numero de Pontos Turisticos: %d \n", numero_de_pontos_turisticos3);
        printf ("Densidade Populacional: %f hab/Km² \n", densidade_populacional3);
        printf ("PIB per Capita: %.2f reais\n\n", pib_percapita3);

    printf ("Carta 4 \n");
        printf ("Estado: %s \n", estado4);
        printf ("Código da carta: %s \n", codigo_da_carta4);
        printf ("Nome da cidade: %s \n", nome_da_cidade4);
        printf ("População: %f \n", populacao4);
        printf ("Área em Km²: %.2f km² \n", area_em_km4);
        printf ("PIB: %.2f Bilhões de Reais \n", pib_cidade4);
        printf ("Numero de Pontos Turisticos: %d \n", numero_de_pontos_turisticos4);
        printf ("Densidade Populacional: %f hab/Km² \n", densidade_populacional4);
        printf ("PIB per Capita: %.2f reais\n\n", pib_percapita4);

/*DADOS USADOS COMO MODELO PARA GERAÇÃO DAS CARTAS

Carta 1
Estado: Ceara
Código da carta: C01
Nome da cidade: Fortaleza
População: 2428678
Área em Km²: 313.80 Km²
PIB: 73.80 Bilhões de Reais
Numero de Pontos Turisticos: 15

Carta 2
Estado: Bahia
Código da carta: B01
Nome da cidade: Salvador
População: 2417678
Área em Km²: 693.80 km²
PIB: 62.95 Bilhões de Reais
Numero de Pontos Turisticos: 20

Carta 3
Estado: Pernambuco
Código da carta: A01
Nome da cidade: Recife
População: 9562007
Área em Km²: 98.312 km²
PIB: 54.970 Bilhões de Reais
Numero de Pontos Turisticos: 15

Carta 4
Estado: Alagoas
Código da carta: D01
Nome da cidade: Maceió
População: 957916
Área em Km²: 509.6 km²
PIB: 27.484 Bilhões de Reais
Numero de Pontos Turisticos: 20*/

    return 0;

}
