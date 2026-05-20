#include <stdio.h>

  int main() {

    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;  // aula aventureiro
    float pibpercapita1;           // aula aventureiro
    float Superpodercarta1; // nível Mestre

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;  // aula aventureiro
    float pibpercapita2;           // aula aventureiro
    float Superpodercarta2; // nível Mestre

    

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (Letra de A a H): ");
    scanf("%c", &estado1);

    printf("Código (ex: A01): ");
    scanf(" %3s", codigo1); // corrigido para ler string

    printf("Nome da Cidade: ");
    scanf(" %49s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1; // multiplicação por 1 bilhão para converter o PIB de bilhões para reais


   // Cadastro da Carta 2
printf("Cadastro da Carta 2:\n");

printf("Estado (Letra de A a H): ");
scanf(" %c", &estado2);

printf("Código (ex: A01): ");
scanf(" %3s", codigo2);

printf("Nome da Cidade: ");
scanf(" %49s", nomeCidade2);

printf("População: ");
scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2; // multiplicação por 1 bilhão para converter o PIB de bilhões para reais


// variavel para comparação
 //Calcular super da carta 1
    Superpodercarta1 = populacao1 + 
    area1 + 
    pib1 + 
    pontosTuristicos1 + 
    pibpercapita1 +
    (1  /  densidadepopulacional1);  // nível Mestre

    //Calcular super da carta 2
    Superpodercarta2 = populacao2 + 
    area2 + 
    pib2 + 
    pontosTuristicos2 + 
    pibpercapita2 +
    (1  /  densidadepopulacional2);  // nível Mestre
  

         // verificando qual carta tem o maior valor em cada categoria para calcular o Super Poder nível Mestre

    float Resultadopopulação = populacao1 > populacao2;
    float Resultadoarea = area1 > area2;
    float Resultadopib = pib1 > pib2;
    float ResultadopontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    float Resultadodensidadepopulacional = densidadepopulacional1 > densidadepopulacional2;
    float Resultadopibpercapita = pibpercapita1 > pibpercapita2;


      // Calcular o resultado do Super Poder nível Mestre
      float resultadoSuperPoder = Superpodercarta1 > Superpodercarta2; // comparação do Super Poder nivel Mestre


    // Exibição da Carta 1
    printf("\n--- Carta 1 Cadastrada ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional1);   // aula aventureiro
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);   // aula aventureiro
    printf(" super poder da carta 1 é : %.2f\n", Superpodercarta1); // nível Mestre
 



    // Exibição da Carta 2
    printf("\n--- Carta 2 Cadastrada ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadepopulacional2); // aula aventureiro
    printf("PIB per capita: R$ %.2f\n", pibpercapita2); // aula aventureiro
    printf(" super poder da carta 2 é : %.2f\n", Superpodercarta2); // nível Mestre

    

       printf("\n--- Comparação das Cartas ---\n");
  
    //exibir resultado População: 
    printf("A cidade com mais população é : %d\n", populacao1 > populacao2);

    //exibir resultado Área: 
    printf("O resultado da comparação de Área é: %d\n", area1 > area2);

    //exibir resultado PIB: 
    printf("O resultado da comparação de PIB é: %d\n", pib1 > pib2);

    //exibir resultado Pontos Turísticos: 
    printf("O resultado da comparação de Pontos Turísticos é: %d\n", pontosTuristicos1 > pontosTuristicos2);

    //exibir resultado Densidade Populacional: 
    printf("O resultado da comparação de Densidade Populacional é: %d\n", densidadepopulacional1 < densidadepopulacional2);

    //exibir resultado PIB per Capita: 
    printf("O resultado da comparação de PIB per Capita é: %d\n", pibpercapita1 > pibpercapita2);

     // exibir resultado Super Poder nível Mestre:
    printf("\n --- Comparação do Super Poder nível Mestre ---\n");
    printf("O resultado da comparação do Super Poder nível Mestre é: %d\n", resultadoSuperPoder);

    
    return 0;
    }



