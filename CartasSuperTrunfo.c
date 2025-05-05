#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste vanderlei vaz


int main() {
  // Sugestão: Defina variáveis separadas para cada atributo da cidade.
  // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
  char estado[20], estado1[20];
  char cidade[20], cidade1[20];
  char codigo[20],codigo1[20];
  int populacao, pontoturisticos, populacao1, pontoturisticos1, opcao;
  float km, pib,km1, pib1;
  
  // Cadastro das Cartas:
  // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
  // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
  
  printf("*****EL TRUNFO *****\n");
  printf("Escolha uma das seguintes opcoes:\n");
  printf("1.Jogar\n");
  printf("2.Regras do Jogo\n");
  printf("3.Sair\n");
  scanf("%d", &opcao);
switch (opcao)
{
case 1:

  
printf("Informe o estado:");
scanf("%s",estado);

printf("digite o nome da cidade: ");
  scanf("%s",cidade);
 
  printf("Infome o código da carta: ");
 scanf("%s", codigo );
 
 printf("Informe o numero da população: ");
 scanf("%d",&populacao);
 
 printf("Quantos pontos turisticos a cidade posssui?");
 scanf("%d",&pontoturisticos);
 
 printf("Informe o valor do pib: ");
 scanf("%f", &pib);
 
 printf("Quan o tamanho em km?\n ");
 scanf("%f",&km);



 printf("digite o nome da cidade1: ");
 scanf("%s",cidade1);
 

 printf("Infome o código da carta2: ");
scanf("%s", codigo1 );


printf("Informe o estado1:");
scanf("%s",estado1);


printf("Informe o numero da população1: ");
scanf("%d",&populacao1);


printf("Quantos pontos turisticos1 a cidade posssui?");
scanf("%d",&pontoturisticos1);


printf("Informe o valor do pib1: ");
scanf("%f", &pib1);


printf("Quan o tamanho em km1? ");
scanf("%f",&km1);

float dp =(float)(populacao/km);
float pbc = (float)(pib/populacao);
float dp1 = (float)(populacao1/km1);
float pbc1 = (float)(pib1/populacao1);
float SuperPoder = ((float)populacao+km+pib+(float)+pbc+dp);
float SuperPoder1 =((float)+km1+pib1+(float)+pbc1+dp1);
// impressao da carta 01

printf("carta 1\n");
printf("O estado é: %s\n", estado);
printf(" o código é: %s\n",codigo);
printf("A cidade informada é: %s\n ",cidade);
printf("A população é de: %d pessoas \n", populacao);
printf("O tamanho é de %f km \n", km);
printf("O pib é: %f\n",pib);
printf("A cidade possui %d pontos turisticos \n", pontoturisticos);
printf("a densidade populacional é de %f\n , por km.", dp);
printf("O pib per capita é de: R$ %f por pessoa\n", pbc);
printf("o Super Poder da carta 1 e: %f\n", SuperPoder);
//impressao carta02

printf("Carta 2\n");
printf("O estado é: %s\n", estado1);
printf(" o código é: %s\n",codigo1);
printf("A cidade informada é: %s\n ",cidade1);
printf("A população é de: %d pessoas \n", populacao1);
printf("O tamanho é de %f km \n", km1);
printf("O pib é: %f\n",pib1);
printf("A cidade possui %d pontos turisticos \n", pontoturisticos1);
printf("a densidade populacional é de %f\n , por km.", dp1);
printf("O pib per capita é de: R$ %f por pessoa\n", pbc1);
printf("O super Poder da carta 2 e: %f\n", SuperPoder1);

int cidadeMaior = (populacao>populacao1);
int populacaoMaior = (populacao>populacao1);
int pibmaior = (pib>pib1);
int densMenor =(dp<dp1);
int ptm = (pontoturisticos>pontoturisticos1);
printf(" A populacao da carta 1 %d e maior que da carta 2 %d, %d\n ", populacao, populacao1, cidadeMaior);
//printf("A populacao da %d, e maio do que a %d", populacao, populacao1,populacaoMaior);
printf("o pib da primeira carta e maio que da segunda %d\n", pibmaior);
printf("A densidade populacional da primeira carta e menor que da segunda, %d\n",densMenor);
printf("O numero de pontos turisticos da primeira carta e maior que da segunda, %d\n", ptm);

if (populacao>populacao1)
{
 printf("A Populacao da carta 1 é maior que a populacao da carta 2.\n");
}else{
printf("A popupacao da carta 2 é maior\n");

}
if (pontoturisticos>pontoturisticos1)
{
  printf("A carta 1 venceu o numero de pontos turisticos\n");
}else{
printf("A carta 2 tem mais pontos turisticos\n");

}

  break;
  case 2:
  printf("Bem vindo as regras do jogo\n");
 break;

 case 3:
  printf("sair\n");
 break;

default:
printf("Opcao invalida.\n");
  break;

}




/* (população, área, PIB, número de pontos turísticos, PIB per capita e o
 inverso da densidade populacional – quanto menor a densidade, maior o "poder").*/
  // Exibição dos Dados das Cartas:
  // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
  // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  return 0;
}

