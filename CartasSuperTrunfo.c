#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

void introducao(){
printf("****************************************\n");
printf("**** BEM-VINDO AO JOGO SUPER TRUNFO ****\n");
printf("****************************************\n");

}
int main(){

  introducao();
  printf("Precisamo cadastrar novas cartas para o jogo SUPER TRUNFO\n\n");
  printf("Entre com os dados das cartas conforme solicitado!\n\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // variaveis para duas carta ( 2 cidades)

    char PAIS[15], PAIS2[15], COD01[4], COD02[4];
    char estado1[15], estado2[15], cidade01[15], cidade02[15];
    char A01_cidade[15], A02_cidade[15];
    int A01_Populc, A02_Populc;
    float A01_area, A02_area;
    float A01_PIB, A02_PIB;
    int A01_NPTurist, A02_NPTurist;
    float A01_PIBPC, A02_PIBPC;
    float A01_DENPO, A02_DENPO;
    float SP1, SP2;
  // Área para entrada de dados

  // CARTA 1

  printf("Qual o pais da carta 1:");
  scanf("%s", PAIS);

  printf("Qual o estado ?:");
  scanf("%s", estado1);

  printf("Qual a cidade ?:");
  scanf("%s", cidade01);


  printf("** Lembrando o codigo da carta deve começar com uma letra!\n\n");

  //DADOS CIDADE01

  printf("Precisamo agora dos dados abaixo!\n\n");

  printf("Qual deve ser o codigo da carta: ");
  scanf("%s", COD01);

//populaçao
  printf("Qual a populaçao da cidade(%s): ", cidade01);
  scanf("%d", &A01_Populc);

//area
  printf("Qual a area da cidade(%s) em Km²: ", cidade01);
  scanf("%f", &A01_area);

//PIB
  printf("Qual o PIB da cidade(%s) em bilhoes de reais: ", cidade01);
  scanf("%f", &A01_PIB);

// Numero pontos turisticos
  printf("\nQual o numero de pontos turisticos da cidade(%s): ", cidade01);
  scanf("%d", &A01_NPTurist);

 
  //DADOS CARTA 2

  printf("Qual o pais da carta 2:");
  scanf("%s", PAIS2);

  printf("Qual o estado?:");
  scanf("%s", estado2);

  printf("Qual a cidade?:");
  scanf("%s", cidade02);

  printf("Precisamo agora dos dados abaixo\n");
  printf("* Lembrando o codigo da carta deve começar com uma letra!\n");

  printf("Qual deve ser o codigo da carta:");
  scanf("%s", COD02);

//populaçao
  printf("Qual a populaçao da cidade(%s):", cidade02);
  scanf("%d", &A02_Populc);

//area
  printf("Qual a area da cidade(%s) em Km²:", cidade02);
  scanf("%f", &A02_area);

//PIB
  printf("Qual o PIB da cidade(%s) em bilhoes de reais:", cidade02);
  scanf("%f", &A02_PIB);

// Numero pontos turisticos
  printf("Qual o numero de pontos turisticos da cidade(%s):", cidade02);
  scanf("%d", &A02_NPTurist);

// Calculo PIBPERCAPITA e DENSIDADE POPULACIONAL

// Calculo PIBPERCAPITA
A01_PIBPC = (float)A01_PIB / A01_Populc;
A02_PIBPC = (float)A02_PIB / A02_Populc;

//DENSIDADE POPULACIONAL
A01_DENPO = (float)A01_Populc / A01_area;
A02_DENPO = (float)A02_Populc / A02_area;

// Calculo super poder
SP1 = A01_Populc + A01_area + A01_PIBPC + A01_PIB + (float)A01_NPTurist + (1 / A01_DENPO );
SP2 = A02_Populc + A02_area + A02_PIBPC + A02_PIB + (float)A02_NPTurist + (1 / A02_DENPO );

// Área para exibição dos dados da cidade
  printf("\n");
  printf("*As cartas cadastrada sao!*\n\n");


// Exibir carta 1

  printf("*Carta 1\n\n");
  printf("Pais: %s\n", PAIS);
  printf("Estado: %s\n", estado1);
  printf("Cidade: %s\n", cidade01);
  printf("COD: %s\n", COD01);
  printf("Populaçao: %d\n", A01_Populc);
  printf("Area: %.2f\n", A01_area);
  printf("PIB: %.2f\n", A01_PIB);
  printf("Numero de pontos turisticos: %d\n", A01_NPTurist);
  printf("Densidade Populacional:: %.2f\n", A01_DENPO);
  printf("PIB per capita:: %.2f\n", A01_PIBPC);
  printf("Super poder: %f\n\n", SP1);

// Exibir carta 2

  printf("*Carta 2\n\n");
  printf("Pais: %s\n", PAIS2);
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s\n", cidade02);
  printf("COD: %s\n", COD02);
  printf("Populaçao: %d\n", A02_Populc);
  printf("Area: %.2f\n", A02_area);
  printf("PIB: %.2f\n", A02_PIB);
  printf("Numero de pontos turisticos: %d\n", A02_NPTurist);
  printf("Densidade Populacional:: %.2f\n", A02_DENPO);
  printf("PIB per capita:: %.2f\n", A02_PIBPC);
  printf("Super poder: %f\n\n", SP2);

  // Comparaçao 

  printf("*Comparação das Cartas\n\n");
  printf("Populaçao: Carta %d venceu\n", A01_Populc > A02_Populc);
  printf("Area: Carta %d venceu\n", A01_area > A02_area);
  printf("PIB: Carta %d venceu\n", A01_PIB > A02_PIB);
  printf("Numero de pontos turisticos: Carta %d venceu\n", A01_NPTurist > A02_NPTurist);
  printf("Densidade Populacional:: Carta %d venceu\n", A01_DENPO > A02_DENPO);
  printf("PIB per capita:: Carta %d venceu\n", A01_PIBPC > A02_PIBPC);
  printf("Super poder: Carta %d venceu\n", SP1 > SP2);

return 0;


}

