#include <stdio.h>
int main (){


//DECLARAÇÃO DAS VARIÁVEIS CARTA 1
char Estado1 [30];
char codigocarta1 [15];
char nomeCidade1 [30];
int populacao1 ;
float area1 ;
float pib1;
int pontosTuristicos1 ;
float DensidadePopulacional1 ;
float PibperCapita1;
float superpoderA;

//DECLARAÇÃO DAS VARIÁVEIS CARTA 2
char Estado2 [30];
char codigocarta2 [15];
char nomeCidade2 [30];
int populacao2 ;
float area2 ;
float pib2;
int pontosTuristicos2 ;
float DensidadePopulacional2 ;
float PibperCapita2 ;
float superpoderB;


//INSTRUÇÕES INICIAIS
printf("****CADASTRO DAS CARTAS JOGO SUPER TRUNFO****\n");

//INICIO DA LEITURA DOS DADOS DA CARTA 1
printf("Cadastro Carta 1 :\n");

printf("Estado: " );
scanf("%s", &Estado1);

printf("Código da Carta: " );
scanf("%s", &codigocarta1);

printf("Nome da cidade: " );
scanf("%s", &nomeCidade1); 

printf("População: " );
scanf("%d", &populacao1);

printf("Área em Km²: " );
scanf("%f", &area1);

printf("PiB: " );
scanf("%f", &pib1);

printf("Número de pontos Turísticos: " );
scanf("%d", &pontosTuristicos1);

DensidadePopulacional1 = populacao1 / area1;
PibperCapita1 = pib1 / populacao1;
superpoderA = populacao1+area1+pib1+pontosTuristicos1+PibperCapita1+(1/DensidadePopulacional1);




printf("*************************************************\n");

//INICIO DA LEITURA DOS DADOS DA CARTA 2
printf("Cadastro Carta 2 : \n");

printf("Estado: ", Estado2);
scanf("%s", &Estado2);

printf("Código da Carta: ", codigocarta2);
scanf("%s", &codigocarta2);

printf("Nome da cidade: ", nomeCidade2);
scanf("%s", &nomeCidade2); 

printf("População: " , populacao2);
scanf("%d", &populacao2);

printf("Área em Km²: " , area2);
scanf("%f", &area2);

printf("PIB: ", pib2);
scanf("%f", &pib2);

printf("Número de pontos Turísticos: " ,pontosTuristicos2);
scanf("%d", &pontosTuristicos2);

DensidadePopulacional2 = populacao2 / area2;
PibperCapita2 = pib2 / populacao2;
superpoderB = populacao2+area2+pib2+pontosTuristicos2+PibperCapita2+(1/DensidadePopulacional2);


printf("\n");

printf("*********CARTAS CADASTRADAS**********\n");

//DADOS CARTA 1
printf("Carta 1 : \n");
printf("Estado : %s\n", Estado1);
printf("Código : %s\n", codigocarta1);
printf("Nome da Cidade : %s\n", nomeCidade1);
printf("População : %d\n", populacao1);
printf("ÁREA : %2.f  km²\n", area1);
printf("PIB : %.2f   Reais\n", pib1);
printf("Número de Pontos Turísticos : %d\n", pontosTuristicos1);
printf("Densidade Poupulacioonal: %.3f  habitantes/km²\n", DensidadePopulacional1);
printf("Pib per Capita: %.2f  Reais\n", PibperCapita1);
printf("Super Poder : %.2f  \n" ,superpoderA);

printf("\n");

//DADOS CARTA 2
printf("Carta 2 : \n");
printf("Estado : %s\n", Estado2);
printf("Código : %s\n", codigocarta2);
printf("Nome da Cidade : %s\n", nomeCidade2);
printf("População : %d\n", populacao2);
printf("ÁREA : %2.f  Km²\n", area2);
printf("PIB : %2.f  Reais\n", pib2);
printf("Número de Pontos Turísticos : %d\n", pontosTuristicos2);
printf("Densidade Populacional: %3.f  habitante/Km² \n", DensidadePopulacional2);
printf("Pib per Capita: %2f  Reais\n", PibperCapita2);
printf("Super Poder : %.2f  \n" ,superpoderB);

printf("\n");

//COMPARAÇÃO DE CARTAS
// comparação pelo atributo população
printf("COMPARAÇÃO DE CARTAS (Atributo : População): \n");
printf("Carta 1 - %s : %d\n", Estado1, populacao1);
printf("carta 2 - %s : %d\n", Estado2 , populacao2);
if(populacao1 == populacao2){
    printf("Resultado população: Empate! " );
}else if (populacao1 > populacao2){
    printf("Resultado população: carta 1 (%s)  venceu! " , Estado1 );
}else {
    printf("Resultado população: carta 2 (%s) venceu! " , Estado2 );
}



printf("\n");
printf("*******FIM DO CADASTRO*******\n");


return 0;
}
