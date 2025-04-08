#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra_estado1, cod_carta1[3], nome_cidade1[50];
    char letra_estado2, cod_carta2[3], nome_cidade2[50];
    int populacao1, num_turisticos1, populacao2, num_turisticos2;
    float areakm1, pib1, areakm2, pib2;

    printf("Insira os dados de suas cartas conforme exigido. Começaremos pela sua primeira carta:\n");
    
    printf("Digite a letra que represente o Estado de sua carta, lembrando que a letra deve ser de A a H: \n");
    scanf(" %c", &letra_estado1);

    printf("Digite o código de sua carta, lembrando que seu código é a letra que representa o estado de sua carta junto de um número de 01 a 04: \n");
    scanf("%s", cod_carta1);

    printf("Digite o nome da cidade de sua carta: \n");
    scanf("%s", nome_cidade1);

    printf("Digite o número de habitantes de sua carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km² de sua carta: \n");
    scanf ("%f", &areakm1);

    printf("Digite o PIB de sua carta: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos de sua carta: \n");
    scanf("%d", &num_turisticos1);

    printf("\n");
    printf("Insira os dados de sua segunda carta: \n");
    printf("\n");

    printf("Digite a letra que represente o Estado de sua carta, lembrando que a letra deve ser de A a H: \n");
    scanf(" %c", &letra_estado2);

    printf("Digite o código de sua carta, lembrando que seu código é a letra que representa o estado de sua carta junto de um número de 01 a 04: \n");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade de sua carta: \n");
    scanf("%s", nome_cidade2);

    printf("Digite o número de habitantes de sua carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km² de sua carta: \n");
    scanf ("%f", &areakm2);

    printf("Digite o PIB de sua carta: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos de sua carta: \n");
    scanf("%d", &num_turisticos2);

    printf("\n");
    printf("Carta 1 \n");
    printf("Estado: %c\n", letra_estado1);
    printf("Código: %s \n", cod_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", areakm1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turisticos: %d \n", num_turisticos1);

    printf("\n");
    printf("Carta 2 \n");
    printf("Estado: %c\n", letra_estado2);
    printf("Código: %s \n", cod_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", areakm2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turisticos: %d \n", num_turisticos2);

    //O "0" imprimido pelo código da carta está apagando a impressão do resultado do campo "Estado".
    return 0;
}
