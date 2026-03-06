#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    //Definição das variáveis para carta 1
    char Estado1;
    char codigodacarta1[20];
    char nomedacidade1[20];
    int populacao1;
    int pontosturisticos1;
    float areaemkm²1;
    float PIB1;

    //definição das variáveis para carta 2
    char Estado2;
    char codigodacarta2[20];
    char nomedacidade2[20];
    int populacao2;
    int pontosturisticos2;
    float areaemkm²2;
    float PIB2;
    
    //Cadastro da Carta 1:
    printf("Digite o nome do Estado: \n");
    scanf("%c", &Estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a área em km²: \n");
    scanf("%f", &areaemkm²1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    //Cadastro da carta 2
    printf("Digite o nome do Estado: \n");
    scanf("%c", &Estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a área em km²: \n");
    scanf("%f", &areaemkm²2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    // Exibição dos Dados da Carta 1:
    printf("\nCarta 1\n");
    printf("O nome do Estado é: %c\n", Estado1);
    printf("O código da carta 1 é: %s\n", codigodacarta1);
    printf("O nome da cidade é: %s\n", nomedacidade1);
    printf("A população é de %d milhões de habitantes\n", populacao1);
    printf("A cidade tem %d pontos turísticos\n",pontosturisticos1);
    printf("A cidade tem %.2f km²\n", areaemkm²1);
    printf("O valor do PIB é de R$ %f bilhões\n", PIB1);

    // Exibição dos Dados da Carta 2:
    printf("\nCarta 2\n");
    printf("O nome do Estado é: %c\n", Estado2);
    printf("O código da carta 2 é: %s\n", codigodacarta2);
    printf("O nome da cidade é: %s", nomedacidade2);
    printf("A população é de %d milhões de habitantes\n", populacao2);
    printf("A cidade tem %d pontos turísticos\n",pontosturisticos2);
    printf("A cidade tem %.2f km²\n", areaemkm²2);
    printf("O valor do PIB é de R$ %f bilhões\n", PIB2);

    return 0;
}




















