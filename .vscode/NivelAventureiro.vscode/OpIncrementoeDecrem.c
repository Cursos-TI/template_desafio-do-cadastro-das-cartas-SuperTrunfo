//Operadores Incremento e Decremento
#include <stdio.h>  
int main() {
/*
Incremento (++)
Pré Incremento ++a
Pós Incremento a++
Decremento (--)
Pré Decremento --a
Pós Decremento a--
*/
int numero1 = 1, resultado;

// Incremento - O operador de incremento (++) é usado para aumentar o valor de uma variável em 1. Ele pode ser usado tanto na forma pré-incremento (++a) quanto na forma pós-incremento (a++). A diferença entre os dois é a ordem de avaliação. No pré-incremento, a variável é incrementada antes de ser usada na expressão, enquanto no pós-incremento, a variável é usada na expressão antes de ser incrementada;

printf("Antes do incremento: %d\n", numero1);
    //numero1 = numero1 + 1;
    //numero1 += 1;
resultado = numero1++;
//printf("Após o incremento: %d\n", numero1);
printf("Após Pós-incremento - numero1: %d - resultado: %d\n", numero1, resultado);
resultado = ++numero1;
printf("Após Pré-incremento - numero1: %d - resultado: %d\n", numero1, resultado);

//decremento - O operador de decremento (--) é usado para diminuir o valor de uma variável em 1. Assim como o incremento, ele pode ser usado tanto na forma pré-decremento (--a) quanto na forma pós-decremento (a--). A diferença entre os dois é a ordem de avaliação. No pré-decremento, a variável é decrementada antes de ser usada na expressão, enquanto no pós-decremento, a variável é usada na expressão antes de ser decrementada.

printf("Antes do decremento: %d\n", numero1);
    //numero1 = numero1 - 1;
    //numero1 -= 1;
resultado = numero1--;
//printf("Após o decremento: %d\n", numero1);
printf("Após Pós-decremento - numero1: %d - resultado: %d\n", numero1, resultado);
resultado = --numero1;
printf("Após Pré-decremento - numero1: %d - resultado: %d\n", numero1, resultado);

}