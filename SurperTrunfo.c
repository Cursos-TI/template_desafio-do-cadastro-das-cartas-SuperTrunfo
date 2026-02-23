#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

 char ProxFase;
 char EstadoC1; char EstadoC2;
 char CodCartaC1 [4]; char CodCartaC2 [4];
 char NomeCidadeC1 [50]; char NomeCidadeC2 [50];
 float PopulacaoC1; float PopulacaoC2;
 float AreaC1; float AreaC2;
 float PIBc1; float PIBc2;
 int PontosTuristicosC1; int PontosTuristicosC2;;
 
 // Área para entrada de dados

    //Mensagem de Casdastro
    printf ("               Cadastro de Cartas              \n");
    printf ("                                               \n");

//Armazenamento dos Dados (Carta 1)
printf ("Carta 1, Digite as informações de sua Cidade:\n");
printf ("                                             \n");

    printf ("Estado (A - H): ");
     scanf (" %c", &EstadoC1);

    printf ("Código da Carta (Letra do Estado seguida de um numero de '01' a '04'): ");
     scanf ("%4s", CodCartaC1);

    printf ("Nome da Cidade (Ultilizar simbolos em vez da tecla 'Espaço'): ");
     scanf ("%49s", NomeCidadeC1);
     
    printf ("População: ");
     scanf ("%f", &PopulacaoC1);

    printf ("Área (em km²): ");
     scanf ("%f", &AreaC1);

    printf ("Valor do PIB: ");
     scanf ("%f", &PIBc1);

    printf ("Número de Pontos Turísticos: ");
     scanf ("%d", &PontosTuristicosC1);

    //Tela de "carregamento" para proxima fase
printf ("                                                             \n");
printf ("               Carta 1 cadastrada com sucesso!               \n");
printf ("                 (Escreva 'S' para continuar)                \n");
printf ("                                                             \n");
    scanf (" %c", &ProxFase);


//Armazenamento dos Dados (Carta 2)
printf ("                                             \n");
printf ("Carta 2, Digite as informações de sua Cidade:\n");
printf ("                                             \n");

    printf("Estado (A - H): ");
     scanf(" %c", &EstadoC2);

    printf ("Código da Carta (Letra do Estado seguida de um numero de '01' a '04'): ");
     scanf ("%4s", CodCartaC2);

    printf ("Nome da Cidade (Ultilizar simbolos em vez da tecla 'Espaço'): ");
     scanf ("%49s", NomeCidadeC2);
     
    printf ("População: ");
     scanf ("%f", &PopulacaoC2);

    printf ("Área (em km²): ");
     scanf ("%f", &AreaC2);

    printf ("Valor do PIB: ");
     scanf ("%f", &PIBc2);

    printf ("Número de Pontos Turísticos: ");
     scanf ("%d", &PontosTuristicosC2);

    //Tela de "carregamento" para proxima fase
printf ("                                                             \n");
printf ("               Carta 2 cadastrada com sucesso!               \n");
printf ("                 (Escreva 'S' para continuar)                \n");
printf ("                                                             \n");
    scanf (" %c", &ProxFase);
printf ("                                                             \n");

  // Área para exibição dos dados da cidade

    //Exibição da Carta 1
printf ("                                                             \n");
printf ("=======================================\n");
printf ("               CARTA 1\n");
    printf ("  Estado: %c \n", EstadoC1);
    printf ("  Código: %3s \n", CodCartaC1);
    printf ("  Nome da Cidade: %s \n", NomeCidadeC1);
    printf ("  População: %.2f \n", PopulacaoC1);
    printf ("  Área: %.2f km²\n", AreaC1);
    printf ("  PIB: %.2f bilhões de reais\n", PIBc1);
    printf ("  Pontos Turísticos: %d\n", PontosTuristicosC1);
printf ("=======================================\n");
printf ("                                                             \n");

        //Exibição da Carta 2
printf ("=======================================\n");
printf ("               CARTA 2\n");
    printf ("  Estado: %c \n", EstadoC2);
    printf ("  Código: %3s \n", CodCartaC2);
    printf ("  Nome da Cidade: %s \n", NomeCidadeC2);
    printf ("  População: %.2f \n", PopulacaoC2);
    printf ("  Área: %.2f km²\n", AreaC2);
    printf ("  PIB: %.2f bilhões de reais\n", PIBc2);
    printf ("  Pontos Turísticos: %d\n", PontosTuristicosC2);
printf ("=======================================\n");
printf ("                                                             \n");



return 0;
} 
