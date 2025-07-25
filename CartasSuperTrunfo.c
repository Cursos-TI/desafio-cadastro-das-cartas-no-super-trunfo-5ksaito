#include <stdio.h>

int main() {
    // Variáveis separadas para cada atributo da cidade.
    char codigo[20], estado[20], nomecidade[50];
    char codigo2[20], estado2[20], nomecidade2[50];
    long int populacao, populacao2; // Alterado para long int para acomodar grandes populações
    int nmrturisticos, nmrturisticos2;
    float pib, areakm, densidade, pibpc;
    float pib2, areakm2, densidade2, pibpc2;

    // Cadastro da Carta 1:

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Código Cidade: ");
    scanf("%s", codigo);

    printf("Nome do Estado: ");
    scanf(" %49[^\n]", estado); // Correção para ler nomes com espaços

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomecidade); // Correção para ler nomes com espaços

    printf("População: ");
    scanf("%ld", &populacao); // Uso de %ld para long int

    printf("Números turisticos: ");
    scanf("%d", &nmrturisticos);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Área em Km²: ");
    scanf("%f", &areakm);

    // Verificação de divisão por zero e cálculo do PIB per Capita
    if (populacao != 0) {
        // Multiplicando por 1 bilhão para calcular o PIB per capita em reais
        pibpc = (pib * 1000000000.0f) / populacao;
    } else {
        pibpc = 0.0f;
        printf("⚠️ Atenção: População da Carta 1 é zero! PIB per Capita definido como 0.\n");
    }

    // Verificação de divisão por zero e cálculo da Densidade
    if (areakm != 0.0f) {
        densidade = (float)populacao / areakm;
    } else {
        densidade = 0.0f;
        printf("⚠️ Atenção: Área da Carta 1 é zero! Densidade Populacional definida como 0.\n");
    }

    // Saída dos dados da Carta 1

    printf("\n---------- Carta 1 ----------\n");
    printf("|Código: %s\n", codigo);
    printf("|Estado: %s\n", estado);
    printf("|Cidade: %s\n", nomecidade);
    printf("|População: %ld\n", populacao);
    printf("|Número de Pontos Turísticos: %d\n", nmrturisticos);
    printf("|PIB: %.2f bilhões\n", pib);
    printf("|Área em Km²: %.2f\n", areakm);
    printf("|Densidade populacional: %.2f\n", densidade);
    printf("|PIB per Capita: R$ %.2f\n", pibpc);
    printf("-----------------------------\n");
    
    // ---

    // Cadastro da Carta 2:

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Código Cidade 2: ");
    scanf(" %s", codigo2); // Espaço antes de %s para consumir nova linha pendente

    printf("Nome do Estado: ");
    scanf(" %49[^\n]", estado2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomecidade2);

    printf("População: ");
    scanf("%ld", &populacao2);

    printf("Números turisticos: ");
    scanf("%d", &nmrturisticos2);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Área em Km²: ");
    scanf("%f", &areakm2);
    
    // Verificação de divisão por zero e cálculo do PIB per Capita da Carta 2
    if (populacao2 != 0) {
        pibpc2 = (pib2 * 1000000000.0f) / populacao2;
    } else {
        pibpc2 = 0.0f;
        printf("⚠️ Atenção: População da Carta 2 é zero! PIB per Capita definido como 0.\n");
    }
    
    // Verificação de divisão por zero e cálculo da Densidade da Carta 2
    if (areakm2 != 0.0f) {
        densidade2 = (float)populacao2 / areakm2;
    } else {
        densidade2 = 0.0f;
        printf("⚠️ Atenção: Área da Carta 2 é zero! Densidade Populacional definida como 0.\n");
    }
    
    // Saída de dados da Carta 2

    printf("\n---------- Carta 2 ----------\n");
    printf("|Código: %s\n", codigo2);
    printf("|Estado: %s\n", estado2);
    printf("|Cidade: %s\n", nomecidade2);
    printf("|População: %ld\n", populacao2);
    printf("|Número de Pontos Turísticos: %d\n", nmrturisticos2);
    printf("|PIB: %.2f bilhões\n", pib2);
    printf("|Área em Km²: %.2f\n", areakm2);
    printf("|Densidade populacional: %.2f\n", densidade2);
    printf("|PIB per Capita: R$ %.2f\n", pibpc2);
    printf("-----------------------------\n");

    return 0;
}