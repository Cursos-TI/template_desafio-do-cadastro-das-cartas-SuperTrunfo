#include <stdio.h>

int main(){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float

    printf("O resultado da soma é: %.2f\n", resultado);

    return 0;
}   
 