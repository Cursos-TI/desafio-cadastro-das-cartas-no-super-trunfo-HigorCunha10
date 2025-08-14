#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //primeira carta
    char estado1[30] = "Ceara";
    char codigodacarta1[30] = "A01";
    char nomedacidade1[30] = "Fortaleza";
    int populacao1 = 100000;
    float areaemkm21 = 32849;
    float pib1 = 3232732;
    int pontosturisticos1 = 3;

    //demonstrando a carta numero 1 na tela

    printf ("CARTA 1:");
    printf ("Estado1: %s\n", estado1);
    printf("codigo da carta: %s\n", codigodacarta1);
    printf ("nome da cidade: %s\n", nomedacidade1);
    printf ("quantidade da população: %d\n", populacao1);
    printf ("Area em km2: %f\n", areaemkm21);
    printf ("PIB:%f\n", pib1);
    printf ("pontos turisticos: %d\n", pontosturisticos1);
    

    //segunda carta
    char estado2[20] = "Acre";
    char codigocarta2[20] = "A02";
    char nomedacidade2[20] = "Rio Branco";
    int populacao2 = 37298;
    float areaemkm22 = 2000;
    float pib2 = 23245;
    int pontosturisticos2 = 3;

    //demonstrando segunda carta na tela

    printf ("CARTA 2:\n");
    printf ("Estado1: %s\n", estado2);
    printf("codigo da carta: %s\n", codigocarta2);
    printf ("nome da cidade: %s\n", nomedacidade2);
    printf ("quantidade da população: %d\n", populacao2);
    printf ("Area em km2: %f\n", areaemkm22);
    printf ("PIB:%f\n", pib2);
    printf ("pontos turisticos: %d\n", pontosturisticos2);




   
    return 0;
}
