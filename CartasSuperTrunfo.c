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
    char Cod1[3], Cod2[3];
    char nome1[50], nome2[50];
    int PointT1, PointT2;
    float area1, area2;
    float  pop1, pop2;
    float PIB1, PIB2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o Código de cada Cidade, Ex: A01 \n");
    scanf("%s", &Cod1);
    scanf("%s", &Cod2);
    printf("Digite o Nome de cada Cidade: \n");
    scanf("%s", &nome1);
    scanf("%s", &nome2);
    printf("Digite a área da Cidade %s, Ex: 123.456\n", nome1);
    scanf("%lf", &area1);
    printf("Digite a área da Cidade %s, Ex: 123.456\n", nome2);
    scanf("%lf", &area2);
    printf("Digite o número da População da Cidade %s Ex: 123456.78 \n", nome1);
    scanf("%lf", &pop1);
    printf("Digite o número da População da Cidade %s Ex: 123456.78 \n", nome2);
    scanf("%lf", &pop2);
    printf("Digite o valor do PIB da Cidade %s, Ex: 98456.12\n", nome1);
    scanf("%lf", &PIB1);
    printf("Digite o valor do PIB da Cidade %s, Ex: 98456.12\n", nome2);
    scanf("%lf", &PIB2);
    printf("Digite a quantidade de Pontos Turísticos da Cidade %s\n", nome1);
    scanf("%d", &PointT1);
    printf("Digite a quantidade de Pontos Turísticos da Cidade %s\n", nome2);
    scanf("%d", &PointT2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    if (area1 > area2)
    {
        printf("Cidade: %s tem maior população\n", nome1);
    }else
    {
        printf("Cidade: %s tem maior população\n", nome2);
    }
    if (pop1 > pop2)
    {
        printf("Cidade %s tem maior população: %lf\n", nome1,pop1);
    }else
    {
        printf("Cidade %s tem maior população: %lf\n", nome2,pop2);
    }
    if (PIB1 > PIB2)
    {
        printf("Cidade %s tem maior PIB: %lf\n", nome1,PIB1);
    }else
    {
        printf("Cidade %s tem maior PIB: %lf\n", nome2,PIB2);
    }
    if (PointT1 > PointT2)
    {
        printf("Cidade %s tem maior quantidade de Pontos Turísticos: %d \n", nome1,PointT1);
    }else
    {
        printf("Cidade %s Atem maior quantidade de Pontos Turísticos: %d \n", nome2,PointT2);
    }
    return 0;
}
