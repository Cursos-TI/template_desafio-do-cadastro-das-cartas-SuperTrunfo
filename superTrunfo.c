
#include<stdio.h>

int main() {
    // declaração das variáveis
    char estado, estado2; // definindo as opções de estados p
    char codCarta[3], codCarta2[3], cidade[20], cidade2[20];
    unsigned int populacao, populacao2;
    int turisticos, turisticos2;
    float area, area2, pib, pib2;
    float densiPopulacional, densiPopulacional2;
    float pibPerCapita, pibPerCapita2;

    
    printf("Entre com o Estado de A-H:\n");
    scanf("%c", &estado);// entrada do usuário referente ao estado

    printf("Qual o código da carta?\n");
    scanf("%s", &codCarta);// entrada código carta

    printf("Entre com a cidade:\n");
    scanf("%s", &cidade);

    printf("Entre com a população:\n");
    scanf("%u", &populacao);

    printf("Qual a área?\n");
    scanf("%f", &area);

    printf("Qual o PIB?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &turisticos);

    //Cáculo da densidade populacional 
    densiPopulacional = populacao / area;
    //Calculo PIB per Capita
    pibPerCapita = (pib * 1e9) / populacao;

    
    // saidas da carta 1 para o uruário 
    printf("====== CARTA 1 ======: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %u\n", populacao);
    printf("Área: %.2f Km\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %.2f hab/Km\n", densiPopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    


    // entrada dos dados da carta 2
    printf("Entre com o Estado:\n");
    scanf(" %c", &estado2); //espaço antes de %c para o scanf não ler o enter da resposta anterior.

    printf("Qual o código da carta?\n");
    scanf("%s", &codCarta2);

    printf("Entre com a cidade:\n");
    scanf("%s", &cidade2);

    printf("Entre com a população:\n");
    scanf("%u", &populacao2);

    printf("Qual a área?\n");
    scanf("%f", &area2);

    printf("Qual o PIB?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos a cidade possui?\n");
    scanf("%d", &turisticos2);

    //Cáculo da densidade populacional carta 2
    densiPopulacional2 = populacao2 / area2;
    //Calculo PIB per Capita carta 2
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // saidas da carta 2 para o uruário 
    printf("====== CARTA 2 ======: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %fKm\n", area2);
    printf("PIB: %f de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/Km\n", densiPopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    // inverso densidade populacional
    float inversoDensi, inversoDensi2;

    inversoDensi = 1/densiPopulacional;
    inversoDensi2 = 1/densiPopulacional2;

    // Super Poder:
    float superPoder1, superPoder2;

    superPoder1 = (float)populacao + area + pib + turisticos + inversoDensi + pibPerCapita;
    superPoder2 = (float)populacao2 + area2 + pib2 + turisticos2 + inversoDensi2 + pibPerCapita2;

    
    
    //CONDIÇÃO/COMPARAÇÕES 
    printf("====== DISPUTA ====== \n");
    if(populacao > populacao2){
        printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    }else{
        printf("População: Carta 2 venceu(%d)\n", populacao > populacao2);
    }
    
    if(area > area2){
        printf("Área: Carta 1 venceu (%d)\n", area > area2);
    }else{
        printf("Área: Carta 2 venceu (%d)\n", area > area2);
    }
    
    if(pib > pib2){
        printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    }else{
        printf("PIB: Carta 2 venceu (%d)\n", pib > pib2);
    }

    if (turisticos > turisticos2){
        printf("Turísticos: Carta 1 venceu(%d)\n",turisticos > turisticos2);
    }else{
        printf("Turísticos: Carta 2 venceu(%d)\n",turisticos > turisticos2);
    }
    
    if (inversoDensi < inversoDensi2){
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", inversoDensi < inversoDensi2);
    }else{
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", inversoDensi < inversoDensi2);
    }
    
    if (pibPerCapita > pibPerCapita2){
        printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita > pibPerCapita2);
    }else{
        printf("PIB per Capita: Carta 2 venceu (%d)\n", pibPerCapita > pibPerCapita2);

    }

    if(superPoder1 > superPoder2){
        printf("SuperPoder: Carta 1 venceu (%d)", superPoder1 > superPoder2);
    }else{
        printf("SuperPoder: Carta 2 venceu (%d)", superPoder1 > superPoder2);
    }
    
    


}
