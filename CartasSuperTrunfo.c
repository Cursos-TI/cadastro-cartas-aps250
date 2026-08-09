#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    char estado [20];
    char codigo_carta [10];
    char nome_cidade [30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

        printf("Digite o estado: \n");
        scanf("%s", estado);
        printf("Digite o código da carta: \n");
        scanf("%s", codigo_carta);
        printf("Digite o nome da cidade: \n");
        scanf("%s", nome_cidade);
        printf("Digite a população: \n");
        scanf("%d", &populacao);
        printf("Digite a área: \n");
        scanf("%f", &area);
        printf("Digite o PIB: \n");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos);

        printf("Sua carta 1 é: estado: %s - Código da carta: %s - Nome da cidade: %s \n", estado, codigo_carta, nome_cidade);
        printf("População: %d - Área: %.2f - PIB: %.2f - Pontos turísticos: %d", populacao, area, pib, pontos_turisticos);

        printf("\n\nDigite o estado: \n");
        scanf("%s", estado);
        printf("Digite o código da carta: \n");
        scanf("%s", codigo_carta);
        printf("Digite o nome da cidade: \n");
        scanf("%s", nome_cidade);
        printf("Digite a população: \n");
        scanf("%d", &populacao);
        printf("Digite a área: \n");
        scanf("%f", &area);
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos);

        printf("Sua carta 2 é: estado: %s - Código da carta: %s - Nome da cidade: %s \n", estado, codigo_carta, nome_cidade);
        printf("População: %d - Área: %.2f - PIB: %.2f - Pontos turísticos: %d", populacao, area, pib, pontos_turisticos);

return 0;
} 
