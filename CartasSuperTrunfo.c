#include <stdio.h>

int main(){
    char estado [20];
    char codigo_carta [10];
    char nome_cidade [30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
    float pib_per_capita;

        printf("Digite o estado: \n");
        scanf("%s", &estado);

        printf("Digite o código da carta: \n");
        scanf("%s", &codigo_carta);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome_cidade);

        printf("Digite a população: \n");
        scanf("%d", &populacao);

        printf("Digite a área: \n");
        scanf("%f", &area);

        printf("Digite o PIB: \n");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos);

        printf("Sua carta 1 é: \n estado: %s \n Código da carta: %s \n Nome da cidade: %s \n", estado, codigo_carta, nome_cidade);
        printf("População: %d \n Área: %.2f \n PIB: %.2f \n Pontos turísticos: %d\n", populacao, area, pib, pontos_turisticos);
        densidade_demografica = populacao / area;
        pib_per_capita = pib / populacao;
        printf("Densidade demográfica: %.2f \n PIB per capita: %.2f\n", densidade_demografica, pib_per_capita);

        printf("\nDigite o estado: \n");
        scanf("%s", &estado);
        printf("Digite o código da carta: \n");
        scanf("%s", &codigo_carta);
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome_cidade);
        printf("Digite a população: \n");
        scanf("%d", &populacao);
        printf("Digite a área: \n");
        scanf("%f", &area);
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos);

        printf("Sua carta 2 é: \n estado: %s \n Código da carta: %s \n Nome da cidade: %s \n", estado, codigo_carta, nome_cidade);
        printf("População: %d \n Área: %.2f \n PIB: %.2f \n Pontos turísticos: %d\n", populacao, area, pib, pontos_turisticos);
        densidade_demografica = populacao / area;
        pib_per_capita = pib / populacao;
        printf("Densidade demográfica: %.2f \n PIB per capita: %.2f\n", densidade_demografica, pib_per_capita);

    return 0;

}