//Comparações e cadastros

#include <stdio.h>

int main (){

        //declarar variáveis Produto, u i estoque, double valor unitário, 
        //u i quantidade min
        char produtoA[30] = "Produto A";
        char produtoB[30] = "Produto B";

        unsigned int EstoqueA = 1000;
        unsigned int EstoqueB = 2000;
        
        float valorA = 10.50;
        float valorB = 20.40;

        unsigned int estoqueminimoA = 500;
        unsigned int estoqueminimoB = 2500;

        double valortotalA;
        double valortotalB;

        int ResultadoA, ResultadoB;

            //exibir as informações mínimas 
printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, EstoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitário é  R$ %.2f\n", produtoB, EstoqueB, valorB);

        //comparações com o valor minimo de estoque 
ResultadoA = EstoqueA > estoqueminimoA;
ResultadoB = EstoqueB > estoqueminimoB;


printf ("O produto %s tem estoque mínimo %d\n", produtoA, ResultadoA);
printf ("O produto %s tem estoque mínimo %d\n", produtoB, ResultadoB);

        //comparações entre os valores dos produtos
printf("O valor total de A é(R$ %.2f) maior que o total de B (R$ %.2f): %d\n",
        EstoqueA * valorA,
        EstoqueB * valorB,
        (EstoqueA * valorA ) > (EstoqueB * valorB));

return 0;
}