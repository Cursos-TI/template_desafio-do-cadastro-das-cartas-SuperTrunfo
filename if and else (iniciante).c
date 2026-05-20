#include   <stdio.h>

int main() {
   float temperatura, umidade;
   unsigned int estoque, estoqueminimo = 1000;


   printf("Digite a temperatura: \n");
   scanf("%f", &temperatura);

   printf("Digite a umidade: \n");
   scanf("%f", &umidade);

    printf("Digite o estoque: \n"); 
    scanf("%u", &estoque);

    if( temperatura > 30){
        printf ("temperatura está alta!!!\n");
    } else {printf ("temperatura está nos parâmetros\n");}

        if(umidade > 50) {
        printf ("umidade está muito alta!!!!\n");

    } else { printf("umidade está nos parâmetros\n");}

    if (estoque < estoqueminimo){
    printf("estoque abaixo do minimo!");
} else{
    printf ("estoque está okay");}


}
    return0;



