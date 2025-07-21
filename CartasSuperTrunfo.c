#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char estado1;
    char codigo1[5];
    char cidade1[20];
    char codigoCompleto1[10];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int NPT1;
    float densidadePopu1;
    float pibCapita1;

    char estado2;
    char codigo2[5];
    char cidade2[20];
    char codigoCompleto2[10];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int NPT2;
    float densidadePopu2;
    float pibCapita2;

    printf("Informe uma letra entre 'A' a 'H': \n");
    scanf(" %c", &estado1);

    printf("Informe um numero entre 01 e 04: \n");
    scanf(" %s", codigo1);

    sprintf(codigoCompleto1, "%c%s", estado1, codigo1);

    printf("Nome da cidade: \n");
    scanf(" %s", cidade1);

    printf("Numero de habitantes: \n");
    scanf(" %d", &populacao1);

    printf("Area da cidade em km2: \n");
    scanf(" %f", &area1);

    printf("PIB: \n");
    scanf(" %f", &PIB1);

    printf("Numero de Pontos Turisticos: \n");
    scanf(" %d", &NPT1);

    densidadePopu1 = populacao1 / area1;
    pibCapita1 = PIB1 / populacao1;

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCompleto1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", NPT1);
    printf("Densidade Populacional: %.2f\n", densidadePopu1);
    printf("PIB per Capita: %.2f\n\n", pibCapita1);

    printf("Informe uma letra entre 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Informe um numero entre 01 e 04: ");
    scanf(" %s", codigo2);

    sprintf(codigoCompleto2, "%c%s", estado2, codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Numero de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Area da cidade em km²: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &PIB2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &NPT2);

    densidadePopu2 = populacao2 / area2;
    pibCapita2 = PIB2 / populacao2;

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCompleto2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", NPT2);
    printf("Densidade Populacional: %.2f\n", densidadePopu2);
    printf("PIB per Capita: %.2f\n\n", pibCapita2);

    float superPoder1 = populacao1 + area1 + PIB1 + NPT1 + pibCapita1 + (-densidadePopu1);
    float superPoder2 = populacao2 + area2 + PIB2 + NPT2 + pibCapita2 + (-densidadePopu2);

    printf("Comparacao de Cartas: \n\n");
    printf("Populacao: Carta 1 venceu? %d", populacao1 > populacao2);
    printf("Area: Carta 1 venceu? %d", area1 > area2);
    printf("PIB: Carta 1 venceu? %d", PIB1 > PIB2);
    printf("Pontos Turisticos: Carta 1 venceu? %d", NPT1 > NPT2);
    printf("Densidade Populacional: Carta 1 venceu? %d", densidadePopu1 > densidadePopu2);
    printf("PIB per Capita: Carta 1 venceu? %d", pibCapita1 > pibCapita2);
    printf("Super Poder: Carta 1 venceu? %d", superPoder1 > superPoder2);

}
