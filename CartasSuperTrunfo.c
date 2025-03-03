#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int Carta1, Carta2;
    char Estado;
    char Cod1[3], Cod2[3];
    char nome1[50], nome2[50];
    int PointT1, PointT2;
    float area1, area2;
    float  pop1, pop2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float PIBperCapita1, PIBperCapita2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o número da Carta, Ex: 1 \n");
    scanf("%d", &Carta1);
    scanf("%d", &Carta2);
    printf("Digite o Código da Cidade, Ex: A01 \n");
    scanf("%s", &Cod1);
    scanf("%s", &Cod2);
    printf("Digite o Nome de cada Cidade: \n");
    scanf("%s", &nome1);
    scanf("%s", &nome2);
    printf("Digite a área da Cidade %s, Ex: 123.456\n", nome1);
    scanf("%f", &area1);
    printf("Digite a área da Cidade %s, Ex: 123.456\n", nome2);
    scanf("%f", &area2);
    printf("Digite o número da População da Cidade %s Ex: 123456.78 \n", nome1);
    scanf("%f", &pop1);
    printf("Digite o número da População da Cidade %s Ex: 123456.78 \n", nome2);
    scanf("%f", &pop2);
    printf("Digite o valor do PIB da Cidade %s, Ex: 98456.12\n", nome1);
    scanf("%f", &PIB1);
    printf("Digite o valor do PIB da Cidade %s, Ex: 98456.12\n", nome2);
    scanf("%f", &PIB2);
    printf("Digite a quantidade de Pontos Turísticos da Cidade %s\n", nome1);
    scanf("%d", &PointT1);
    printf("Digite a quantidade de Pontos Turísticos da Cidade %s\n", nome2);
    scanf("%d", &PointT2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Cálculo da Densidade Populacional e PIB per Capita
    densidade1 = pop1 / area1;
    densidade2 = pop2 / area2;
    PIBperCapita1 = PIB1 / pop1;
    PIBperCapita2 = PIB2 / pop2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados da Carta 1:\n");
    printf("Número da Carta: %d\n", Carta1);
    printf("Código da Cidade: %s\n", Cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Área: %.2f Km²\n", area1);
    printf("População: %.2f\n", pop1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", PointT1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);

    printf("\nDados da Carta 2:\n");
    printf("Número da Carta: %d\n", Carta2);
    printf("Código da Cidade: %s\n", Cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Área: %.2f Km²\n", area2);
    printf("População: %.2f\n", pop2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PointT2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);

    return 0;
}
