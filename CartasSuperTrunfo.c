#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Desafio Super Trunfo - Países
// Tema 3 - Super poder - Nivel Mestre
// Objetivo: No nível Mestre, você implementará comparações entre as cartas, utilizando operadores relacionais e manipulando grandes números com precisão.

/*
	Struct que define as propriedades de uma Carta.
*/
typedef struct Carta {
	// Nivel Novato
	char nome[40];
	char codigo[4];
	char estado;
	float area;
	float pib;
	int populacao;
	int numPontosTuristicos;
	int indice;
	// Nivel Aventureiro
	float densidadePopulacional;
	float pibPerCapita;
	// Nivel Mestre
	float superPoder;
} Carta;

/*
	Essa função é responsável por imprimir as informações
	da carta.
	- Carta *carta: ponteiro para a carta a ser imprimda.
*/
void ImprimirCarta(Carta *carta);

/*
	Essa função é responsável por preencher a Struct da carta
	com as entradas do usuário utilizando a função scanf(...).

	- Carta *carta: ponteiro para a carta que receberá as entradas.
	- int indice: número da carta sendo preenchda.
*/
void PreencherCartaSolicitandoUsuario(Carta *carta, int indice);

/*
	Essa função é responsável por comparar as propriedades da cartaA
	com a cartaB.

	- Carta *cartaA: ponteiro para a carta A.
	- Carta *cartaB: ponteiro para a carta B.
*/
void CompararCartas(Carta *cartaA, Carta *cartaB);

/*
	Essa função retorna o indice da cartaA quando a condicaoParaVencer é
	TRUE, ser for FALSE, retorna o indice da cartaB.

	Usei essa função para redizr a quantidade de código repetido em CompararCartas(...).

	- bool condicaoParaVencer: condição para retornar um indice ou outro.
	- Carta *cartaA: ponteiro para a carta A.
	- Carta *cartaB: ponteiro para a carta B.
*/
int RetornaIndiceDoVencedor(bool condicaoParaVencer, Carta *cartaA, Carta *cartaB);

int main() {
	// Área para definição das variáveis para armazenar as propriedades das cidades
	Carta carta1, carta2;

	// Área para entrada de dados
	PreencherCartaSolicitandoUsuario(&carta1, 1);
	PreencherCartaSolicitandoUsuario(&carta2, 2);

	// Área para exibição dos dados da cidade
	ImprimirCarta(&carta1);
	ImprimirCarta(&carta2);

	// Resultado Nivel Mestre
	CompararCartas(&carta1, &carta2);

	return 0;
}

void PreencherCartaSolicitandoUsuario(Carta *carta, int indice) {
	carta->indice = indice;

	printf("\nInicio do cadastro da Carta %d.", carta->indice);

	printf("\nInforme o Estado da Carta (Uma letra de 'A' a 'H'):");
	scanf(" %c", &carta->estado);

	printf("\nInforme o Codigo da Carta (A01, B03):");
	scanf("%3s", carta->codigo);

	getchar(); // limpa o '\n' do buffer
	printf("\nInforme o Nome da Cidade da Carta:");
	fgets(carta->nome, sizeof(carta->nome), stdin);
	carta->nome[strcspn(carta->nome, "\n")] = 0;

	printf("\nInforme o Numero de Habitantes:");
	scanf("%d", &carta->populacao);

	printf("\nInforme a Area da Cidade:");
	scanf("%f", &carta->area);

	printf("\nInforme o PIB da Carta:");
	scanf("%f", &carta->pib);

	printf("\nInforme o Numero de Pontos Turisticos:");
	scanf("%d", &carta->numPontosTuristicos);

	// Nivel Aventureiro
	carta->pibPerCapita = carta->pib / (float)carta->populacao;
	carta->densidadePopulacional = (float)carta->populacao / carta->area;

	float inversoDensidadePopulacional = carta->area / (float)carta->populacao;

	// Nivel Mestre
	carta->superPoder = 0
		+ (float)carta->populacao
		+ (float)carta->numPontosTuristicos
		+ carta->area
		+ carta->pib
		+ carta->pibPerCapita
		+ inversoDensidadePopulacional;

	printf("\nFim do cadastro da Carta %d.", indice);
}

void ImprimirCarta(Carta *carta) {
	printf("Informacoes da Carta %d: \n", carta->indice);
	printf("   - Estado    : %c \n", carta->estado);
	printf("   - Codigo    : %s \n", carta->codigo);
	printf("   - Nome      : %s \n", carta->nome);
	printf("   - Populacao : %d \n", carta->populacao);
	printf("   - PIB       : %f bilhoes de reais \n", carta->pib);
	printf("   - Area      : %f km^2 \n", carta->area);
	printf("   - N. Pontos Turisticos   : %d \n", carta->numPontosTuristicos);
	// Nivel Aventureiro
	printf("   - Densidade Populacional : %f \n", carta->densidadePopulacional);
	printf("   - PIB per Capita         : %f \n", carta->pibPerCapita);
	// Nivel Mestre
	printf("   - Super Poder            : %f \n", carta->superPoder);
}

// para a densidade populacional, a carta com o menor valor vence;
// para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
void CompararCartas(Carta *cartaA, Carta *cartaB) {
	printf("\nComparacao das cartas (%d vs %d)", cartaA->indice, cartaB->indice);

	int resultado = -1, indiceVendedor = -1;

	indiceVendedor = RetornaIndiceDoVencedor(cartaA->populacao > cartaB->populacao, cartaA, cartaB);
	resultado = indiceVendedor == cartaA->indice;
	printf("\n Populacao: Carta %d venceu (%d)", indiceVendedor, resultado);

	indiceVendedor = RetornaIndiceDoVencedor(cartaA->area > cartaB->area, cartaA, cartaB);
	resultado = indiceVendedor == cartaA->indice;
	printf("\n Area: Carta %d venceu (%d)", indiceVendedor, resultado);

	indiceVendedor = RetornaIndiceDoVencedor(cartaA->pib > cartaB->pib, cartaA, cartaB);
	resultado = indiceVendedor == cartaA->indice;
	printf("\n PIB: Carta %d venceu (%d)", indiceVendedor, resultado);

	indiceVendedor = RetornaIndiceDoVencedor(cartaA->pibPerCapita > cartaB->pibPerCapita, cartaA, cartaB);
	resultado = indiceVendedor == cartaA->indice;
	printf("\n Pib per Capita: Carta %d venceu (%d)", indiceVendedor, resultado);

	indiceVendedor = RetornaIndiceDoVencedor(cartaA->densidadePopulacional < cartaB->densidadePopulacional, cartaA, cartaB);
	resultado = indiceVendedor == cartaA->indice;
	printf("\n Densidade Populacional: Carta %d venceu (%d)", indiceVendedor, resultado);

	indiceVendedor = RetornaIndiceDoVencedor(cartaA->numPontosTuristicos > cartaB->numPontosTuristicos, cartaA, cartaB);
	resultado = indiceVendedor == cartaA->indice;
	printf("\n Pontos Turisticos: Carta %d venceu (%d)", indiceVendedor, resultado);

	indiceVendedor = RetornaIndiceDoVencedor(cartaA->superPoder > cartaB->superPoder, cartaA, cartaB);
	resultado = indiceVendedor == cartaA->indice;
	printf("\n Super Poder: Carta %d venceu (%d)", indiceVendedor, resultado);
}

int RetornaIndiceDoVencedor(bool condicaoParaVencer, Carta *cartaA, Carta *cartaB) {
	if (condicaoParaVencer)
		return cartaA->indice;
	return cartaB->indice;
}