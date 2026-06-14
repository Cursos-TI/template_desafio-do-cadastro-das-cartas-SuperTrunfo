//operadores aritméticos//

#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int Numero1, Numero2;
    int soma, subtracao, multiplicacao, divisao;
    printf("Entre com o primeiro número: \n");
    scanf("%d", &Numero1);
    printf("Entre com o segundo número: \n");
    scanf("%d", &Numero2);

//operação de soma
    soma = Numero1 + Numero2;

//operação de subtração
    subtracao = Numero1 - Numero2;

//operação de multiplicação
    multiplicacao = Numero1 * Numero2;

//operação de divisão
    divisao = Numero1 / Numero2;

printf("A soma dos números é: %d\n", soma);

printf("A subtração dos números é: %d\n", subtracao);

printf("A multiplicação dos números é: %d\n", multiplicacao);

printf("A divisão dos números é: %d\n", divisao);

return 0;
}