    //modificadores permitem uma manipulção mais precisa de dados

    #include <stdio.h>

    int main (){

//unsigned - posso usa-lo tanto para inteiro quanto para char

//int numeroSinal = 3000000000; //Esse número excede o limite de um int normal
//int unsigned numeroSemSinal = 3000000000;
//printf ("Numero com Sinal: %d\n", numeroSinal);
//printf ("Numero sem Sinal: %u\n", numeroSemSinal);//

//long - usado quando necessário numeros inteiros grandes fora do alcance de int

//int NumeroNormal = 2147483647; //valor máximo de int
//long int NumeroGrande = 2147483647;
//printf ("Numero Regular (int): %d\n", NumeroNormal);
//printf ("Numero Grande (long int): %Id\n", NumeroGrande);
//NumeroGrande = 2147483648; //valor maior que o máximo de int
//printf ("Numero Grande Atualizado (long int): %ld\n", NumeroGrande);

//Double e Long Double
        //double NumeroPreciso = 3.141592653589793;
        //long double NumeroMuitoPreciso = 3.141592653589793238463;
        //printf("Número Preciso (double): %.15f\n", NumeroPreciso);
        //printf("Número Muito Preciso (long double): %.21Lf\n", NumeroMuitoPreciso);
        
        //utilização de tudo até aqui

        //unsigned long int NumeroGrandePositivo =  4000000000;
        //unsigned int NumeroPositivo = 4000000000;
        //long int NumeroGrande = 4000000000;
        //int Numero = 4000000000;
        //printf("Número Positivo Grande: %lu\n", NumeroGrandePositivo);
        //printf("Número Positivo: %u\n", NumeroPositivo);
        //printf("Número Grande: %ld\n", NumeroGrande);
        // printf("Número: %d\n", Numero);


//short - Usado quando se usa uma variável inteira e qu ocupe menos memória

//short int NumeroPequeno = 32767;//valor máximo de short int
//printf("Número Pequeno atualizado (short int): %d\n", NumeroPequeno);

//NumeroPequeno = 32768; //valor msior que o maximo do short int
//printf("Número Pequeno Atualizado (short int): %d\n", NumeroPequeno);
 
//signed - indica que a variável trabalha com valores positivos e negativos
return 0;
    }
    
























































