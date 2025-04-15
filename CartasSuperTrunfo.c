#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas



int main() {
    char codigo[20];
    char cidade[20];
    int população;
    float area;
    float PIB;
    int turistico;

    //Variáveis da Cidade_2
    char codigo2[20];
    char cidade2[20];
    int população2;
    float area2;
    float PIB2;
    int turistico2;


    //Cadastro de Dados da cidade 1
    printf("Digite o código da Cidade:");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade:");
    scanf("%s", &cidade);

    printf("Digite a população dessa cidade:");
    scanf("%d", &população);

    printf("Digite a area em metros dessa cidade:");
    scanf("%f", &area);

    printf("Digite o PIB dessa cidade:");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos tem nessa cidade:");
    scanf("%d", &turistico);
     
    //resultados de cadastro da cidade 1
    printf("Segue Resultados da Cidade_1:\n");
     printf("Código da Cidade : %s |  Nome da Cidade : %s\n", codigo, cidade);
     printf("A população da Cidade : %d |  Area da Cidade: %f\n", população, area);
     printf("O PIB da cidade : %f |  Pontos Turísticos da Cidade : %d\n", PIB, turistico);  

    
    //Cadastro de Dados da cidade 2
    printf("Digite o código da Cidade:");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade:");
    scanf("%s", &cidade2);

    printf("Digite a população da Cidade:");
    scanf("%d", &população2);

    printf("Digite a area em metros dessa cidade:");
    scanf("%f", &area2);

    printf("Digite o PIB dessa cidade:");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turísticos tem nessa cidade:");
    scanf("%d", &turistico2);

    //Resultados de cadastro da cidade 2
    printf("Segue Resultados da Cidade_2:\n");
    printf("Código da Cidade : %s |  Nome da Cidade : %s\n", codigo2, cidade2);
    printf("A população da Cidade : %d |  Area da Cidade: %f\n", população2, area2);
    printf("O PIB da cidade : %f |  Pontos Turísticos da Cidade : %d\n", PIB2, turistico2);

    return 0;
}
