#include <stdio.h>

int main() {

    int numeroSinal = 3000000000;  // Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;


    int numeroNormal = 2147483647; //Valor máximo de int
    long int numeroGrande = 2147483647;

    double numeroPreciso = 3.141568465556874;
    double numeroMuitoPreciso = 3.125647896513248791264;

    short int numeroPequeno = 32767;  // Valor máximo de short int
    printf("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; //Valor maoir que o máximo de short int
    printf("Numero pequeno atualizado (short int): %d\n", numeroPequeno);



    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21lf\n", numeroMuitoPreciso);


    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

printf("Número regular (int): %d\n", numeroNormal);
printf("Número grande (long int): %ld\n", numeroGrande);

numeroGrande = 2147483648;  //Valor maior do int
printf("Número grande atualizado (long int): %lld\n", numeroGrande);



    return 0;
}