#include <stdio.h>
#include <string.h>

// teste de descrição no github


int main()
{
    /*
        int idade;                 %d
        int quantidade = 10;       %d
        float peso = 50.0;         %f
        float altura;             1.80; - %f
        double salario = 2400.00;  3000.50; - %lf
        char opcao;               %c
        char nome[30];             %s - string
        */

    // scanf("%d" , &idade)
    // scanf("%s", nome) -- string nao precisa so &
    // printf("Sua idade é: %d anos \n e sua quantidade %d\n", idade, quantidade);
    // fgets(nome, sizeof(nome), stdin); -- fazer a leitura de 2 nomes ou mais
    // scanf(" "); -- Esse scanf com apenas um espaço em branco dentro das aspas diz para o computador: "Engula qualquer espaço ou Enter que estiver mofando no buffer do teclado agora".
    //  getchar(); limpa o lixo de memória no buffer do teclado, para poder usar o fgets

    // carta 1
    char estado1[3];
    char codigocarta1[10];
    char nomecidade1[20];
    int populacao1;
    float area1;
    float bip1;
    int numeropturisticos1;

    // carta 2
    char estado2[3];
    char codigocarta2[10];
    char nomecidade2[20];
    int populacao2;
    float area2;
    float bip2;
    int numeropturisticos2;

    printf("========== CADASTRO DE CARTAS ==========\n");

    // perguntas carta 1
    
    printf("\n---------- CARTA 1 ----------\n");

    // perguntas carta 1

    printf("Estado: ");
    scanf("%s", &estado1);

    printf("Codigo da Carta: ");
    scanf("%s", &codigocarta1);

    getchar(); // limpa o lixo de memória no buffer do teclado, para poder usar o fgets

    printf("Nome da Cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin); // Usa o fgets para garantir a leitura de nomes compostos (ex: "Rio de Janeiro")
    nomecidade1[strcspn(nomecidade1, "\n")] = '\0'; // Troca o "Enter" (\n) que o fgets captura por nulo (\0), Isso evita que o resultado quebre para a linha de baixo na hora de imprimir.

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("BIP: ");
    scanf("%f", &bip1);

    printf("Numero de Ponto Turisticos: ");
    scanf("%d", &numeropturisticos1);

    getchar();


    // perguntas carta 2



    printf("\n---------- CARTA 2 ----------\n");

    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Codigo da Carta: ");
    scanf("%s", &codigocarta2);

    getchar(); // limpa o lixo de memória no buffer do teclado, para poder usar o fgets

    printf("Nome da Cidade: ");
    fgets(nomecidade2, sizeof(nomecidade2), stdin); // Usa o fgets para garantir a leitura de nomes compostos (ex: "Rio de Janeiro")
    nomecidade2[strcspn(nomecidade2, "\n")] = '\0'; // Troca o "Enter" (\n) que o fgets captura por nulo (\0), Isso evita que o resultado quebre para a linha de baixo na hora de imprimir.

 
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("BIP: ");
    scanf("%f", &bip2);

    printf("Numero de Ponto Turisticos: ");
    scanf("%d", &numeropturisticos2);

   

    // respostas

    // carta 1

    printf("\n===== CARTA 1 CADASTRADA =====\n");
    
    printf("\nEstado: %s ", estado1);

    printf("\nCodigo: %s", codigocarta1);

    printf("\nNome da Cidade: %s", nomecidade1);

    printf("\nPopulação: %d", populacao1);

    printf("\nÁrea: %.2f km²", area1);

    printf("\nBIP: %.2f bilhoes de reais", bip1);

    printf("\nNumero de Pontos Turisticos: %d", numeropturisticos1);


    // carta 2 

     printf("\n\n===== CARTA 2 CADASTRADA =====\n");
    
    printf("\nEstado: %s ", estado2);

    printf("\nCodigo: %s", codigocarta2);

    printf("\nNome da Cidade: %s", nomecidade2);

    printf("\nPopulação: %d", populacao2);

    printf("\nÁrea: %.2f km²", area2);

    printf("\nBIP: %.2f bilhoes de reais", bip2);

    printf("\nNumero de Pontos Turisticos: %d", numeropturisticos2);




    

    return 0;
}
