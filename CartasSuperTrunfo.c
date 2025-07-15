#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char estado;
    char codigo[5];
    char cidade[20];
    char codigoCompleto[10];
    int populacao;
    float area;
    float PIB;
    int NPT;

    system("cls");

    printf("Informe uma letra entre 'A' a 'H': ");
    scanf("%c", &estado);

    printf("Informe um numero entre 01 e 04: ");
    scanf("%s", codigo);

    sprintf(codigoCompleto, "%c%s", estado, codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("Numero de habitantes: ");
    scanf("%d", &populacao);

    printf("Area da cidade em km²: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &NPT);

    printf("\n");

    printf("Carta:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoCompleto);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f Km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", NPT);
}