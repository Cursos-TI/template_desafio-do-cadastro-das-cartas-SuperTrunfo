#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // CARTA 1
  char carta_1_estado;
  char carta_1_codigo[4];
  char carta_1_cidade[60];
  unsigned long int carta_1_populacao;
  float carta_1_area;
  float carta_1_pib;
  int carta_1_pontos_turisticos;
  float carta_1_densidade_populacional;
  float carta_1_pib_per_capita;
  long double carta_1_super_poder;

  // CARTA 2
  char carta_2_estado;
  char carta_2_codigo[4];
  char carta_2_cidade[60];
  unsigned long int carta_2_populacao;
  float carta_2_area;
  float carta_2_pib;
  int carta_2_pontos_turisticos;
  float carta_2_densidade_populacional;
  float carta_2_pib_per_capita;
  long double carta_2_super_poder;

  // ATRIBUTO ESCOLHIDO NO MENU
  int atributo_escolhido_1;
  int atributo_escolhido_2;

  // CONSTANTE PARA CONVERSÃO DE PIB DE BILHÕES DE REAIS PARA REAIS
  double PIB_BILHOES_TO_REAIS = 1000000000.0;

  // Área para entrada de dados
  printf("Carta 1: Digite a Letra do Estado A-H: ");
  scanf("%c", &carta_1_estado);

  printf("Carta 1: Digite o Código da Carta (Letra do estado + 2 digitos): ");
  scanf("%s", carta_1_codigo);

  // recupera o caractere \n deixado no buffer pelo scanf
  getchar();

  printf("Carta 1: Digite o Nome da Cidade: ");
  fgets(carta_1_cidade, 60, stdin);

  carta_1_cidade[strcspn(carta_1_cidade, "\n")] = 0;

  printf("Carta 1: Digite o Numero de habitantes: ");
  scanf("%lu", &carta_1_populacao);

  printf("Carta 1: Digite a Area da cidade em km quadrados: ");
  scanf("%f", &carta_1_area);

  printf("Carta 1: Digite o PIB da cidade: ");
  scanf("%f", &carta_1_pib);

  printf("Carta 1: Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &carta_1_pontos_turisticos);

  carta_1_densidade_populacional = ((float)carta_1_populacao) / carta_1_area;

  // converte o PIB em bilhoes de reais para reais depois divide pela população
  carta_1_pib_per_capita = carta_1_pib * PIB_BILHOES_TO_REAIS / (float)carta_1_populacao;

  carta_1_super_poder = carta_1_populacao + carta_1_area + carta_1_pib + carta_1_pontos_turisticos +
                        ((long double)1.0 / (long double)carta_1_densidade_populacional) + carta_1_pib_per_capita;

  getchar(); // recupera o caractere \n deixado no buffer

  printf("\n\n");
  printf("Carta 2: Digite a Letra do Estado A-H: ");
  scanf("%c", &carta_2_estado);

  printf("Carta 2: Digite o Código da Carta (Letra do estado + 2 digitos): ");
  scanf("%s", carta_2_codigo);

  // recupera o caractere \n deixado no buffer pelo scanf
  getchar();

  printf("Carta 2: Digite o Nome da Cidade: ");
  fgets(carta_2_cidade, 60, stdin);

  carta_2_cidade[strcspn(carta_2_cidade, "\n")] = 0;

  printf("Carta 2: Digite o Numero de habitantes: ");
  scanf("%lu", &carta_2_populacao);

  printf("Carta 2: Digite a Area da cidade em km quadrados: ");
  scanf("%f", &carta_2_area);

  printf("Carta 2: Digite o PIB da cidade: ");
  scanf("%f", &carta_2_pib);

  printf("Carta 2: Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &carta_2_pontos_turisticos);

  carta_2_densidade_populacional = ((float)carta_2_populacao) / carta_2_area;

  // converte o PIB em bilhoes de reais para reais depois divide pela população
  carta_2_pib_per_capita = carta_2_pib * PIB_BILHOES_TO_REAIS / (float)carta_2_populacao;

  carta_2_super_poder = carta_2_populacao + carta_2_area + carta_2_pib + carta_2_pontos_turisticos +
                        ((long double)1.0 / (long double)carta_2_densidade_populacional) + carta_2_pib_per_capita;

  // Área para exibição dos dados da cidade
  printf("\n\n");
  printf("Carta 1:\n");

  printf("Estado: %c\n", carta_1_estado);
  printf("Código: %s\n", carta_1_codigo);
  printf("Nome da Cidade: %s\n", carta_1_cidade);
  printf("População: %d\n", carta_1_populacao);
  printf("Área: %.2f km²\n", carta_1_area);
  printf("PIB: %.2f bilhões de reais\n", carta_1_pib);
  printf("Número de Pontos Turísticos: %d\n", carta_1_pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta_1_densidade_populacional);
  printf("PIB per Capita: %.2f reais\n", carta_1_pib_per_capita);
  printf("Super Poder: %.2Lf\n", carta_1_super_poder);

  printf("\n");
  printf("Carta 2:\n");

  printf("Estado: %c\n", carta_2_estado);
  printf("Código: %s\n", carta_2_codigo);
  printf("Nome da Cidade: %s\n", carta_2_cidade);
  printf("População: %d\n", carta_2_populacao);
  printf("Área: %.2f km²\n", carta_2_area);
  printf("PIB: %.2f bilhões de reais\n", carta_2_pib);
  printf("Número de Pontos Turísticos: %d\n", carta_2_pontos_turisticos);
  printf("Densidade Populacional: %.2f hab/km²\n", carta_2_densidade_populacional);
  printf("PIB per Capita: %.2f reais\n", carta_2_pib_per_capita);
  printf("Super Poder: %.2Lf\n", carta_2_super_poder);

  printf("\n\n");
  printf("Selecione o PRIMEIRO atributo para comparar:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Número de Pontos Turísticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per Capita\n");
  printf("Digite o número do atributo escolhido: ");
  scanf("%d", &atributo_escolhido_1);

  if (atributo_escolhido_1 < 1 || atributo_escolhido_1 > 6)
  {
    printf("Atributo inválido. Encerrando o programa.\n");
    return 1;
  }

  printf("\n\n");
  printf("Selecione o SEGUNDO atributo para comparar:\n");

  if (atributo_escolhido_1 != 1)
  {
    printf("1 - População\n");
  }

  if (atributo_escolhido_1 != 2)
  {
    printf("2 - Área\n");
  }

  if (atributo_escolhido_1 != 3)
  {
    printf("3 - PIB\n");
  }

  if (atributo_escolhido_1 != 4)
  {
    printf("4 - Número de Pontos Turísticos\n");
  }

  if (atributo_escolhido_1 != 5)
  {
    printf("5 - Densidade Populacional\n");
  }

  if (atributo_escolhido_1 != 6)
  {
    printf("6 - PIB per Capita\n");
  }

  printf("Digite o número do atributo escolhido: ");
  scanf("%d", &atributo_escolhido_2);

  if (atributo_escolhido_1 == atributo_escolhido_2)
  {
    printf("Atributos escolhidos são iguais. Encerrando o programa.\n");
    return 1;
  }

  printf("\n\n");

  float soma_atributos_carta_1 = 0.0;
  float soma_atributos_carta_2 = 0.0;

  switch (atributo_escolhido_1)
  {
  case 1:
    soma_atributos_carta_1 += (float)carta_1_populacao;
    soma_atributos_carta_2 += (float)carta_2_populacao;

    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("População: %u\n", carta_1_populacao);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("População: %u\n", carta_2_populacao);

    printf("Resultado: ");

    if (carta_1_populacao > carta_2_populacao)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_populacao < carta_2_populacao)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }

    break;
  case 2:
    soma_atributos_carta_1 += carta_1_area;
    soma_atributos_carta_2 += carta_2_area;
    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("Área: %u\n", carta_1_area);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("Área: %u\n", carta_2_area);

    printf("Resultado: ");
    if (carta_1_area > carta_2_area)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_area < carta_2_area)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  case 3:
    soma_atributos_carta_1 += carta_1_pib;
    soma_atributos_carta_2 += carta_2_pib;

    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("PIB: %.2f bilhões de reais\n", carta_1_pib);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("PIB: %.2f bilhões de reais\n", carta_2_pib);

    printf("Resultado: ");

    if (carta_1_pib > carta_2_pib)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_pib < carta_2_pib)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  case 4:
    soma_atributos_carta_1 += (float)carta_1_pontos_turisticos;
    soma_atributos_carta_2 += (float)carta_2_pontos_turisticos;

    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("Número de Pontos Turísticos: %d\n", carta_1_pontos_turisticos);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("Número de Pontos Turísticos: %d\n", carta_2_pontos_turisticos);

    printf("Resultado: ");

    if (carta_1_pontos_turisticos > carta_2_pontos_turisticos)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_pontos_turisticos < carta_2_pontos_turisticos)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 5:
    soma_atributos_carta_1 += carta_1_densidade_populacional;
    soma_atributos_carta_2 += carta_2_densidade_populacional;
    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("Densidade Populacional: %.2f hab/km²\n", carta_1_densidade_populacional);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("Densidade Populacional: %.2f hab/km²\n", carta_2_densidade_populacional);

    printf("Resultado: ");

    if (carta_1_densidade_populacional < carta_2_densidade_populacional)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_densidade_populacional > carta_2_densidade_populacional)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 6:
    soma_atributos_carta_1 += carta_1_pib_per_capita;
    soma_atributos_carta_2 += carta_2_pib_per_capita;

    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("PIB per Capita: %.2f reais\n", carta_1_pib_per_capita);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("PIB per Capita: %.2f reais\n", carta_2_pib_per_capita);

    printf("Resultado: ");
    if (carta_1_pib_per_capita > carta_2_pib_per_capita)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_pib_per_capita < carta_2_pib_per_capita)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  }

  switch (atributo_escolhido_2)
  {
  case 1:
    soma_atributos_carta_1 += (float)carta_1_populacao;
    soma_atributos_carta_2 += (float)carta_2_populacao;

    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("População: %u\n", carta_1_populacao);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("População: %u\n", carta_2_populacao);

    printf("Resultado: ");

    if (carta_1_populacao > carta_2_populacao)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_populacao < carta_2_populacao)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }

    break;
  case 2:
    soma_atributos_carta_1 += carta_1_area;
    soma_atributos_carta_2 += carta_2_area;
    
    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("Área: %u\n", carta_1_area);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("Área: %u\n", carta_2_area);

    printf("Resultado: ");
    if (carta_1_area > carta_2_area)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_area < carta_2_area)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  case 3:
    soma_atributos_carta_1 += carta_1_pib;
    soma_atributos_carta_2 += carta_2_pib;
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("PIB: %.2f bilhões de reais\n", carta_1_pib);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("PIB: %.2f bilhões de reais\n", carta_2_pib);

    printf("Resultado: ");

    if (carta_1_pib > carta_2_pib)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_pib < carta_2_pib)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  case 4:
    soma_atributos_carta_1 += (float)carta_1_pontos_turisticos;
    soma_atributos_carta_2 += (float)carta_2_pontos_turisticos;

    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("Número de Pontos Turísticos: %d\n", carta_1_pontos_turisticos);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("Número de Pontos Turísticos: %d\n", carta_2_pontos_turisticos);

    printf("Resultado: ");

    if (carta_1_pontos_turisticos > carta_2_pontos_turisticos)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_pontos_turisticos < carta_2_pontos_turisticos)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 5:
    soma_atributos_carta_1 += carta_1_densidade_populacional;
    soma_atributos_carta_2 += carta_2_densidade_populacional;

    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("Densidade Populacional: %.2f hab/km²\n", carta_1_densidade_populacional);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("Densidade Populacional: %.2f hab/km²\n", carta_2_densidade_populacional);

    printf("Resultado: ");

    if (carta_1_densidade_populacional < carta_2_densidade_populacional)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_densidade_populacional > carta_2_densidade_populacional)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;

  case 6:
    soma_atributos_carta_1 += carta_1_pib_per_capita;
    soma_atributos_carta_2 += carta_2_pib_per_capita;

    printf("------------------------------\n");
    printf("Carta 1 - %s (%c)\n", carta_1_cidade, carta_1_estado);
    printf("PIB per Capita: %.2f reais\n", carta_1_pib_per_capita);

    printf("Carta 2 - %s (%c)\n", carta_2_cidade, carta_2_estado);
    printf("PIB per Capita: %.2f reais\n", carta_2_pib_per_capita);

    printf("Resultado: ");
    if (carta_1_pib_per_capita > carta_2_pib_per_capita)
    {
      printf("Carta 1 venceu!\n");
    }
    else if (carta_1_pib_per_capita < carta_2_pib_per_capita)
    {
      printf("Carta 2 venceu!\n");
    }
    else
    {
      printf("Empate!\n");
    }
    break;
  }
  
  printf("\n\n===============================\n");
  printf("Carta 1 - Soma dos Atributos Escolhidos: %.2f\n", soma_atributos_carta_1);
  printf("Carta 2 - Soma dos Atributos Escolhidos: %.2f\n", soma_atributos_carta_2);

  printf("Resultado FINAL: ");
  if (soma_atributos_carta_1 > soma_atributos_carta_2)
  {
    printf("Carta 1 venceu!\n");
  }
  else if (soma_atributos_carta_1 < soma_atributos_carta_2)
  {
    printf("Carta 2 venceu!\n");
  } else {
    printf("Empate!\n");
  }

  return 0;
}
