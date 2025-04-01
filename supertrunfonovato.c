// super trunfo jogo de cartas
#include <stdio.h>

int main() {


char carta1;

char codigo_da_cidade[4] = "A01";

char  cidade[20] = "São Paulo";


int populacao = 12325000 ;

float area_em_km2 = 1521.11;

float PIB = 699.28; // bilhoes

printf("codigo da cidade: %s\n", codigo_da_cidade);
printf("cidade: %s\n", cidade);
    printf("populacao: %d\n", populacao);
    printf("area em km2: %.2f\n", area_em_km2);
    printf("PIB: %.2f\n", PIB);
    printf("carta: %c\n2", carta1);


    
    char carta2;
    char codigo_da_cidade2[4] = "A02";
    char cidade2[20] = "rio de janeiro";
    int populacao2 = 6748000;
    float area_em_km22 = 1200.25;
    float PIB2 = 300.5 ; // bilhoes

    printf("codigo da cidade: %s\n", codigo_da_cidade2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area em km2: %.2f\n", area_em_km22);
    printf("PIB: %.2f\n", PIB2);
    printf("carta: %c\n", carta2);
}