#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

//Colours
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

//Card struct
typedef struct {
	char	state;
	char	code[5];
	char	city[50];
	int		population;
	float	area;
	float	pib;
	int		tourist_points;
}	t_card;

/**
 * Draws a line of a specified character and size.
 * @param c The character to draw.
 * @param size The number of times to draw the character.
 * 
 * This function is used to create visual separation between cards when printing their details.
*/
static void draw_line(char c, size_t size)
{
	for (size_t i = 0; i < size; i++)
		printf(YELLOW "%c" RESET, c);
	printf("\n");
}

/**
 * Prints the details of an array of cards.
 * @param cards The array of cards to print.
 * @param size The number of cards in the array.
 */
static void print_cards(t_card *cards, size_t size)
{
	draw_line('-', 50);

	for (size_t i = 0; i < size; i++) {
		printf(GREEN "\t\tCarta %zu\n" RESET, i + 1);
		printf(BLUE " Estado:\t\t\t" RESET "%c\n", cards[i].state);
		printf(BLUE " Código:\t\t\t" RESET "%s\n", cards[i].code);
		printf(BLUE " Cidade: \t\t\t" RESET "%s\n", cards[i].city);
		printf(BLUE " População:\t\t\t" RESET "%d\n", cards[i].population);
		printf(BLUE " Área:\t\t\t\t" RESET "%.2f km²\n", cards[i].area);
		printf(BLUE " PIB:\t\t\t\t" RESET "%.2f bilhões de reais\n", cards[i].pib);
		printf(BLUE " Número de pontos turísticos: \t" RESET "%d\n", cards[i].tourist_points);

		draw_line('-', 50); // Draw a line after each card for better readability
	}
}

/**
 * Prompts the user to input the details for two cards and stores them in the provided array.
 * @param card An array of two t_card structures where the inputted card details will be stored.
 */
static void add_card(t_card *card) {

	//Variables
	char* messages[7] = {
		BLUE " | Digite o estado da cidade(A - H): " RESET,
		BLUE " | Digite o código da cidade(ex: A00): " RESET,
		BLUE " | Digite o nome da cidade: " RESET,
		BLUE " | Digite a população da cidade: " RESET,
		BLUE " | Digite a área da cidade (em km²): " RESET,
		BLUE " | Digite o PIB da cidade (em bilhões de reais): " RESET,
		BLUE " | Digite o número de pontos turísticos da cidade: " RESET
	};

	// Adding first card
	printf(GREEN "Adicionando a carta 1\n" RESET);
	printf(messages[0]);
	scanf(" %c", &card[0].state);

	printf(messages[1]);
	scanf("%s", card[0].code);

	printf(messages[2]);
	scanf("%s", card[0].city);

	printf(messages[3]);
	scanf("%d", &card[0].population);
	
	printf(messages[4]);
	scanf("%f", &card[0].area);
	
	printf(messages[5]);
	scanf("%f", &card[0].pib);
	
	printf(messages[6]);
	scanf("%d", &card[0].tourist_points);
	
	// Adding second card
	printf(GREEN "Adicionando a carta 2\n" RESET);
	printf(messages[0]);
	scanf(" %c", &card[1].state);

	printf(messages[1]);
	scanf("%s", card[1].code);
	
	printf(messages[2]);
	scanf("%s", card[1].city);
	
	printf(messages[3]);
	scanf("%d", &card[1].population);

	printf(messages[4]);
	scanf("%f", &card[1].area);
	
	printf(messages[5]);
	scanf("%f", &card[1].pib);

	printf(messages[6]);
	scanf("%d", &card[1].tourist_points);
}

int main(void)
{
	// Variables
	t_card cards[2];

	// Logic to add and print cards
	add_card(cards);
	print_cards(cards, 2);

	return (0);
}
