#include <stdio.h>
int main() {
    //int a = 10;
    //int b = 3;
    //int soma = a + b;
    //int diferenca = a - b;
    //int produto = a * b;
    //int quociente = a / b;

    //printf("Soma: %d\n", soma);
    //printf("Diferença: %d\n", diferenca);
   // printf("Produto: %d\n", produto);
    //printf("Quociente: %d\n", quociente); //note que a divisão dde inteiros resulta em inteiro, ou seja, o resultado é truncado;

    //tipos de variáveis de pontos flutuantes//float e double

    //float x =5.5;
    //float y = 2.2;
    //float soma = x + y;
    //float diferenca = x - y;
    //float produto = x * y;
    //float quociente = x / y;//Divisão de ponto flutuante resulta em um número com casas decimais;

    //printf("Soma: %.2f\n", soma);
    //printf("Diferença: %.2f\n", diferenca);
    //printf("Produto: %.2f\n", produto);
    //printf("Quociente: %.2f\n", quociente);

    //coversão  de tipos

    //conversão implícita - Ocorre quando o compilador converte automaticamente um tipo de dado para outro durante a avaliação de uma expressão. Por exemplo, se você somar um inteiro e um número de ponto flutuante, o inteiro será convertido para ponto flutuante antes da operação ser realizada.

    //int a = 10;
    //float b = 3.5;
    //float resultado = a + b; //a é convertido para float antes da soma
    //printf("Resultado da soma: %.2f\n", resultado);

    //conversão explícita - Ocorre quando o programador força a conversão de um tipo de dado para outro usando um operador de cast. Por exemplo, se você quiser converter um número de ponto flutuante para um inteiro, você pode usar um cast para truncar as casas decimais.

    int a = 10;
    float b = 3;
    float quociente = (float)a / b; //a é convertido para float.
    printf("Resultado da divisão: %.2f\n", quociente);



    return 0;
}