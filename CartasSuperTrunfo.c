#include <stdio.h>
#include <string.h>

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

    int opcao;

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

    // Exibição da Carta 1
    printf("\n--- Carta 1 Cadastrada ---\n");
    printf("Cidade: %s\n", nomecidade);
    printf("Estado: %s\n", estado);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", areakm);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", nmrturisticos);
    printf("Densidade Demográfica: %.2f hab/Km²\n", densidade);

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

    // Exibição da Carta 2
    printf("\n--- Carta 2 Cadastrada ---\n");
    printf("Cidade: %s\n", nomecidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", areakm2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", nmrturisticos2);
    printf("Densidade Demográfica: %.2f hab/Km²\n", densidade2);

    // --- Menu Interativo de Comparação ---
    printf("\n--- Painel de Escolha de Comparação ---\n");
    printf("Escolha o atributo para a comparação:\n");
    printf("1. População\n");
    printf("2. Área em Km²\n");
    printf("3. PIB da cidade (em bilhões)\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
    printf("----------------------------\n");

    // Lógica de comparação usando switch e if-else aninhados
    switch (opcao) {
        case 1:
            printf("Atributo para comparação: População\n");
            printf("Carta 1 (%s): %lu habitantes\n", nomecidade, populacao);
            printf("Carta 2 (%s): %lu habitantes\n", nomecidade2, populacao2);
            printf("----------------------------\n");
            if (populacao > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
            } else if (populacao2 > populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo para comparação: Área em Km²\n");
            printf("Carta 1 (%s): %.2f Km²\n", nomecidade, areakm);
            printf("Carta 2 (%s): %.2f Km²\n", nomecidade2, areakm2);
            printf("----------------------------\n");
            if (areakm > areakm2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
            } else if (areakm2 > areakm) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo para comparação: PIB da cidade (em bilhões)\n");
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
            break;

        case 4:
            printf("Atributo para comparação: Número de Pontos Turísticos\n");
            printf("Carta 1 (%s): %d\n", nomecidade, nmrturisticos);
            printf("Carta 2 (%s): %d\n", nomecidade2, nmrturisticos2);
            printf("----------------------------\n");
            if (nmrturisticos > nmrturisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
            } else if (nmrturisticos2 > nmrturisticos) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        
        case 5:
            printf("Atributo para comparação: Densidade Demográfica (menor valor vence!)\n");
            printf("Carta 1 (%s): %.2f hab/Km²\n", nomecidade, densidade);
            printf("Carta 2 (%s): %.2f hab/Km²\n", nomecidade2, densidade2);
            printf("----------------------------\n");
            if (densidade < densidade2) { // Regra invertida: menor valor vence
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade);
            } else if (densidade2 < densidade) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Por favor, escolha uma opção entre 1 e 5.\n");
            break;
    }

    return 0;
}