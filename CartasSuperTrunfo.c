#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Douglas

int main() {
    printf("DESAFIO SUPER TRUNFO -Países\n");
    printf("Tema 1- Cadastro de cartas\n");
    printf("Teste Douglas\n");

    int populacao;
    float area;
    float pib;
    int numeropontosturisticos;
    char pais [20];

    printf("Digite a população:\n");
    scanf("%d",&populacao);

    printf("Digite a área:\n");
    scanf("%f",&area);

    printf("Digite o PIB:\n");
    scanf("%f",&pib);

    printf("Digite o Número de pontos túristicos:\n");
    scanf("%d",&numeropontosturisticos);

    printf("Digite o País:\n");
    scanf("%s",pais);

    printf("\n---Dados Cadastrados---\n");
    printf("População:%d\n",populacao);
    printf("Àrea:%f\n",area);
    printf("PIB:%f\n",pib);
    printf("Número de pontos túristicos:%d\n",numeropontosturisticos);

    return 0;

}