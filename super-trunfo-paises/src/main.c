#include <stdio.h>
#include "cartas.h"

int main() {
    int num_cidades;
    
    printf("Bem-vindo ao jogo Super Trunfo - Países!\n");
    printf("Quantas cidades você deseja cadastrar? ");
    scanf("%d", &num_cidades);
    
    Cidade cidades[num_cidades];
    
    for (int i = 0; i < num_cidades; i++) {
        printf("\nCadastro da cidade %d:\n", i + 1);
        cadastrarCidade(&cidades[i]);
    }
    
    printf("\nCidades cadastradas:\n");
    exibirCidades(cidades, num_cidades);
    
    return 0;
}