✅ README.md — Super Trunfo de Países (Desafio Avançado)
🃏 Sobre o Projeto

Este projeto é a evolução dos desafios anteriores do Super Trunfo. Agora, o jogador poderá escolher dois atributos diferentes para comparar duas cartas de países, com menus dinâmicos, lógica diferenciada para densidade populacional e desempate pela soma dos atributos.

O jogo exibe claramente quem venceu cada atributo e o resultado final da rodada.

📌 Atributos Disponíveis para Comparação
Código	Atributo	Regra
1	População	Maior vence
2	Área (km²)	Maior vence
3	PIB	Maior vence
4	Pontos Turísticos	Maior vence
5	Densidade Demográfica	Menor vence ✅

🖥️ Como Compilar
Você pode compilar com gcc:
gcc super_trunfo_avancado.c -o super_trunfo_avancado

▶️ Como Executar
Após compilar, execute o programa com:
./super_trunfo_avancado

🎮 Como Jogar

Cadastre as duas cartas preenchendo:
Nome do país
População
Área (km²)
PIB
Pontos turísticos

Escolha o primeiro atributo pelo menu (1–5)
Escolha o segundo atributo, agora sem repetir o primeiro
(menus dinâmicos)
O programa executa:
Comparação individual de cada atributo
Regra especial para densidade demográfica
Cálculo da soma dos dois atributos
Definição do vencedor ou empate

📌 Exemplo de uso do menu
===== MENU: Escolha o primeiro atributo =====
1 - Populacao
2 - Area (km2)
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
Opcao (1-5): 3


Se escolher 3 (PIB) primeiro, o próximo menu será:

===== MENU: Escolha o segundo atributo =====
1 - Populacao
2 - Area (km2)
3 - Pontos Turisticos
4 - Densidade Demografica
Opcao (1-4):

✅ Regras de Vitória

Para cada atributo escolhido:
Atributos normais → maior vence
Densidade populacional → menor vence
A soma dos dois atributos define o vencedor da rodada
Se a soma for igual → Empate!

🧱 Requisitos Atendidos

✔ Escolha de dois atributos diferentes
✔ Menus com switch e opções dinâmicas
✔ Operador ternário para exibição de vencedores
✔ Cálculo e comparação por soma
✔ Exibição detalhada e organizada do resultado
✔ Tratamento de entradas inválidas
✔ Código comentado e identado

✨ Autor(a)
Projeto acadêmico desenvolvido por Caroline Paim Muller para prática em programação estruturada em C do curso de Gestão da Tecnologia da Informação
