#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int turistico;

    //Variáveis da Cidade_2
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int turistico2;
    float densidade_populacional;
    float PIB_per_capita;
    float densidade_populacional2;
    float PIB_per_capita2;
    float soma_cidade1, soma_cidade2;

    //Cadastro de Dados da cidade 1
    printf("Digite o código da Cidade:");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade:");
    scanf("%s", &cidade);

    printf("Digite a população dessa cidade:");
    scanf("%d", &populacao);

    printf("Digite a area em metros dessa cidade:");
    scanf("%f", &area);

    printf("Digite o PIB dessa cidade:");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos tem nessa cidade:");
    scanf("%d", &turistico);
    
    //calculos da Densidade e PIB per capita da cidade 1
    densidade_populacional = (populacao / area); 
    PIB_per_capita = (PIB / populacao);

    //resultados de cadastro da cidade 1
    printf("***Segue Resultados da Cidade_1:***\n");
     printf("Código da Cidade : %s |  Nome da Cidade : %s\n", codigo, cidade);
     printf("A população da Cidade : %d |  Area da Cidade: %.2f\n", populacao, area);
     printf("O PIB da cidade : %.2f |  Pontos Turísticos da Cidade : %d\n", PIB, turistico);  
     printf("A densidade Populacional é: %.2f\n", densidade_populacional);
     printf("O PIB per Capita é: %.2f\n", PIB_per_capita);
    
    //Cadastro de Dados da cidade 2
    printf("Digite o código da Cidade:");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade:");
    scanf("%s", &cidade2);

    printf("Digite a população da Cidade:");
    scanf("%d", &populacao2);

    printf("Digite a area em metros dessa cidade:");
    scanf("%f", &area2);

    printf("Digite o PIB dessa cidade:");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turísticos tem nessa cidade:");
    scanf("%d", &turistico2);

    //calculos da Densidade e PIB per capita da cidade 2
    densidade_populacional2 = (float) (populacao2 / area2); 
    PIB_per_capita2 = (float) (PIB2 / populacao2);

    //Resultados de cadastro da cidade 2
    printf("***Segue Resultados da Cidade_2:***\n");
    printf("Código da Cidade : %s |  Nome da Cidade : %s\n", codigo2, cidade2);
    printf("A população da Cidade : %d |  Area da Cidade: %.2f\n", populacao2, area2);
    printf("O PIB da cidade : %.2f |  Pontos Turísticos da Cidade : %d\n", PIB2, turistico2);
    printf("A densidade Populacional é: %.2f\n", densidade_populacional2);
    printf("O PIB per Capita é: %.2f\n", PIB_per_capita2);

    // Calcula a soma de todos os atributos para cada cidade
    soma_cidade1 = populacao + area + PIB + turistico + densidade_populacional + PIB_per_capita;
    soma_cidade2 = populacao2 + area2 + PIB2 + turistico2 + densidade_populacional2 + PIB_per_capita2;

    // Comparação das somas
    printf("\n*** Comparação das Cartas ***\n");
    printf("Soma total da Cidade 1: %.2f\n", soma_cidade1);
    printf("Soma total da Cidade 2: %.2f\n", soma_cidade2);

    if(soma_cidade1 > soma_cidade2) {
        printf("A carta da Cidade 1 (%s) é mais forte que a da Cidade 2 (%s)\n", cidade, cidade2);
    } else if(soma_cidade2 > soma_cidade1) {
        printf("A carta da Cidade 2 (%s) é mais forte que a da Cidade 1 (%s)\n", cidade2, cidade);
    } else {
        printf("As cartas das cidades %s e %s têm força igual\n", cidade, cidade2);
    }

    return 0;
}