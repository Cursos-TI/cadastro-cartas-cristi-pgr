#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

  printf("Precisamo cadastrar novas cartas para o jogo SUPER TRUNFO\n");
  printf("Entre com os dados das cartas conforme solicitado!\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // variaveis para duas carta ( 2 cidades)

    char PAIS[15], COD01[4], COD02[4];
    char estado[15], cidade01[15], cidade02[15];
    char A01_cidade[15], A02_cidade[15];
    int A01_Populc, A02_Populc;
    float A01_area, A02_area;
    float A01_PIB, A02_PIB;
    int A01_NPTurist, A02_NPTurist;


  // Área para entrada de dados

  printf("Qual o pais da carta?:");
  scanf("%s", PAIS);

  printf("Qual o estado?:");
  scanf("%s", estado);

  // CIDADE 1

  printf("Qual a cidade?:");
  scanf("%s", cidade01);


  printf("* Lembrando o codigo da carta deve começar com uma letra!\n");

  //DADOS CIDADE01

  printf("Precisamo agora dos dados abaixo!\n");

  printf("Qual deve ser o codigo da carta:");
  scanf("%s", COD01);
//populaçao
  printf("Qual a populaçao da cidade(%s):", cidade01);
  scanf("%d", &A01_Populc);
//area
  printf("Qual a area da cidade(%s):", cidade01);
  scanf("%f", &A01_area);
//PIB
  printf("Qual o PIB da cidade(%s):", cidade01);
  scanf("%f", &A01_PIB);
// Numero pontos turisticos
  printf("Qual o numero de pontos turisticos da cidade(%s):", cidade01);
  scanf("%d", &A01_NPTurist);

 //DADOS CIDADE02

  printf("*CADASTRO NOVA CIDADE\n");
  printf("Qual a cidade?:");
  scanf("%s", cidade02);

  printf("Precisamo agora dos dados abaixo\n");

  printf("Qual deve ser o codigo da carta:");
  scanf("%s", COD02);
//populaçao
  printf("Qual a populaçao da cidade(%s):", cidade02);
  scanf("%d", &A02_Populc);
//area
  printf("Qual a area da cidade(%s):", cidade02);
  scanf("%f", &A02_area);
//PIB
  printf("Qual o PIB da cidade(%s):", cidade02);
  scanf("%f", &A02_PIB);
// Numero pontos turisticos
  printf("Qual o numero de pontos turisticos da cidade(%s):", cidade02);
  scanf("%d", &A02_NPTurist);

  // Área para exibição dos dados da cidade
  printf("\n");
  printf("*As cartas cadastrada sao!*\n\n");

// Exibir carta 1
  printf("\n");
  printf("*Carta 1\n");
  printf("\n");
  printf("Pais: %s\n", PAIS);
  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade01);
  printf("COD: %s\n", COD01);
  printf("Populaçao: %d\n", A01_Populc);
  printf("Area: %f\n", A01_area);
  printf("PIB: %f\n", A01_PIB);
  printf("Numero de pontos turisticos: %d\n", A01_NPTurist);

// Exibir carta 2
  printf("\n");
  printf("*Carta 2\n");
  printf("\n");
  printf("Pais: %s\n", PAIS);
  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade02);
  printf("COD: %s\n", COD02);
  printf("Populaçao: %d\n", A02_Populc);
  printf("Area: %f\n", A02_area);
  printf("PIB: %f\n", A02_PIB);
  printf("Numero de pontos turisticos: %d\n", A02_NPTurist);


return 0;

}

