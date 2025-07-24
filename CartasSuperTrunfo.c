#include <stdio.h>

    int main(){
    //Variáveis separadas para cada atributo da cidade.
        char codigo[20], estado[20], nomecidade[50];
        char codigo2[20], estado2[20], nomecidade2[50];
        int populacao, nmrturisticos;
        int populacao2, nmrturisticos2;
        float pib, areakm, densidade, pibpc;
        float pib2, areakm2, densidade2, pibpc2;
    
        // Cadastro das Cartas:

    printf("Código Cidade: ");
    scanf("%s", &codigo);

    printf("Nome do Estado: ");
    scanf("%s", &estado);

    printf("Nome da Cidade: ");
    scanf("%s", &nomecidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Números turisticos: ");
    scanf("%d", &nmrturisticos);

    printf("PIB da cidade: ");
    scanf("%f", &pib);

    printf("Área em Km²: ");
    scanf("%f", &areakm);

    pibpc = (float) pib / populacao;
    
    densidade = (float) populacao / areakm;
    


    //Saida dos dados da carta 1

    printf("\n---------- Carta ----------\n"); // Adicionado um cabeçalho para melhor organização
    printf("|Código: %s\n", codigo);
    printf("|Estado: %s\n", estado);
    printf("|Cidade: %s\n", nomecidade);
    printf("|População: %d\n", populacao);
    printf("|Número de Pontos Turísticos: %d\n", nmrturisticos);
    printf("|PIB: %.2f\n", pib);
    printf("|Área em Km²: %.2f\n", areakm);
    printf("|Densidade populacional: %.2f\n", densidade);
    printf("|PIB per Capita: %.2f\n", pibpc);
    printf("\n---------------------------\n");

    //entrada de dados da carta 2

    printf("Código Cidade 2: ");
    scanf("%s", &codigo2);

    printf("Nome do Estado: ");
    scanf("%s", &estado2);

    printf("Nome da Cidade: ");
    scanf("%s", &nomecidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Números turisticos: ");
    scanf("%d", &nmrturisticos2);

    printf("PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Área em Km²: ");
    scanf("%f", &areakm2);
    
    pibpc2 = (float) pib2 / populacao2;
    
    densidade2 = (float) populacao2 / areakm2;
    
    //saida de dados da carta 2

    printf("\n---------- Carta 2 ----------\n");
    printf("|Código: %s\n", codigo2);
    printf("|Estado: %s\n", estado2);
    printf("|Cidade: %s\n", nomecidade2);
    printf("|População: %d\n", populacao2);
    printf("|Número de Pontos Turísticos: %d\n", nmrturisticos2);
    printf("|PIB: %.2f\n", pib2);
    printf("|Área em Km²: %.2f\n", areakm2);
    printf("|Densidade populacional: %.2f\n", densidade2);
    printf("|PIB per Capita: %.2f\n", pibpc2);
    printf("\n---------------------------\n");

return 0;
    
}
