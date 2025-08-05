#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char codigo[20], estado[20], nomecidade[50];
    unsigned long int populacao;
    int nmrturisticos;
    float pib, areakm, densidade, pibpc;

    // Variáveis para a Carta 2
    char codigo2[20], estado2[20], nomecidade2[50];
    unsigned long int populacao2;
    int nmrturisticos2;
    float pib2, areakm2, densidade2, pibpc2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Código da Cidade: ");
    scanf("%s", codigo);

    printf("Nome do Estado: ");
    scanf(" %49[^\n]", estado);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomecidade);

    printf("População: ");
    scanf("%lu", &populacao);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nmrturisticos);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Área em Km²: ");
    scanf("%f", &areakm);

    // Cálculo para Carta 1
    if (populacao != 0) {
        pibpc = (pib * 1000000000.0f) / populacao;
    } else {
        pibpc = 0.0f;
    }
    if (areakm != 0.0f) {
        densidade = (float)populacao / areakm;
    } else {
        densidade = 0.0f;
    }

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Código da Cidade 2: ");
    scanf(" %s", codigo2);

    printf("Nome do Estado: ");
    scanf(" %49[^\n]", estado2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomecidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nmrturisticos2);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Área em Km²: ");
    scanf("%f", &areakm2);
    
    // Cálculo para Carta 2
    if (populacao2 != 0) {
        pibpc2 = (pib2 * 1000000000.0f) / populacao2;
    } else {
        pibpc2 = 0.0f;
    }
    if (areakm2 != 0.0f) {
        densidade2 = (float)populacao2 / areakm2;
    } else {
        densidade2 = 0.0f;
    }

    // --- Comparação de Cartas (apenas PIB) ---
    printf("\n--- Comparação de Cartas ---\n");
    printf("Atributo para comparação: PIB\n");
    printf("Carta 1 (%s): %.2f bilhões\n", nomecidade, pib);
    printf("Carta 2 (%s): %.2f bilhões\n", nomecidade2, pib2);
    printf("----------------------------\n");

    if (pib > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
    } else if (pib2 > pib) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}