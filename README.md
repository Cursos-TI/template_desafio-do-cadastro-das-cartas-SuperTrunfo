# Super Trunfo - Países (Nível Novato)

Este projeto implementa a parte inicial do jogo **Super Trunfo** com o tema "Países".  
No nível **Novato**, o programa permite **cadastrar cartas de cidades** e exibir suas propriedades.

## Funcionalidades
- Cadastro de cidades por **estado** (A a H) e número da cidade (1 a 4).  
- Cada cidade possui as propriedades:
  - Código da carta (ex: A01)  
  - Nome  
  - População  
  - Área (km²)  
  - PIB (bilhões)  
  - Número de pontos turísticos  
- Exibição de todas as cartas cadastradas.

## Como compilar e executar

1. Abra o terminal e navegue até a pasta do arquivo `logicaSuperTrunfo.c`.
2. Compile o código com o `gcc`:

```bash
gcc -o supertrunfo logicaSuperTrunfo.c
