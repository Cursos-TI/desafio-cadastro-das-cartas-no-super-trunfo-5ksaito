#include <stdio.h>

    int main(){
    //Variáveis separadas para cada atributo da cidade.
        char codigo[20], estado[20], nomecidade[50];
        int populacao, nmrturisticos;
        float pib, areakm;
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

    //Saida dos dados das cartas
    printf("\n---------- Carta ----------\n"); // Adicionado um cabeçalho para melhor organização
    printf("|Código: %s\n", codigo);
    printf("|Estado: %s\n", estado);
    printf("|Cidade: %s\n", nomecidade);
    printf("|População: %d\n", populacao);
    printf("|Número de Pontos Turísticos: %d\n", nmrturisticos);
    printf("|PIB: %.2f\n", pib);
    printf("|Área em Km²: %.2f\n", areakm);
    printf("\n---------------------------\n");
    
return 0;
    
}
