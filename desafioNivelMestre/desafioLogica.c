#include <stdio.h>

int main(){
    // Variáveis
    char pais1[30], pais2[30], nomeAtributo1[30], nomeAtributo2[30];
    int pontoTuristico1, pontoTuristico2, populacao1, populacao2, atributo1, atributo2, resultado1, resultado2, soma1, soma2;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    // Entrada de dados da Carta 1
    printf("\nCarta 1 \n");

    printf("Digite o nome do país: \n");
    scanf("%s", &pais1); 

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a área do país: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do país: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &pontoTuristico1);

    // Divisão com o uso de casting para não haver erros e perdas
    densidade1 = (float)populacao1 / area1;
   
    // Impressão dos dados da Carta 1
    printf("\n---CARTA 1---\n");
    printf("País: %s \n", pais1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2fkm² \n", area1);
    printf("PIB: %.2f reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico1);
    printf("Densidade Demográfica: %.2f \n", densidade1);
    printf("----------------------\n");

    // Entrada de dados da Carta 2
    printf("\nCarta 2 \n");

    printf("Digite o nome do país: \n");
    scanf("%s", &pais2);

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a área do país: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do país: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:  \n");
    scanf("%d", &pontoTuristico2);

    // Divisão com o uso de casting para não haver erros e perdas
    densidade2 = (float)populacao2 / area2;

    // Impressão dos dados da Carta 2
    printf("\n---CARTA 2---\n");
    printf("País: %s \n", pais2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontoTuristico2);
    printf("Densidade Demográfica: %.2f \n", densidade2);
    printf("----------------------\n");

    // Menu de opções para a escolha do primeiro atributo.
    printf("\n---COMPARAÇÃO DE ATRIBUTOS---\n");
    printf("Escolha um dos atributos:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite o número correspondente ao atributo: ");
    scanf("%d", &atributo1);

    // Uso do switch e operador ternário para a comparação e soma dos atributos
    switch (atributo1)
    {
    case 1:
        printf("Você escolheu o atributo População!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        nomeAtributo1[30] = "População";
        soma1 = populacao1;
        soma2 = populacao2;
        break;
    case 2:
        printf("Você escolheu o atributo Área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        nomeAtributo1[30] = "Área";
        soma1 = area1;
        soma2 = area2;
        break;
    case 3:
        printf("Você escolheu o atributo PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        nomeAtributo1[30] = "PIB";
        soma1 = pib1;
        soma2 = pib2;
        break;
    case 4:
        printf("Você escolheu o atributo Pontos Turísticos!\n");
        resultado1 = pontoTuristico1 > pontoTuristico2 ? 1 : 0;
        nomeAtributo1[30] = "Pontos Turísticos";
        soma1 = pontoTuristico1;
        soma2 = pontoTuristico2;
        break;
    case 5:
        printf("Você escolheu o atributo Densidade Demográfica!\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        nomeAtributo1[30] = "Densidade Demográfica";
        soma1 = densidade1;
        soma2 = densidade2;
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    // Menu de opções para a escolha do segundo atributo
    printf("\n---COMPARAÇÃO DE ATRIBUTOS---\n");
    printf("Escolha um dos atributos:\n");
    printf("ATENÇÃO! Escolha um atributo diferente do primeiro.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite o número correspondete ao atributo: ");
    scanf("%d", &atributo2);

    // Switch e operador ternário para a comparação e soma dos atributos
    if (atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (atributo2)
        {
        case 1:
            printf("Você escolheu o atributo População!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            nomeAtributo2[30] = "População";
            soma1 = soma1 + populacao1;
            soma2 = soma2 + populacao2;
            break;
        case 2:
            printf("Você escolheu o atributo Área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            nomeAtributo2[30] = "Área";
            soma1 = soma1 + area1;
            soma2 = soma2 + area2;
            break;
        case 3:
            printf("Você escolheu o atributo PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            nomeAtributo2[30] = "PIB";
            soma1 = soma1 + pib1;
            soma2 = soma2 + pib2;
            break;
        case 4:
            printf("Você escolheu o atributo Pontos Turísticos!\n");
            resultado2 = pontoTuristico1 > pontoTuristico2 ? 1 : 0;
            nomeAtributo2[30] = "Pontos Turísticos";
            soma1 = soma1 + pontoTuristico1;
            soma2 = soma2 + pontoTuristico2;
            break;
        case 5:
            printf("Você escolheu o atributo Densidade Demográfica!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            nomeAtributo2[30] = "Densidade Demográfica";
            soma1 = soma1 + densidade1;
            soma2 = soma2 + densidade2;
            break;
    
        default:
            printf("Opção inválida!\n");
            break;
     
        }
    }

    // Exibição dos resultados da comparação
    printf("\n---RESULTADO DA COMPARAÇÃO---\n");
    printf("%s X %s \n", pais1, pais2);
    printf("Atributos escolhidos: %s e %s \n", nomeAtributo1, nomeAtributo2);
    if (resultado1 && resultado2)
    {
        printf("Parabéns, a carta %s venceu!\n", pais1);
    } else if (resultado1 != resultado2){
        printf("Empatou!\n");
    } else {
        printf("Parabéns, a carta %s venceu!\n", pais2);
    }

    printf("\n---RESULTADO DA SOMA DOS ATRIBUTOS---\n");
    if (soma1 > soma2)
    {
        printf("Parabéns, a carta %s venceu a rodada!\n", pais1);
    } else if (soma1 == soma2){
        printf("Houve um empate!");
    } else {
        printf("Parabéns, a carta %s venceu a rodada!\n", pais2);
    }
    
    return 0;
}