#include <stdio.h>

int main (){

    char codigo_da_carta[4],nome_da_cidade[30],estado[50];
    int numero_de_pontos_turisticos;
    float area_em_km, pib_cidade, densidade_populacional, pib_percapita;
    unsigned long int populacao;
    float super_poder;
    
        printf ("\nVamos a Primeira Carta do Super Trunfo!\n");

        printf ("\nDigite um nome de estado: \n");
        scanf ("%s", &estado);

        printf ("Digite o código da carta: \n");
        scanf ("%s", &codigo_da_carta);

        printf ("Digite o nome da cidade:\n");
        scanf ("%s", &nome_da_cidade);

        printf ("Digite a população: \n");
        scanf ("%lu", &populacao);

        printf ("Digite a área da cidade Km²:\n");
        scanf ("%f", &area_em_km);

        printf ("Digite o PIB da cidade:\n");
        scanf ("%f", &pib_cidade);

        printf ("Digite o número de pontos turisticos da cidade:\n");
        scanf ("%d", &numero_de_pontos_turisticos);

        densidade_populacional = populacao / area_em_km;
        pib_percapita = pib_cidade / populacao;
        super_poder = (float) populacao + area_em_km + pib_cidade + numero_de_pontos_turisticos + pib_percapita + (area_em_km/populacao);

        char codigo_da_carta2[4],nome_da_cidade2[30], estado2[50];
        int numero_de_pontos_turisticos2;
        float area_em_km2, pib_cidade2, densidade_populacional2, pib_percapita2;
        unsigned long int populacao2;
        float super_poder2;

        printf ("\nVamos a Segunda Carta do Super Trunfo!\n");

        printf ("\nDigite um nome de estado: \n");
        scanf ("%s", &estado2);

        printf ("Digite o código da carta: \n");
        scanf ("%s", &codigo_da_carta2);

        printf ("Digite o nome da cidade:\n");
        scanf ("%s", &nome_da_cidade2);

        printf ("Digite a população: \n");
        scanf ("%lu", &populacao2);

        printf ("Digite a área da cidade Km²:\n");
        scanf ("%f", &area_em_km2);

        printf ("Digite o PIB da cidade:\n");
        scanf ("%f", &pib_cidade2);

        printf ("Digite o número de pontos turisticos da cidade:\n");
        scanf ("%d", &numero_de_pontos_turisticos2);

        densidade_populacional2 = populacao2 / area_em_km2;
        pib_percapita2 = pib_cidade2 / populacao2;
        super_poder = (float) populacao2 + area_em_km2 + pib_cidade2 + numero_de_pontos_turisticos2 + pib_percapita2 + (area_em_km2 / populacao2);


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

float comp_populacao, comp_area, comp_pib, comp_num_pontos_turisticos, comp_densidade_populacional, comp_pibpercapita, comp_superpoder;

        comp_populacao = populacao  > populacao2;
        comp_area = area_em_km > area_em_km2;
        comp_pib = pib_cidade > pib_cidade2;
        comp_num_pontos_turisticos = numero_de_pontos_turisticos > numero_de_pontos_turisticos2;
        comp_densidade_populacional = densidade_populacional > densidade_populacional2;
        comp_pibpercapita = pib_percapita > pib_percapita2;
        comp_superpoder = super_poder > super_poder2;

        printf ("População: Carta 1 Venceu (%.1f\n)", comp_populacao);
        printf ("Área: Carta 1 Venceu (%.1f\n)", comp_area);
        printf ("PIB: Carta 1 Venceu (%.1f\n)", comp_pib);
        printf ("Pontos Turísticos: Carta 1 Venceu (%.1f\n)", comp_num_pontos_turisticos);
        printf ("Densidade Populacional : Carta 1 Venceu (%.1f\n)", comp_densidade_populacional);
        printf ("PIB per capita: Carta 1 Venceu (%.1f\n)", comp_pibpercapita);
        printf ("Super Poder: Carta 1 Venceu (%.1f\n)", comp_superpoder);

        return 0;

}
