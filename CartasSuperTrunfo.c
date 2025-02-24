#include <stdio.h>

#include <stdio.h>

int main() {
  // Carta 1: Rio de Janeiro
  char estado1 = 'B'; // Estado 'B' para Rio de Janeiro
  char codigo1[] = "B01";
  char nome_cidade1[] = "Rio de Janeiro";
  int populacao1 = 6748000;
  float area1 = 1200.25;
  float pib1 = 300.50;
  int pontos_turisticos1 = 30;

  // Carta 2: São Paulo
  char estado2 = 'A'; // Estado 'A' para São Paulo
  char codigo2[] = "A01";
  char nome_cidade2[] = "São Paulo";
  int populacao2 = 12325000;
  float area2 = 1521.11;
  float pib2 = 699.28;
  int pontos_turisticos2 = 50;

  // Exibindo dados da Carta 1: Rio de Janeiro
  printf("Carta 1: Rio de Janeiro\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

  // Exibindo dados da Carta 2: São Paulo
  printf("\nCarta 2: São Paulo\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

  return 0;
}
