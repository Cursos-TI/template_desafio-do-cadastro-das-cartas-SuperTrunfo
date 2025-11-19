#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, nome_cidade1[30], estado2, nome_cidade2[30];
  int num_cod1, populacao1, pnt_turisticos1, num_cod2, populacao2, pnt_turisticos2, s_poder1, s_poder2;
  float area1, pib1, dens_pop1, pib_pessoa1, area2, pib2, dens_pop2, pib_pessoa2;

  // Área para entrada de dados
  printf("------  Inicializando Sistema: Cadastro de Cartas   ------\n\n");
  printf("Bem-vindo ao Jogo Super Trunfo Cidades.\nO mesmo consiste em uma batalha de atributos entre cidades registradas em cartas.\n");
  printf("Os atributos definidos analisados são:\n- População\n- Área\n- PIB\n- Número de pontos turísticos\n\nEntendida às regras, vamos ao Cadastro de Cartas.\n\n");
  printf("Vamos começar pelo código do estado. Os códigos são compostos por uma letra e um inteiro.\nOs estados se dividem em 8, listados alfabeticamente de A a H.\n Digite a letra do Estado: ");
  scanf("%c", &estado1);
  printf("Perfeito! Agora digite o inteiro. Escolha um número de 1 a 4: ");
  scanf("%d", &num_cod1);
  printf("Perfeito!\nO código da carta será: %c0%d.\nAgora precisamos do nome da cidade. Para escolher o nome da cidade peço que se atente a algumas regras:\n1- Não utilize espaços, prefira underlines\n2- Não pode passar de 20 caracteres\nQual o nome da cidade? ", estado1, num_cod1);
  scanf("%s", nome_cidade1);
  printf("Muito bem, estamos finalizando o cadastro. Agora preciso que me passe as informações solicitadas sobre %s. Segundo dados governamentais, qual a população registrada na cidade? ", nome_cidade1);
  scanf("%d", &populacao1);
  printf("E sua área em Km²? ");
  scanf("%f", &area1);
  printf("Qual o PIB de %s em Milhões de R$? ", nome_cidade1);
  scanf("%f", &pib1);
  printf("Qual a quantidade de pontos turísticos? ");
  scanf("%d", &pnt_turisticos1);
  getchar();
  dens_pop1 = populacao1 / area1;
  pib_pessoa1 = pib1 * 1000000 / populacao1;
  s_poder1 = populacao1+pnt_turisticos1+area1+pib1+dens_pop1+pib_pessoa1;

  // Cadastro da Segunda Carta
  printf("Agora vamos ao cadastro da segunda carta, portanto precisaremos seguir as mesmas regras estabelecidas anteriormente. Não se preocupe, no momento eu lhe lembro.\nVamos lá! Começando pelo código do estado. Os códigos são compostos por uma letra e um inteiro.\nOs estados se dividem em 8, listados alfabeticamente de A a H.\n Digite a letra do Estado: ");
  scanf("%c", &estado2);
  printf("Perfeito! Agora digite o inteiro. Escolha um número de 1 a 4: ");
  scanf("%d", &num_cod2);
  printf("Perfeito!\nO código da carta será: %c0%d.\nAgora precisamos do nome da cidade. Para escolher o nome da cidade peço que se atente a algumas regras:\n1- Não utilize espaços, prefira underlines\n2- Não pode passar de 20 caracteres\nQual o nome da cidade? ", estado2, num_cod2);
  scanf("%s", nome_cidade2);
  printf("Muito bem, estamos finalizando o cadastro. Agora preciso que me passe as informações solicitadas sobre %s. Segundo dados governamentais, qual a população registrada na cidade? ", nome_cidade2);
  scanf("%d", &populacao2);
  printf("E sua área em Km²? ");
  scanf("%f", &area2);
  printf("Qual o PIB de %s em Milhões de R$? ", nome_cidade2);
  scanf("%f", &pib2);
  printf("Qual a quantidade de pontos turísticos? ");
  scanf("%d", &pnt_turisticos2);
  dens_pop2 = populacao2 / area2;
  pib_pessoa2 = pib2 * 1000000 / populacao2;
  s_poder2 = populacao2+pnt_turisticos2+area2+pib2+dens_pop2+pib_pessoa2;

  // Área para exibição dos dados da cidade
  printf("Agora que possuimos todos os dados da carta, segue apresentação da Primeira Carta :-)\n\n");
  printf("------         %c0%d : %s         ------\n\n", estado1, num_cod1, nome_cidade1);
  printf("\tPopulação: %d\n\tPontos Turísticos: %d\n\tÁrea: %.2f km²\n\tPIB: R$ %.2f Milhões de Reais\n\tDensidade Populacional: %.2f Pessoas por Km²\n\tPIB per Capita: %.2f Reais por Pessoa\n", populacao1, pnt_turisticos1, area1, pib1, dens_pop1, pib_pessoa1);
  printf("\tSuperPoder: %d\n\n", s_poder1);
  printf("------         %c0%d : %s         ------\n\n", estado1, num_cod1, nome_cidade1);
  printf("Segue apresentação da Segunda Carta :-)\n\n");
  printf("------         %c0%d : %s         ------\n\n", estado2, num_cod2, nome_cidade2);
  printf("\tPopulação: %d\n\tPontos Turísticos: %d\n\tÁrea: %.2f km²\n\tPIB: R$ %.2f Milhões de Reais\n\tDensidade Populacional: %.2f Pessoas por Km²\n\tPIB per Capita: %.2f Reais por Pessoa\n", populacao2, pnt_turisticos2, area2, pib2, dens_pop2, pib_pessoa2);
  printf("\tSuperPoder: %d\n\n", s_poder2);
  printf("------         %c0%d : %s         ------\n\n", estado2, num_cod2, nome_cidade2);

  /* Início da comparação de cartas
  Como ainda não nos é permitido usar if-else, então trabalharemos com demonstração de resultados por 0 e 1
  */

  printf("------  Inicializando Sistema: Comparação de Cartas   ------\n\n");
  printf("Vamos dar início ao jogo! Para comparar as cartas vamos assumir 2 parâmetros:\nSe o resultado for 1 então %s foi a ganhadora. Se o resultado for 0 então %s foi a ganhadora.\nComparando item por item fica da seguinte forma:\n", nome_cidade1, nome_cidade2);
  printf("\tPopulação: %d\n", populacao1 > populacao2);
  printf("\tPontos Turísticos: %d\n", pnt_turisticos1>pnt_turisticos2);
  printf("\tÁrea: %d\n", area1>area2);
  printf("\tPIB: %d\n", pib1>pib2);
  printf("\tDensidade Populacional: %d\n", dens_pop1<dens_pop2);
  printf("\tPIB per Capita: %d\n", pib_pessoa1>pib_pessoa2);
  printf("\tSuperPoder: %d\n\n", s_poder1>s_poder2);
  printf("------  Fechando Sistema   ------\n\n");
  return 0;
  }
