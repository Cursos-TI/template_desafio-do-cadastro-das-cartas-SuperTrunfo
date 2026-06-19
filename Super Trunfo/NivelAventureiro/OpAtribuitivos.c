//Operadoradores de atribuição//
#include <stdio.h>
int main(){
    /*
    Atribuição Simples (=)
    Atribuição de Adição (+=)
    Atribuição de Subtração (-=)
    Atribuição de Multiplicação (*=)
    Atribuição de Divisão (/=)
    */

    int Numero1=10, Numero2,Resultado;

    Resultado = 10; //Atribuição Simples
    printf("Resultado: %d\n", Resultado);

    //Resultado = Resultado + 20
    Resultado += 20; //Atribuição de Adição
    printf("Resultado: %d\n", Resultado);

    //Resultado = Resultado - Numero 1;
    Resultado -= Numero1; //Atribuição de Subtração
    printf("Resultado: %d\n", Resultado);

    //Resultado = Resultado * 6;
      Resultado *= 5; //Atribuição de Multiplicação
    printf("Resultado: %d\n", Resultado);

//Resultado = Resultado / 2;
    Resultado /= 2; //Atribuição de Divisão
    printf("Resultado: %d\n", Resultado);
}

