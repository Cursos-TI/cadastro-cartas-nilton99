#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //---------------carta 01--------------

  char estado1;

  char codigo1 [4];

  char cidade1 [50];

  int populacao1;

  float area1;

  float pib1;

  int pontoTuristicos1;

  //--------------carta 02--------

  char estado2;

  char codigo2 [4];

  char cidade2 [50];

  int populacao2;

  float area2;

  float pib2;

  int pontoTuristicos2;

  // Área para entrada de dados

  printf("Cadastar Carta 1:\n");
  printf("Digite o Estado de (A-H) : ");
  scanf("%c", &estado1);

  printf("Digite o Codigo da carta Ex(A01): ");
  scanf("%s", codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf("%[^\n]", cidade1);   // Lê até a quebra de linha

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Aréa em KM²: ");
  scanf("%f", &area1);

  printf("Digite o PIB da sua cidade: ");
  scanf("%f", &pib1);

  printf("Digite o Numero de Pontos Turisticos da sua Cidade: ");
  scanf("%d", &pontoTuristicos1);

  //--------- CARTA 02---------

   printf("Cadastar Carta 2:\n");
  printf("Digite o Estado de (A-H) : ");
  scanf("%c", &estado2);

  printf("Digite o Codigo da carta Ex(B02): ");
  scanf("%s", codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf("%[^\n]", cidade2);    // Lê até a quebra de linha

  printf("Digite a População: ");
  scanf("%d", &populacao2);

  printf("Digite a Aréa em KM²: ");
  scanf("%f", &area2);

  printf("Digite o PIB da sua cidade: ");
  scanf("%f", &pib2);

  printf("Digite o Numero de Pontos Turisticos da sua Cidade: ");
  scanf("%d", &pontoTuristicos2);

  // Área para exibição dos dados da cidade

  printf("\n --- Carta ---\n");

  printf("Estado; %c\n", estado1);

  printf("codigo: %s\n", codigo1);

  printf("Nome da Cidade: %s\n", cidade1);

  printf("População: %d\n", populacao1);

  printf("Aréa da Cidade: %.2f\n KM²", area1);

  printf("PIB é: %.2f\n bilhões de reais", pib1);

  printf("Número de Pontos Turiscos: %d\n", pontoTuristicos1);

  //------- saida carta 02 -------------

  printf("\n --- Carta ---\n");

  printf("Estado; %c\n", estado2);

  printf("codigo: %s\n", codigo2);

  printf("Nome da Cidade: %s\n", cidade2);

  printf("População: %d\n", populacao2);

  printf("Aréa da Cidade: %.2f\n KM²", area2);

  printf("PIB é: %.2f\n bilhões de reais", pib2);

  printf("Número de Pontos Turiscos: %d\n", pontoTuristicos2);

return 0;
} 
