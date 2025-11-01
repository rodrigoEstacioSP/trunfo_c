#include <stdio.h>

int main(void)
{
    char estado1 = 'A';

    char codigoEstado1[4] = "A01";
    char nomeDaCidade1[20] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int numeroPontoTuristicos1 = 50;

    char estado2 = 'A';

    char codigoEstado2[4] = {"B02"};
    char nomeDaCidade2[20] = {"Rio de Janeiro"};
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int numeroPontoTuristicos2 = 30;

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codido: %s\n", codigoEstado1);
    printf("Nome da cidade: %s\n", nomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos: %d\n\n", numeroPontoTuristicos1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codido: %s\n", codigoEstado2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n\n", numeroPontoTuristicos2);
}