#include <stdio.h>

int main(){
	//
	char estadoA[2];
	char estadoB[2];
	//
	char cidadeA[120];
	char cidadeB[120];
	//
	unsigned int populacaoA = 0;
	unsigned int populacaoB = 0;
	//
	float areaA;
	float areaB;
	//
	float pibA;
	float pibB;
	//
	unsigned int pontosturisticosA = 0;
	unsigned int pontosturisticosB = 0;
	//
	printf("\n ----- CIDADE 1 ----- \n");
	printf("Insira o nome da cidade: ");
	scanf("%s",cidadeA);
	printf("\nInsira o numero de habitantes da cidade: ");
	scanf("%d",&populacaoA);
	printf("\nInsira a area da cidade: ");
	scanf("%f",&areaA);
	printf("\nInsira o PIB da cidade: ");
	scanf("%f",&pibA);
	printf("\nInsira a quantidade de pontos turisticos da cidade: ");
	scanf("%d", &pontosturisticosA);
	printf("Escolha uma letra de A-H: ");
	scanf("%s",estadoA);
	//
		printf("\n ----- CIDADE 2 ----- \n");
	printf("Insira o nome da cidade: ");
	scanf("%s",cidadeB);
	printf("\nInsira o numero de habitantes da cidade: ");
	scanf("%d",&populacaoB);
	printf("\nInsira a area da cidade: ");
	scanf("%f",&areaB);
	printf("\nInsira o PIB da cidade: ");
	scanf("%f",&pibB);
	printf("\nInsira a quantidade de pontos turisticos da cidade: ");
	scanf("%d", &pontosturisticosB);
	printf("Escolha uma letra de A-H: ");
	scanf("%s",estadoB);

	//
	double densidadePopulA = populacaoA/areaA;
	double densidadePopulB = populacaoB/areaB;
	//
	double pibpercapA = pibA/populacaoA;
	double pibpercaB = pibB/populacaoB;
	double PoderA;
	double PoderB;

	PoderA = (double)populacaoA + areaA + pibA + (double)pontosturisticosA + pibpercapA + (1.0/densidadePopulA);
	PoderB = (double)populacaoB + areaB + pibB + (double)pontosturisticosB + pibpercaB + (1.0/densidadePopulB);
	printf("\n");
	printf("\nCarta: 1 \n Estado:%s \n Codigo:%s01 \n Nome da cidade:%s \n População:%d \n Area:%f \n PIB:R$%f \n Pontos turisticos:%d \n densidade populacional:%lf \n pibpercapita:%lf ",estadoA,estadoA,cidadeA,populacaoA,areaA,pibA,pontosturisticosA,densidadePopulA,pibpercapA);
	printf("\nCarta: 2 \n Estado:%s \n Codigo:%s01 \n Nome da cidade:%s \n População:%d \n Area:%f \n PIB:R$%f \n Pontos turisticos:%d \n densidade populacional:%lf \n pib percapita:%lf ",estadoB,estadoB,cidadeB,populacaoB,areaB,pibB,pontosturisticosB,densidadePopulB,pibpercaB);


	// 
	// poder
	
	//
	printf("\n");
	printf("\n1 - carta %s01 vence, 0 - carta %s02 vence",estadoA,estadoB );
	printf("\n Populacao :%d",populacaoA > populacaoB);
	printf("\n area:%d", areaA > areaB);
	printf("\n pib:%d", pibA > pibB);
	printf("\n pontos turisticos:%d", pontosturisticosA > pontosturisticosB);
	printf("\n densidade populacional:%d", densidadePopulA > densidadePopulB);
	printf("\n pib percapita:%d", pibpercapA > pibpercaB);
	printf("\n Poder:%d", PoderA > PoderB );
}	
