
#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char Estado1;
    char Codigo1[4];
    char NomeCidade1[50];
    float Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float DensidadePopulacional1;
    float PIBperCapita1;

    // Declaração das variáveis para a Carta 2
    char Estado2;
    char Codigo2[4];
    char NomeCidade2[50];
    float Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float PIBperCapita2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &Estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", Codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", NomeCidade1); 

    printf("População: ");
    scanf("%f", &Populacao1);

    printf("Área (em km²): ");
    scanf("%f", &Area1);

    printf("PIB 1: ");
    scanf("%f", &Pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    printf("\n"); // Linha em branco

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &Estado2);

    printf("Código da carta (ex: B03): ");
    scanf("%s", Codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", NomeCidade2);

    printf("População: ");
    scanf("%f", &Populacao2);

    printf("Área (em km²): ");
    scanf("%f", &Area2);

    printf("PIB 2: ");
    scanf("%f", &Pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    printf("\n\n");

    // Exibição dos dados formatados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    
    DensidadePopulacional1 = (float)(Populacao1 / Area1);

    printf("A Densidade populacional 1 é: %f\n", DensidadePopulacional1);

    PIBperCapita1 = (float)(Pib1 / Populacao1);

    printf("O Pib per capita 1 é: %f\n", PIBperCapita1);

    printf("\n");

    // Exibição dos dados formatados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    
    DensidadePopulacional2 = (float)(Populacao2 / Area2);

    printf("A Densidade populacional 2 é: %f\n", DensidadePopulacional2);

    PIBperCapita2 = (float)(Pib2 / Populacao2);

    printf("O Pib per capita 2 é: %f\n", PIBperCapita2);

    return 0;
}
