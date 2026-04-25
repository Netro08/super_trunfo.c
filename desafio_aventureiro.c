#include <stdio.h>


int main(){

int codigodacarta1, codigodacarta2, populacao1, populacao2, pontoturistico1, pontoturistico2;
char estado1 [50];
char estado2 [40];
char cidade1 [50];
char cidade2 [40];
float area1, area2, pib1, pib2, densidade1, densidade2, pibc1, pibc2; 

//número 1


printf("Digite seu Estado1 : \n");
scanf("%s", &estado1);

printf("Digite seu Código1: \n");
scanf("%d", &codigodacarta1);

printf("Digite o Nome da Cidade1 : \n");
scanf("%s", &cidade1);

printf("Digite sua População1 : \n");
scanf("%d", &populacao1);

printf("Digite sua Area1 : \n");
scanf("%f", &area1);

printf("Digite seu PIB1 : \n");
scanf("%f", &pib1);

printf("Digite a Quantidade de Pontos Turisticos1: \n");
scanf("%d", &pontoturistico1);

//número 2

printf("Digite seu Estado2 : \n");
scanf("%s", &estado2);

printf("Digite seu Código2 : \n");
scanf("%d", &codigodacarta2);

printf("Digite o Nome da Cidade2 : \n");
scanf("%s", &cidade2);

printf("Digite sua População2 : \n");
scanf("%d", &populacao2);

printf("Digite sua Area2 : \n");
scanf("%f", &area2);

printf("Digite seu PIB2 : \n");
scanf("%f", &pib2);

printf("Digite a Quantidade de Pontos Turisticos2: \n");
scanf("%d", &pontoturistico2);

densidade1 = (populacao1 / area1);
printf("A densidade populacional é : %f\n", densidade1);

densidade2 = (populacao2 / area2);
printf("A densidade populacional2 é : %f\n", densidade2);

pibc1 = (pib1 / populacao1);
printf("O pib per capita é: %f\n", pibc1);

pibc2 = (pib2 / populacao1);
printf("O pib per capita2 é : %f\n", pibc2);












    return 0;
}