#include <stdio.h>
 int main(){
     printf("desafio cartas\n");
    /*DADOS CARTA 1*/
    char nome[30]= "carta1";
    char estado[]= "A" ;   
    char codigo[]= "A01";
    char cidade[]= "Fortaleza";
    int populacao= 250.000;
    float area= 180.000;
    float pib= 120.000;
    int turisticos= 50;
    float densidade=populacao/area;
    float percapita=pib/populacao;
    float superpoder=populacao+area+pib + densidade;

      /*DADOS PARA EXPOR*/

     printf("Estado: %s\n",estado);
     printf("Código:%s\n",codigo);
     printf("Cidade:%s\n",cidade);
     printf("População:%d\n",populacao);
     printf("Área:%f\n",area);
     printf("PIB:%f\n",pib);
     printf("Pontos turísticos:%d\n",turisticos);
     printf("Densidade populacional: %f\n",densidade);
     printf("PIB per capita:%f\n",percapita);




     /* DADOS CARTA 2*/
     
    char nome2[30]="carta2";
    char estado2[]= "B" ;   
    char codigo2[]= "B02";
    char cidade2[]= "Recife";
    int populacao2= 70.000;
    float area2= 180.000;
    float pib2=200.000;
    int turisticos2= 20;
    float densidade2=populacao2/area2;
    float percapita2= pib2/populacao2;
    float superpoder2=populacao2+area2+pib2 + densidade2;


    /*DADOS PARA EXPOR*/

     printf("Estado: %s\n",estado2);
     printf("Código:%s\n",codigo2);
     printf("Cidade:%s\n",cidade2);
     printf("População:%d\n",populacao2);
     printf("Área:%f\n",area2);
     printf("PIB:%f\n",pib2);
     printf("Pontos turísticos:%d\n",turisticos2);
     printf("Densidade populacional: %f\n",densidade2);
     printf("PIB per capita:%f\n",percapita2);
     printf("Super poder 1:%f\n",superpoder);
     printf("Super poder 1:%f\n",superpoder2);
     printf("A População da carta 1 é maior que população2:%d\n",populacao>populacao2);
     printf("O pib da carta1 é maior que o pib da carta 2::%d\n",pib > pib2);
     printf("A Densidade populacional da carta 1 maior que o da carta 2::%d\n",densidade> densidade2);
     printf("A Area da carta 1 é maior que o da carta2:%d\n",area>area2);
     printf("A carta1 é mais forte que a carta2:%d\n", superpoder>superpoder2);


     
    return 0;
}
