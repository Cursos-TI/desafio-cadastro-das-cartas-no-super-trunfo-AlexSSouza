#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Estado;
    char Cod[3];
    char nome[50];
    int PointT;
    double area;
    double  populacao;
    double PIB;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o Código de letra da Cidade, Ex: A01 \n");
    scanf("%s", &Cod);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome);
    printf("Digite a área da Cidade, Ex: 123.456\n");
    scanf("%lf", &area);
    printf("Digite o número da População Ex: 123456.78 \n");
    scanf("%lf", &populacao);
    printf("Digite o valor do PIB da Cidade, Ex: 98456.12\n");
    scanf("%lf", &PIB);
    printf("Digite a quantidade de Pontos Turísticos da Cidade\n");
    scanf("%d", &PointT);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da Cidade: %s\n", Cod);
    printf("Nome da Cidade: %s\n", nome);
    printf("Área da Cidade em Km: %.3lf\n", area);
    printf("População da Cidade: %.2lf\n", populacao);
    printf("PIB da Cidade: R$ %.2lf\n", PIB);
    printf("Números de Pontos Turísticos da Cidade: %d\n", PointT);

    return 0;
}
