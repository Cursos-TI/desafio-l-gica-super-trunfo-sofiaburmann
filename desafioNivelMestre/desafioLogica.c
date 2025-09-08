#include <stdio.h>

int main(){
    // Variáveis
    char pais1[30], pais2[30];
    int pontoTuristico1, pontoTuristico2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibcapita1, pibcapita2;

    // Divisão com o uso de casting para não haver erros e perdas
    densidade1 = (float)populacao1 / area1;
    pibcapita1 = (float)pib1 / populacao1;
 
    densidade2 = (float)populacao2 / area2;
    pibcapita2 = (float)pib2 / populacao2;

    // Entrada de dados da Carta 1
    printf("\nCarta 1 \n");

    printf("Digite o nome do país: \n");
    scanf(" %c", &pais1); // espaço antes do %c para o enter não ser cosiderado

    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área do país: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do país: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &pontoTuristico1);
   
    // Impressão dos dados da Carta 1
    printf("\n---CARTA 1---\n");
    printf("País: %c\n", pais1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2fkm² \n", area1);
    printf("PIB: %.2f reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB por Capita: %-2f \n", pibcapita1);
    printf("----------------------\n");

    // Entrada de dados da Carta 2
    printf("\nCarta 2 \n");

    printf("Digite o nome do país: \n");
    scanf(" %c", &pais2);

    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área do país: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do país: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &pontoTuristico2);

    // Impressão dos dados da Carta 2
    printf("\n---CARTA 2---\n");
    printf("País: %c\n", pais2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB por Capita: %.2f \n", pibcapita2);
    printf("----------------------\n");

    // Comparação de atributo
    printf("Comparação de Cartas (Atributo: Pontos Turísiticos)\n");
    printf("Carta 1 - %s (%c): %d \n", pais1, pontoTuristico1);
    printf("Carta 2 - %s (%c): %d \n", pais2, pontoTuristico2);
    if (pontoTuristico1 > pontoTuristico2){
        printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
    }

    return 0;
}