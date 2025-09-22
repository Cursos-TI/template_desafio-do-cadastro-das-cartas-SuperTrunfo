#include <stdio.h>
#include <stdlib.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //declaraçao de variaveis carta 1
char letras1, cidade1[30];
int numeros1, populacao1, tur1;
float kms1, pib1;

  //declaraçao de variaveis carta 2
char letras2, cidade2[30];  //declaraçao para carateres e strings
int numeros2, populacao2, tur2; //declaraçao de numeros inteiros sem vígula
float kms2, pib2; // declaraçao de numeros flutuantes com vírgula para casas decimais
  

// Área para entrada de dados

// primeira carta
printf("Desafio Super Trunfo - Países \n \n \n"); //introduçao do jogo seguido de 3 novas linhas para melhorar o aspecto
printf("tecle enter para continuar com o jogo"); //resolvi pesquisar e colocar o comando getchar para dar mais interaçao
getchar(); // Pausa para ver o texto e aguarda a entrada de uma tecla aleatoria para continuar
system("clear"); // Limpar a tela, o argumento system invoca comando ou programas do sistema operacional, comando "clear" pertence ao sistema operacional e varia conforme o sistema exemplo: no windows temos que usar o "cls" o que deixa o codigo menos portatil para outros ambientes
printf("Vamos cadastrar sua primeira carta \n");
//entrada dos dados da primeira carta
printf("Escolha uma letra de 'A' ate 'H': "); //comando printf usados para exibir dados na tela
scanf("%c",&letras1);
printf("Escolha um numero de '1' a '4': ");
scanf("%d",&numeros1);
printf("Digite o nome da cicade: ");
scanf("%s",cidade1);
printf("Digite a populacao: ");
scanf("%d",&populacao1);
printf("Digite a area total em km\u00B2:");
scanf("%f",&kms1);
printf("Digite o PIB aproximado da ciadade: ");
scanf("%f",&pib1);
printf("digite o numero aproximado de pontos turisticos: ");
scanf("%d",&tur1);
system("clear");

//segunda carta
printf("vamos cadastrar sua segunda carta \n \n \n");
getchar();
//entrada dos dados da segunda carta
printf("Escolha uma letra de 'A' ate 'H': ");
scanf("%c",&letras2);
printf("Escolha um numero de '1' a '4': ");
scanf("%d",&numeros2);
printf("Digite o nome da cicade: ");
scanf("%s",cidade2);
printf("Digite a populacao: ");
scanf("%d", &populacao2);
printf("Digite a area total em km\u00B2:");
scanf("%f",&kms2);
printf("Digite o PIB aproximado da ciadade: ");
scanf("%f",&pib2);
printf("digite o numero aproximado de pontos turisticos: ");
scanf("%d",&tur2);
system("clear");

  // Área para exibição dos dados da cidade

printf("Carta 1: \n""Estado: %c \n" "Código: %c%d \n" "Nome da cidade: %s \n" "População: %d \n" "Área: %.2f \n" "Pib: %.2f \n" "Numero de pontos turisticos: %d \n \n \n", 
  letras1,  letras1, numeros1, cidade1, populacao1, kms1, pib1, tur1);
printf("Carta 2: \n""Estado: %c \n" "Código: %c%d \n" "Nome da cidade: %s \n" "População: %d \n" "Área: %.2f \n" "Pib: %.2f \n" "Numero de pontos turisticos: %d \n \n \n", 
  letras2,  letras2, numeros2, cidade2, populacao2, kms2, pib2, tur2);
  /* aqui foi usado o comando printf para começar a exibir os resultados das leituras de dados anteriores
  seguindo a logica de sequencia começando pelo texto a ser exibido seguido do tipo de variavel "%d" seguido de 
  uma nova linha "\n" e no final declarando as variaveis de armazenamento, sempre seguindo a seuqncia em são escritas
  */
  // Área para entrada de dados

  // Área para exibição dos dados da cidade
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // o "return 0;" é utilizado para informar ao interpretador que o programa foi finalizado.
return 0; 
}
