#include <stdio.h>
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() { 
  //inicio
  //declaração das variaveis carta 1
  char estado1 [18];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  //declaração das variaveis carta 2
  char estado2 [18];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;


  // cadastro da carta 1
 printf ( "cadastro da carta 1\n");
 printf ("digite o estado(A-H):\n");

 scanf(" %s",estado1);
 printf ("digite a populacao:\n");
 scanf (" %d",&populacao1 );
 printf ("digite a area:\n");
 scanf (" %f", &area1);
 printf ("digite o pib:\n");
 scanf (" %f",&pib1);
 printf(" digite os pontos turisticos:\n");
 scanf (" %d",&pontosturisticos1);
  
 // cadastro da carta 2
 printf ( "cadastro da carta 2\n");
 printf ("digite o estado(A-H):\n");
 scanf(" %s",estado2);
 printf ("digite a populacao:\n");
 scanf (" %d",&populacao2);
 printf ("digite a area:\n");
 scanf (" %f",&area2);
 printf ("digite o pib:\n");
 scanf (" %f",&pib2);
 printf(" digite os pontos turisticos:\n");
scanf (" %d",&pontosturisticos2);

return 0;
} 

