#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Cod;
    char nome[50];
    int PointT, CodN;
    float area, populacao, PIB;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o Código de letra da Cidade, Ex: A \n");
    scanf("%c", &Cod);
    printf("Digite o Código de Número da Cidade, Ex: 01 \n");
    scanf("%d", &CodN);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome);
    printf("Digite a área da Cidade, Ex:\n");
    scanf("%f", &area);
    printf("Digite o número da População\n");
    scanf("%f", &populacao);
    printf("Digite o valor do PIB da Cidade\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de Pontos Turísticos da Cidade\n");
    scanf("%d", &PointT);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da Cidade: %c%d\n", Cod,CodN);
    printf("Nome da Cidade: %s\n", nome);
    printf("Área da Cidade: %.2f\n", area);
    printf("População da Cidade: %.2f\n", populacao);
    printf("PIB da Cidade: %.2f\n", PIB);
    printf("Números de Pontos Turísticos da Cidade: %d\n", PointT);

    return 0;
}
