#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Teste Kauã de Sousa Ferreira

int main() {

    // Declaração de variáveis:
    char estado1, estado2;
    char codigo_carta1[10], cidade1[20], codigo_carta2[10], cidade2[20];
    int quantidade_populacao1, quantidade_pontos_turisticos1, quantidade_populacao2, quantidade_pontos_turisticos2;
    float area_cidade1, PIB1, area_cidade2, PIB2, densidade_populacao1, densidade_populacao2, PIB_perCapta1, PIB_perCapta2;

    // Criação da primeira carta:
    printf("Olá! Vamos iniciar a criação da sua primeira carta no Super Trunfo! \n");


    // Entrada de dados com 'printf' e saída de dados com 'scanf':
    printf("Escolha uma letra de A a H para seu estado: \n");
     scanf(" %c", &estado1);

    printf("Adicione um número de 01 a 04 após a letra do seu estado (Ex.: A01) \n");
     scanf("%s", codigo_carta1);

    printf("Escolha um nome para sua primeira cidade: \n");
     scanf("%s", cidade1);

    printf("Escolha o número de habitantes da cidade: \n");
     scanf("%d", &quantidade_populacao1);

    printf("Escolha a área da cidade (km²): \n");
     scanf("%f", &area_cidade1);

    printf("Escolha o Produto Interno Bruto da sua cidade (bilhões de reais): \n");
     scanf("%f", &PIB1);

    printf("Escolha a quantidade de pontos turísticos de sua cidade: \n");
     scanf("%d", &quantidade_pontos_turisticos1);


    // Cálculo da Densidade Populacional e PIB per capta da Carta 1:
    densidade_populacao1 = quantidade_populacao1 / area_cidade1;

    PIB_perCapta1 = PIB1 / quantidade_populacao1;


    // Criação da segunda carta:
    printf("Sua primeira carta está pronta! Vamos agora criar a segunda carta! \n");


    printf("Escolha uma letra de A a H para seu estado: \n");
     scanf(" %c", &estado2);

    printf("Adicione um número de 01 a 04 após a letra do seu estado (Ex.: B02) \n");
     scanf("%s", codigo_carta2);

    printf("Escolha um nome para sua segunda cidade: \n");
     scanf("%s", cidade2);

    printf("Escolha o número de habitantes da cidade: \n");
     scanf("%d", &quantidade_populacao2);

    printf("Escolha a área da cidade (km²): \n");
     scanf("%f", &area_cidade2);

    printf("Escolha o Produto Interno Bruto da sua cidade (bilhões de reais): \n");
     scanf("%f", &PIB2);

    printf("Escolha a quantidade de pontos turísticos de sua cidade: \n");
     scanf("%d", &quantidade_pontos_turisticos2);


    // Cálculo da Densidade Populacional e PIB per capta da Carta 2:
    densidade_populacao2 = quantidade_populacao2 / area_cidade2;

    PIB_perCapta2 = PIB2 / quantidade_populacao2;


    // Exibição das duas cartas:
    printf("Veja as duas cartas que você criou: \n");

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", quantidade_populacao1);
    printf("Área: %.2f km²\n", area_cidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacao1);
    printf("PIB per Capta: %.2f\n", PIB_perCapta1);

    //Linha em branco para separar as cartas
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", quantidade_populacao2);
    printf("Área: %.2f km²\n", area_cidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacao2);
    printf("PIB per Capta: %.2f\n", PIB_perCapta2);

    return 0;
}
