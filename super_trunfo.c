#include <stdio.h>

int main(void)
{
    char estado1 = 'A';

    char codigoEstado1[4] = "A01";
    char nomeDaCidade1[20] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699280000000;
    int numeroPontoTuristicos1 = 50;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + densidade1 + pibPerCapita1;

    char estado2 = 'A';
    char codigoEstado2[4] = "B02";
    char nomeDaCidade2[20] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300500000000;
    int numeroPontoTuristicos2 = 30;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + densidade2 + pibPerCapita2;

    int entradaUsuario;

    // Tipo de opcoes que o usuario recebera em tela
    printf("Escolha a opcao desejada: Ex.: 1\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - Pib\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");

    // Recebe o input do usuario
    scanf("%d", &entradaUsuario);

    // Aqui validamos o input do usuario com um switch
    switch (entradaUsuario) {
        case 1:
            if (populacao1 > populacao2)
                printf("População: Carta 1 venceu (1)\n");
            else if (populacao1 < populacao2)
                printf("População: Carta 2 venceu (0)\n");
            else if (populacao1 == populacao2)
                printf("Empate");
            break;
        case 2:
            if (area1 > area2)
                printf("Área: Carta 1 venceu (1)\n");
            else if (area1 < area2)
                printf("Área: Carta 2 venceu (0)\n");
            else if (area1 == area2)
                printf("Empate");
            break;
        case 3:
            if (pib1 > pib2)
                printf("PIB: Carta 1 venceu (1)\n");
            else if (pib1 < pib2)
                printf("PIB: Carta 2 venceu (0)\n");
            else if (pib1 == pib2)
                printf("Empate");
            break;
        case 4:
            if (numeroPontoTuristicos1 > numeroPontoTuristicos2)
                printf("Pontos Turísticos: Carta 1 venceu (1)\n");
            else if (pib1 < pib2)
                printf("Pontos Turísticos: Carta 2 venceu (0)\n");
            else if (pib1 == pib2)
                printf("Empate");
            break;
        case 5:
            if (densidade1 < densidade2)
                printf("Densidade Populacional: Carta 1 venceu (1)\n");
            else if (densidade1 < densidade2)
                printf("Densidade Populacional: Carta 2 venceu (0)\n");
            else if (densidade1 == densidade2)
                printf("Empate");
            break;
        // Caso o usuario selecione uma opcao invalida, retorna uma mensagem
        // de input invalido
        default:
            printf("Opcao invalidar, saindo...\n");
            break;
    }

    return 0;
}
