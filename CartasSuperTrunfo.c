#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

void introducao(){
printf("****************************************\n");
printf("**** BEM-VINDO AO JOGO SUPER TRUNFO ****\n");
printf("****************************************\n");

}
int main(){

  setlocale(LC_ALL, "Portuguese");

  introducao();
  
     // variavel opcao menu
    int opcao;

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

    printf("Qual o pais da carta 1: ");
    fgets(PAIS, sizeof(PAIS), stdin);
    PAIS[strcspn(PAIS, "\n")] = '\0';

    printf("Qual o estado?: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("Qual a cidade?: ");
    fgets(cidade01, sizeof(cidade01), stdin);
    cidade01[strcspn(cidade01, "\n")] = '\0';

  printf("Precisamo agora dos dados abaixo!\n\n");
  printf("***************************AVISO******************************\n");
  printf("*** Lembrando o codigo da carta deve começar com uma letra!***\n");
  printf("**************************************************************\n");

  //DADOS CIDADE01

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
 while (getchar() != '\n'); // LIMPA O BUFFER-LIXO que fica, para o prox nao ler ou enter ou algo indesejavel.

 
  //DADOS CARTA 2

    printf("**Agora os dados carta 2**\n");
    printf("Qual o pais da carta 2: ");
    fgets(PAIS2, sizeof(PAIS2), stdin);
    PAIS2[strcspn(PAIS2, "\n")] = '\0';

    printf("Qual o estado?: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Qual a cidade?: ");
    fgets(cidade02, sizeof(cidade02), stdin);
    cidade02[strcspn(cidade02, "\n")] = '\0';

  printf("Precisamo agora dos dados abaixo\n");
  printf("***************************AVISO******************************\n");
  printf("*** Lembrando o codigo da carta deve começar com uma letra!***\n");
  printf("**************************************************************\n");

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

      // menu para escolha da comparaçao
  printf("************************************************\n");
  printf("**Menu para escolha de atributo a ser comparado**\n\n");
  printf("1 - Populaçao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Numero de pontos turisticos\n");
  printf("5 - Densidade populacional\n");
  printf("6 - PIB per capita\n");
  printf("7 - Super poder\n");
  printf("8 - Mostrar as cartas!\n");
  printf("************************************************\n");
  printf("Escolha uma opçao: ");
  scanf("%d", &opcao);
  printf("************************************************\n");

switch(opcao){
case 1:
 if(A01_Populc > A02_Populc){
    printf("Area CARTA 1: %d\n", A01_Populc);
    printf("Area CARTA 2: %d\n", A02_Populc);
    printf("Carta 1 Ganhou!!\n");
}else if(A01_Populc < A02_Populc) {
    printf("Area CARTA 1: %d\n", A01_Populc);
    printf("Area CARTA 2: %d\n", A02_Populc);
    printf("Carta 2 Ganhou!!\n");
    } else{
        printf("Empate os atributos sao iguais\n");
        printf("Area CARTA 1: %d\n", A01_Populc);
        printf("Area CARTA 2: %d\n", A02_Populc);
    }
break;

case 2:
    if(A01_area > A02_area){
    printf("Area CARTA 1: %.2f\n", A01_area);
    printf("Area CARTA 2: %.2f\n", A02_area);
    printf("Carta 1 Ganhou!!\n");
}else if(A01_area < A02_area) {
    printf("Area CARTA 1: %.2f\n", A01_area);
    printf("Area CARTA 2: %.2f\n", A02_area);
    printf("Carta 2 Ganhou!!\n");
    } else{
        printf("Empate os atributos sao iguais\n");
        printf("Area CARTA 1: %.2f\n", A01_PIB);
        printf("Area CARTA 2: %.2f\n", A02_PIB);
    }
break;

case 3:
if(A01_PIB > A02_PIB){
    printf("PIB CARTA 1: %.2f\n", A01_PIB);
    printf("PIB CARTA 2: %.2f\n", A02_PIB);
    printf("Carta 1 Ganhou!!\n");
}else if(A01_PIB < A02_PIB) {
    printf("PIB CARTA 1: %.2f\n", A01_PIB);
    printf("PIB CARTA 2: %.2f\n", A02_PIB);
    printf("Carta 2 Ganhou!!\n");
    } else{
        printf("Empate os atributos sao iguais\n");
        printf("PIB CARTA 1: %.2f\n", A01_PIB);
        printf("PIB CARTA 2: %.2f\n", A02_PIB);
    }
break;

case 4:
    if(A01_NPTurist > A02_NPTurist){
    printf("Numero de pontos turisticos CARTA 1: %d\n", A01_NPTurist);
    printf("Numero de pontos turisticos CARTA 2: %d\n", A02_NPTurist);
    printf("Carta 1 Ganhou!!\n");
}else if(A02_NPTurist < A02_NPTurist) {
    printf("Numero de pontos turisticos CARTA 1: %d\n", A01_NPTurist);
    printf("Numero de pontos turisticos CARTA 2: %d\n", A02_NPTurist);
    printf("Carta 2 Ganhou!!\n");
    } else{
        printf("Empate os atributos sao iguais\n");
        printf("Numero de pontos turisticos CARTA 1: %d\n", A01_NPTurist);
        printf("Numero de pontos turisticos CARTA 2: %d\n", A02_NPTurist);
    }
break;

case 5:
if(A01_DENPO > A02_DENPO){
    printf("Densidade populacional CARTA 1: %.2f\n", A01_DENPO);
    printf("Densidade populacional CARTA 2: %.2f\n", A02_DENPO);
    printf("Carta 2 Ganhou!!\n");
}else if(A01_PIBPC < A02_PIBPC) {
    printf("Densidade populacional CARTA 1: %.2f\n", A01_DENPO);
    printf("Densidade populacional CARTA 2: %.2f\n", A02_DENPO);
    printf("Carta 1 Ganhou!!\n");
    } else{
        printf("Empate os atributos sao iguais\n");
        printf("Densidade populacional CARTA 1: %.2f\n", A01_DENPO);
        printf("Densidade populacional CARTA 2: %.2f\n", A02_DENPO);
    }
break;

case 6:
if(A01_PIBPC > A02_PIBPC){
    printf("PIB per capita CARTA 1: %.2f\n", A01_PIBPC);
    printf("PIB per capita CARTA 2: %.2f\n", A02_PIBPC);
    printf("Carta 1 Ganhou!!\n");
}else if(A01_PIBPC < A02_PIBPC) {
    printf("PIB per capita CARTA 1: %.2f\n", A01_PIBPC);
    printf("PIB per capita CARTA 2: %.2f\n", A02_PIBPC);
    printf("Carta 2 Ganhou!!\n");
    } else{
        printf("Empate os atributos sao iguais\n");
        printf("PIB per capita CARTA 1: %.2f\n", A01_PIBPC);
        printf("PIB per capita CARTA 2: %.2f\n", A02_PIBPC);
    }
break;

case 7:
    if(SP1 > SP2){
    printf("Super poder CARTA 1: %.2f\n", SP1);
    printf("Super poder CARTA 2: %.2f\n", SP2);
    printf("Carta 1 Ganhou!!\n");
}else if (SP1 < SP2){
    printf("Super poder CARTA 1: %.2f\n", SP1);
    printf("Super poder CARTA 2: %.2f\n", SP2);
    printf("Carta 2 Ganhou!!\n");
    } else{
        printf("Empate! Os atributos sao iguais\n");
        printf("Super poder CARTA 1: %.2f\n", SP1);
        printf("Super poder CARTA 2: %.2f\n", SP2);
    }
break;
case 8:
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
  
break;

default:

    printf("Opçao invalida\n");

break;
}

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

return 0;

}

