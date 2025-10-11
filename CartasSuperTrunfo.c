#include <stdio.h>

typedef struct {
  char nome [30];
  char capital [30];
  int populacao ;
  float area ;
} pais;
int main () {
  pais pais; 
  printf ("digite o nome do pais: ");
  scanf ("%s", pais.nome);

  printf ("digite a capital: ");
  scanf ("%s", pais.capital);

  printf ("digite a populaçao:");
  scanf ("%d", &pais.populacao);

  printf ("digite a area (km2):");
  scanf ("%f", &pais.area);

  //mostrando os dadoscadastrado

  printf ("n--- carta cadastradas ---\n");
  printf("pais: %s\n", pais.nome);
printf("capital: %s\n", pais.capital);
  printf ("populacao: %d\n",pais.populacao );
  printf ("area: %.2f km2\n",pais.area);


  return 0;
}
