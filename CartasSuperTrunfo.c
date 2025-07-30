#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char codigo[20], estado[20], nomecidade[50];
    unsigned long int populacao; // Alterado para unsigned long int
    int nmrturisticos;
    float pib, areakm, densidade, pibpc;
    float super_poder; // Variável para o Super Poder da Carta 1

    // Variáveis para a Carta 2
    char codigo2[20], estado2[20], nomecidade2[50];
    unsigned long int populacao2; // Alterado para unsigned long int
    int nmrturisticos2;
    float pib2, areakm2, densidade2, pibpc2;
    float super_poder2; // Variável para o Super Poder da Carta 2

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Código da Cidade: ");
    scanf("%s", codigo);

    printf("Nome do Estado: ");
    scanf(" %49[^\n]", estado);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomecidade);

    printf("População: ");
    scanf("%lu", &populacao); // Uso de %lu para unsigned long int

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nmrturisticos);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Área em Km²: ");
    scanf("%f", &areakm);

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 1
    if (populacao != 0) {
        pibpc = (pib * 1000000000.0f) / populacao; // PIB em reais
    } else {
        pibpc = 0.0f;
        printf("⚠️ Atenção: População da Carta 1 é zero! PIB per Capita definido como 0.\n");
    }

    if (areakm != 0.0f) {
        densidade = (float)populacao / areakm;
    } else {
        densidade = 0.0f;
        printf("⚠️ Atenção: Área da Carta 1 é zero! Densidade Populacional definida como 0.\n");
    }

    // Cálculo do Super Poder para Carta 1
    // Atenção: Inverso da densidade populacional é 1/densidade. Se densidade for 0, o inverso é tratado como 0 para evitar divisão por zero.
    float inverso_densidade = (densidade != 0.0f) ? (1.0f / densidade) : 0.0f;
    super_poder = (float)populacao + areakm + pib + (float)nmrturisticos + pibpc + inverso_densidade;

    // --- Saída dos dados da Carta 1 ---
    printf("\n---------- Carta 1 ----------\n");
    printf("|Código: %s\n", codigo);
    printf("|Estado: %s\n", estado);
    printf("|Cidade: %s\n", nomecidade);
    printf("|População: %lu\n", populacao);
    printf("|Número de Pontos Turísticos: %d\n", nmrturisticos);
    printf("|PIB: %.2f bilhões\n", pib);
    printf("|Área em Km²: %.2f\n", areakm);
    printf("|Densidade populacional: %.2f\n", densidade);
    printf("|PIB per Capita: R$ %.2f\n", pibpc);
    printf("|Super Poder: %.2f\n", super_poder);
    printf("-----------------------------\n");

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Código da Cidade 2: ");
    scanf(" %s", codigo2);

    printf("Nome do Estado: ");
    scanf(" %49[^\n]", estado2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomecidade2);

    printf("População: ");
    scanf("%lu", &populacao2); // Uso de %lu para unsigned long int

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nmrturisticos2);

    printf("PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Área em Km²: ");
    scanf("%f", &areakm2);

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 2
    if (populacao2 != 0) {
        pibpc2 = (pib2 * 1000000000.0f) / populacao2; // PIB em reais
    } else {
        pibpc2 = 0.0f;
        printf("⚠️ Atenção: População da Carta 2 é zero! PIB per Capita definido como 0.\n");
    }

    if (areakm2 != 0.0f) {
        densidade2 = (float)populacao2 / areakm2;
    } else {
        densidade2 = 0.0f;
        printf("⚠️ Atenção: Área da Carta 2 é zero! Densidade Populacional definida como 0.\n");
    }

    // Cálculo do Super Poder para Carta 2
    float inverso_densidade2 = (densidade2 != 0.0f) ? (1.0f / densidade2) : 0.0f;
    super_poder2 = (float)populacao2 + areakm2 + pib2 + (float)nmrturisticos2 + pibpc2 + inverso_densidade2;

    // --- Saída dos dados da Carta 2 ---
    printf("\n---------- Carta 2 ----------\n");
    printf("|Código: %s\n", codigo2);
    printf("|Estado: %s\n", estado2);
    printf("|Cidade: %s\n", nomecidade2);
    printf("|População: %lu\n", populacao2);
    printf("|Número de Pontos Turísticos: %d\n", nmrturisticos2);
    printf("|PIB: %.2f bilhões\n", pib2);
    printf("|Área em Km²: %.2f\n", areakm2);
    printf("|Densidade populacional: %.2f\n", densidade2);
    printf("|PIB per Capita: R$ %.2f\n", pibpc2);
    printf("|Super Poder: %.2f\n", super_poder2);
    printf("-----------------------------\n");

    // --- Comparações ---
    printf("\n--- Comparação de Cartas ---\n");

    // População
    printf("População: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao > populacao2) ? 1 : 0);

    // Área
    printf("Área: Carta %d venceu (%d)\n", (areakm > areakm2) ? 1 : 2, (areakm > areakm2) ? 1 : 0);

    // PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib2) ? 1 : 2, (pib > pib2) ? 1 : 0);

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (nmrturisticos > nmrturisticos2) ? 1 : 2, (nmrturisticos > nmrturisticos2) ? 1 : 0);

    // Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade < densidade2) ? 1 : 2, (densidade < densidade2) ? 1 : 0);

    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpc > pibpc2) ? 1 : 2, (pibpc > pibpc2) ? 1 : 0);

    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder > super_poder2) ? 1 : 2, (super_poder > super_poder2) ? 1 : 0);

    return 0;
}