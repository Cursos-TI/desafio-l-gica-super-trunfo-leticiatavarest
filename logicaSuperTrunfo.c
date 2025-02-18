#include <stdio.h>

struct Carta {
    char cidade[50]; 
    char pais[50];  
    double populacao;
    double area, expectativa; 
    double PIB;
    double densidadePop;
    double PIBpercapita;
};

int main() {
    int opcao;
    struct Carta carta1, carta2;

    // Cadastro da carta 1
    printf("Carta 1 - Digite o Nome da sua Cidade: \n");
    scanf("%s", carta1.cidade);

    printf("Carta 1 - Digite o País: \n");
    scanf("%s", carta1.pais);

    printf("Carta 1 - Digite a quantidade de Habitantes: \n");
    scanf("%lf", &carta1.populacao);

    printf("Carta 1 - Digite a área: \n");
    scanf("%lf", &carta1.area);

    printf("Carta 1 - Digite a Expectativa de vida: \n");
    scanf("%lf", &carta1.expectativa);

    printf("Carta 1 - Digite o PIB: \n");
    scanf("%lf", &carta1.PIB); 

    // Cálculos da carta 1
    if (carta1.area > 0) {
        carta1.densidadePop = carta1.populacao / carta1.area; 
    } else {
        carta1.densidadePop = 0;
    }
    
    if (carta1.populacao > 0) {
        carta1.PIBpercapita = carta1.PIB / carta1.populacao; 
    } else {
        carta1.PIBpercapita = 0;
    }

    // Cadastro da carta 2
    printf("Carta 2 - Digite o Nome da sua Cidade: \n");
    scanf("%s", carta2.cidade);

    printf("Carta 2 - Digite o País: \n");
    scanf("%s", carta2.pais);

    printf("Carta 2 - Digite a quantidade de Habitantes: \n");
    scanf("%lf", &carta2.populacao);

    printf("Carta 2 - Digite a área: \n");
    scanf("%lf", &carta2.area);

    printf("Carta 2 - Digite a Expectativa de vida: \n");
    scanf("%lf", &carta2.expectativa);

    printf("Carta 2 - Digite o PIB: \n");
    scanf("%lf", &carta2.PIB); 

    // Cálculos da carta 2
    if (carta2.area > 0) {
        carta2.densidadePop = carta2.populacao / carta2.area; 
    } else {
        carta2.densidadePop = 0;
    }
    
    if (carta2.populacao > 0) {
        carta2.PIBpercapita = carta2.PIB / carta2.populacao; 
    } else {
        carta2.PIBpercapita = 0;
    }

    // Exibição dos dados
    printf("\nDADOS DA PRIMEIRA CARTA: ");
    printf("\nCidade: %s", carta1.cidade);
    printf("\nExpectativa de vida: %lf", carta1.expectativa);
    printf("\nPIB: %lf", carta1.PIB);
    printf("\nPopulação: %lf", carta1.populacao);
    printf("\nÁrea: %lf", carta1.area);
    printf("\nPaís: %s", carta1.pais);
    printf("\nDensidade Populacional: %lf", carta1.densidadePop);
    printf("\nPIB Per Capita: %lf", carta1.PIBpercapita); 

    printf("\n\nDADOS DA SEGUNDA CARTA: ");
    printf("\nCidade: %s", carta2.cidade);
    printf("\nExpectativa de vida: %lf", carta2.expectativa);
    printf("\nPIB: %lf", carta2.PIB);
    printf("\nPopulação: %lf", carta2.populacao);
    printf("\nÁrea: %lf", carta2.area);
    printf("\nPaís: %s", carta2.pais);
    printf("\nDensidade Populacional: %lf", carta2.densidadePop);
    printf("\nPIB Per Capita: %lf", carta2.PIBpercapita); 

    do {
        printf("\n\nMenu:\n");
        printf("1. Comparar Densidade Populacional\n");
        printf("2. Comparar PIB Per Capita\n");
        printf("0. Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                if (carta1.densidadePop > carta2.densidadePop) {
                    printf("Primeira carta vence na comparação de Densidade Populacional!\n");
                } else if (carta1.densidadePop < carta2.densidadePop) {
                    printf("Segunda carta vence na comparação de Densidade Populacional!\n");
                } else {
                    printf("Empate na comparação de Densidade Populacional!\n");
                }
                break;
            case 2:
                if (carta1.PIBpercapita > carta2.PIBpercapita) {
                    printf("Primeira carta vence na comparação de PIB Per Capita!\n");
                } else if (carta1.PIBpercapita < carta2.PIBpercapita) {
                    printf("Segunda carta vence na comparação de PIB Per Capita!\n");
                } else {
                    printf("Empate na comparação de PIB Per Capita!\n");
                }
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}