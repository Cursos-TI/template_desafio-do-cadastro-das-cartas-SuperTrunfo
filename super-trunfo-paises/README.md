# Super Trunfo - Países

Este projeto implementa uma versão do jogo "Super Trunfo" focada em cidades, permitindo o cadastro de cartas com informações relevantes sobre cada cidade.

## Estrutura do Projeto

O projeto é organizado da seguinte forma:

```
super-trunfo-paises
├── src
│   ├── main.c        # Ponto de entrada do programa
│   ├── cartas.c      # Implementação das funções de cadastro e manipulação das cartas
│   ├── cartas.h      # Cabeçalho com declarações de funções e estruturas
│   └── types
│       └── cidades.h # Definição da estrutura que representa uma cidade
├── Makefile          # Regras de compilação
└── README.md         # Documentação do projeto
```

## Compilação

Para compilar o projeto, utilize o comando:

```
make
```

Isso irá gerar um executável que pode ser executado.

## Execução

Após a compilação, execute o programa com o seguinte comando:

```
./super-trunfo-paises
```

## Funcionamento do Jogo

O jogo permite que o usuário cadastre cartas de cidades, onde cada carta contém as seguintes propriedades:

- População
- Área
- PIB (Produto Interno Bruto)
- Número de pontos turísticos

O usuário pode interagir com o programa para cadastrar novas cartas e visualizar as informações já cadastradas.

## Contribuição

Sinta-se à vontade para contribuir com melhorias ou correções. Para isso, faça um fork do repositório e envie suas alterações através de um pull request.