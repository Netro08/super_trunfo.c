#include <stdio.h>

int main(){

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    //numero1 = numero1 +1;
    //numero1 += 1;
    //Pos incremento:
    //resultado = numero;
    //numero ++;
    resultado = numero1++; 
    printf("Apos Pos-incremento - Numero 1: %d - Resultado: %d\n" , numero1, resultado);

    resultado = ++numero1; 
    printf("Apos Pre-incremento - Numero 1: %d - Resultado: %d\n" , numero1, resultado);

    resultado = numero1--;
    printf("Apos Pos-decremento - Numero 1: %d - Resultado: %d\n" , numero1, resultado);

    resultado = --numero1;
    printf("Apos Pre-decremento - Numero 1: %d - Resultado: %d\n" , numero1, resultado);

    numero1--;
    printf("Apos decremento: %d\n", numero1);
}