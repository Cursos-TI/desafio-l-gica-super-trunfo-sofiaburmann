#include <stdio.h>

int main(){
    // Variáveis
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[30], cidade2[30];
    int pontoTuristico1, pontoTuristico2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibcapita1, pibcapita2;
    float superPoder1, superPoder2;

    // Entrada de dados da Carta 1
    printf("\nCarta 1 \n");

    printf("Digite a letra inicial do estado: \n");
    scanf(" %c", &estado1); // espaço antes do %c para o enter não ser cosiderado

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &pontoTuristico1);

    //Divisão com o uso de casting para não haver erros e perdas
    densidade1 = (float)populacao1 / area1;

    pibcapita1 = (float)pib1 / populacao1;

    // Impressão dos dados da Carta 1
    printf("\n---CARTA 1---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2fkm² \n", area1);
    printf("PIB: %.2f reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB por Capita: %-2f \n", pibcapita1);

    // Entrada de dados da Carta 2
    printf("\nCarta 2 \n");

    printf("Digite a letra inicial do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &pontoTuristico2);

    densidade2 = (float)populacao2 / area2;

    pibcapita2 = (float)pib2 / populacao2;

    // Impressão dos dados da Carta 2
    printf("\n---CARTA 2---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB por Capita: %.2f \n", pibcapita2);
    printf("----------------------\n");

    // Cáculo do Super Poder
    superPoder1 = (float) populacao1 + area1 + pib1 + pibcapita1 + (densidade1 / 1);
    superPoder2 = (float) populacao2 + area2 + pib2 + pibcapita2 + (densidade2 / 1); 
    
    // Comparação de atributo
    printf("Comparação de Cartas (Atributo: Pontos Turísiticos)\n");
    printf("Carta 1 - %s (%c): %d \n", cidade1, estado1, pontoTuristico1);
    printf("Carta 2 - %s (%c): %d \n", cidade2, estado2, pontoTuristico2);
    if (pontoTuristico1 > pontoTuristico2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}