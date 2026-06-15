#include <stdio.h>

int main() {
  const int NUMBER_OF_LETTERS = 8;
  const int NUMBER_OF_CARDS_BY_LETTERS = 4;
  const int CARD_IDENTIFICATION_LENGTH = 5;
  
  char cards[NUMBER_OF_LETTERS][NUMBER_OF_CARDS_BY_LETTERS][CARD_IDENTIFICATION_LENGTH];

  for (int i = 0; i < NUMBER_OF_LETTERS; i++) {
    for (int j = 0; j < NUMBER_OF_CARDS_BY_LETTERS; j++) {
      printf("Digite %dº carta do %dº pais: ", j + 1, i + 1);
      scanf("%s", cards[i][j]);
    }
  }

  for (int i = 0; i < NUMBER_OF_LETTERS; i++) {
    for (int j = 0; j < NUMBER_OF_CARDS_BY_LETTERS; j++) {
      printf("\nCarta %dº carta do %dº pais: %s", j + 1, i + 1, cards[i][j]);
    }
  }


  return 0;
} 
