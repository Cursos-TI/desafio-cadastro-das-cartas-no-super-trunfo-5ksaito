#include <stdio.h>
#include <string.h>

int main() {
    int opcaoMenuPrincipal;

    printf("--- Menu Principal do Super Trunfo ---\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcaoMenuPrincipal);

    if (opcaoMenuPrincipal == 1) {
        // Variáveis para a Carta 1
        char codigo1[20], estado1[20], nomecidade1[50];
        unsigned long int populacao1;
        int nmrturisticos1;
        float pib1, areakm1, densidade1;

        // Variáveis para a Carta 2
        char codigo2[20], estado2[20], nomecidade2[50];
        unsigned long int populacao2;
        int nmrturisticos2;
        float pib2, areakm2, densidade2;

        int opcaoComparacao1, opcaoComparacao2;
        int pontosCarta1 = 0, pontosCarta2 = 0;

        // --- Cadastro da Carta 1 ---
        printf("\n--- Cadastro da Carta 1 ---\n");
        printf("Codigo da Cidade: ");
        scanf("%s", codigo1);
        printf("Nome do Estado: ");
        scanf(" %49[^\n]", estado1);
        printf("Nome da Cidade: ");
        scanf(" %49[^\n]", nomecidade1);
        printf("Populacao: ");
        scanf("%lu", &populacao1);
        printf("Numero de Pontos Turisticos: ");
        scanf("%d", &nmrturisticos1);
        printf("PIB da cidade (em bilhoes): ");
        scanf("%f", &pib1);
        printf("Area em Km²: ");
        scanf("%f", &areakm1);

        // Cálculo para Carta 1
        densidade1 = (areakm1 != 0.0f) ? (float)populacao1 / areakm1 : 0.0f;
        
        // Exibição da Carta 1
        printf("\n--- Carta 1 Cadastrada ---\n");
        printf("Cidade: %s\n", nomecidade1);
        printf("Estado: %s\n", estado1);
        printf("Populacao: %lu\n", populacao1);
        printf("Area: %.2f Km²\n", areakm1);
        printf("PIB: %.2f bilhoes\n", pib1);
        printf("Numero de Pontos Turisticos: %d\n", nmrturisticos1);
        printf("Densidade Demografica: %.2f hab/Km²\n", densidade1);

        // --- Cadastro da Carta 2 ---
        printf("\n--- Cadastro da Carta 2 ---\n");
        printf("Codigo da Cidade: ");
        scanf(" %s", codigo2);
        printf("Nome do Estado: ");
        scanf(" %49[^\n]", estado2);
        printf("Nome da Cidade: ");
        scanf(" %49[^\n]", nomecidade2);
        printf("Populacao: ");
        scanf("%lu", &populacao2);
        printf("Numero de Pontos Turisticos: ");
        scanf("%d", &nmrturisticos2);
        printf("PIB da cidade (em bilhoes): ");
        scanf("%f", &pib2);
        printf("Area em Km²: ");
        scanf("%f", &areakm2);
        
        // Cálculo para Carta 2
        densidade2 = (areakm2 != 0.0f) ? (float)populacao2 / areakm2 : 0.0f;

        // Exibição da Carta 2
        printf("\n--- Carta 2 Cadastrada ---\n");
        printf("Cidade: %s\n", nomecidade2);
        printf("Estado: %s\n", estado2);
        printf("Populacao: %lu\n", populacao2);
        printf("Area: %.2f Km²\n", areakm2);
        printf("PIB: %.2f bilhoes\n", pib2);
        printf("Numero de Pontos Turisticos: %d\n", nmrturisticos2);
        printf("Densidade Demografica: %.2f hab/Km²\n", densidade2);

        // --- Escolha do Primeiro Atributo ---
        printf("\n--- Painel de Escolha de Comparacao 1 ---\n");
        printf("Escolha o primeiro atributo para a comparacao:\n");
        printf("1. Populacao\n");
        printf("2. Area em Km²\n");
        printf("3. PIB da cidade (em bilhoes)\n");
        printf("4. Numero de Pontos Turisticos\n");
        printf("5. Densidade Demografica\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcaoComparacao1);
        
        // Valida a opção
        if (opcaoComparacao1 < 1 || opcaoComparacao1 > 5) {
            printf("Opcao invalida. O jogo foi encerrado.\n");
            return 1;
        }

        // --- Escolha do Segundo Atributo (Menu Dinâmico) ---
        printf("\n--- Painel de Escolha de Comparacao 2 ---\n");
        printf("Escolha o segundo atributo para a comparacao (nao pode ser o mesmo):\n");
        if (opcaoComparacao1 != 1) printf("1. Populacao\n");
        if (opcaoComparacao1 != 2) printf("2. Area em Km²\n");
        if (opcaoComparacao1 != 3) printf("3. PIB da cidade (em bilhoes)\n");
        if (opcaoComparacao1 != 4) printf("4. Numero de Pontos Turisticos\n");
        if (opcaoComparacao1 != 5) printf("5. Densidade Demografica\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcaoComparacao2);

        // Valida a segunda opção
        if (opcaoComparacao2 < 1 || opcaoComparacao2 > 5 || opcaoComparacao2 == opcaoComparacao1) {
            printf("Opcao invalida. O jogo foi encerrado.\n");
            return 1;
        }

        printf("----------------------------\n");

        // --- Lógica de Comparação e Pontuação ---
        char nomeAtributo1[50], nomeAtributo2[50];
        
        // Atributo 1
        switch (opcaoComparacao1) {
            case 1: strcpy(nomeAtributo1, "Populacao"); if (populacao1 > populacao2) pontosCarta1++; else if (populacao2 > populacao1) pontosCarta2++; break;
            case 2: strcpy(nomeAtributo1, "Area em Km²"); if (areakm1 > areakm2) pontosCarta1++; else if (areakm2 > areakm1) pontosCarta2++; break;
            case 3: strcpy(nomeAtributo1, "PIB da cidade"); if (pib1 > pib2) pontosCarta1++; else if (pib2 > pib1) pontosCarta2++; break;
            case 4: strcpy(nomeAtributo1, "Numero de Pontos Turisticos"); if (nmrturisticos1 > nmrturisticos2) pontosCarta1++; else if (nmrturisticos2 > nmrturisticos1) pontosCarta2++; break;
            case 5: strcpy(nomeAtributo1, "Densidade Demografica"); if (densidade1 < densidade2) pontosCarta1++; else if (densidade2 < densidade1) pontosCarta2++; break;
        }
        
        // Atributo 2
        switch (opcaoComparacao2) {
            case 1: strcpy(nomeAtributo2, "Populacao"); if (populacao1 > populacao2) pontosCarta1++; else if (populacao2 > populacao1) pontosCarta2++; break;
            case 2: strcpy(nomeAtributo2, "Area em Km²"); if (areakm1 > areakm2) pontosCarta1++; else if (areakm2 > areakm1) pontosCarta2++; break;
            case 3: strcpy(nomeAtributo2, "PIB da cidade"); if (pib1 > pib2) pontosCarta1++; else if (pib2 > pib1) pontosCarta2++; break;
            case 4: strcpy(nomeAtributo2, "Numero de Pontos Turisticos"); if (nmrturisticos1 > nmrturisticos2) pontosCarta1++; else if (nmrturisticos2 > nmrturisticos1) pontosCarta2++; break;
            case 5: strcpy(nomeAtributo2, "Densidade Demografica"); if (densidade1 < densidade2) pontosCarta1++; else if (densidade2 < densidade1) pontosCarta2++; break;
        }

        // --- Exibição Detalhada do Resultado ---
        printf("\n--- Resultado da Rodada ---\n");
        printf("Cartas: %s vs %s\n\n", nomecidade1, nomecidade2);

        // Detalhes do Atributo 1
        printf("Comparacao 1: %s\n", nomeAtributo1);
        printf("  %s: ", nomecidade1);
        if (opcaoComparacao1 == 1) printf("%lu habitantes\n", populacao1);
        else if (opcaoComparacao1 == 2) printf("%.2f Km²\n", areakm1);
        else if (opcaoComparacao1 == 3) printf("%.2f bilhoes\n", pib1);
        else if (opcaoComparacao1 == 4) printf("%d pontos\n", nmrturisticos1);
        else if (opcaoComparacao1 == 5) printf("%.2f hab/Km²\n", densidade1);
        
        printf("  %s: ", nomecidade2);
        if (opcaoComparacao1 == 1) printf("%lu habitantes\n", populacao2);
        else if (opcaoComparacao1 == 2) printf("%.2f Km²\n", areakm2);
        else if (opcaoComparacao1 == 3) printf("%.2f bilhoes\n", pib2);
        else if (opcaoComparacao1 == 4) printf("%d pontos\n", nmrturisticos2);
        else if (opcaoComparacao1 == 5) printf("%.2f hab/Km²\n", densidade2);
        
        printf("\n");

        // Detalhes do Atributo 2
        printf("Comparacao 2: %s\n", nomeAtributo2);
        printf("  %s: ", nomecidade1);
        if (opcaoComparacao2 == 1) printf("%lu habitantes\n", populacao1);
        else if (opcaoComparacao2 == 2) printf("%.2f Km²\n", areakm1);
        else if (opcaoComparacao2 == 3) printf("%.2f bilhoes\n", pib1);
        else if (opcaoComparacao2 == 4) printf("%d pontos\n", nmrturisticos1);
        else if (opcaoComparacao2 == 5) printf("%.2f hab/Km²\n", densidade1);

        printf("  %s: ", nomecidade2);
        if (opcaoComparacao2 == 1) printf("%lu habitantes\n", populacao2);
        else if (opcaoComparacao2 == 2) printf("%.2f Km²\n", areakm2);
        else if (opcaoComparacao2 == 3) printf("%.2f bilhoes\n", pib2);
        else if (opcaoComparacao2 == 4) printf("%d pontos\n", nmrturisticos2);
        else if (opcaoComparacao2 == 5) printf("%.2f hab/Km²\n", densidade2);
        
        printf("\n");
        
        // Resultado Final
        printf("Pontuacao final:\n");
        printf("  %s: %d ponto(s)\n", nomecidade1, pontosCarta1);
        printf("  %s: %d ponto(s)\n", nomecidade2, pontosCarta2);

        if (pontosCarta1 > pontosCarta2) {
            printf("\nResultado: A carta de %s venceu a rodada!\n", nomecidade1);
        } else if (pontosCarta2 > pontosCarta1) {
            printf("\nResultado: A carta de %s venceu a rodada!\n", nomecidade2);
        } else {
            printf("\nResultado: Empate!\n");
        }

    } else if (opcaoMenuPrincipal == 2) {
        printf("\n--- Regras do Super Trunfo ---\n");
        printf("1. Cadastre duas cartas com as informacoes de duas cidades.\n");
        printf("2. Um painel de escolha sera exibido para voce selecionar DOIS atributos para comparar as cartas.\n");
        printf("3. A regra geral e: vence a carta com o maior valor no atributo escolhido.\n");
        printf("4. Excecao: Para a Densidade Demografica, a regra se inverte. Vence a carta com o menor valor.\n");
        printf("5. A carta com o maior numero de vitorias nos dois atributos e a vencedora da rodada.\n");
        printf("6. Em caso de empate na pontuacao, a rodada e declarada como um empate geral.\n");
        printf("-------------------------------\n\n");
    } else if (opcaoMenuPrincipal == 3) {
        printf("Saindo do jogo. Ate mais!\n");
    } else {
        printf("Opcao invalida. Por favor, escolha 1 para Iniciar, 2 para ver as Regras ou 3 para Sair.\n");
    }

    return 0;
}