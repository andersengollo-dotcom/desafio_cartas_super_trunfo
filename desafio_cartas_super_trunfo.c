#include <stdio.h>

int main(){
//Carta 1 - dados
char letra_estado1;
char codigo_da_carta1[50];
char nome_da_cidade1[50];
unsigned long int populacao1;
float area1;
float PIB1;
int pontos_turisticos1;
float densidadepop1;
float pibpercapta1;
float SuperPoder1;

//Carta 2 - dados
char letra_estado2;
char codigo_da_carta2[50];
char nome_da_cidade2[50];
unsigned long int populacao2;
float area2;
float PIB2;
int pontos_turisticos2;
float densidadepop2;
float pibpercapta2;
float SuperPoder2;

printf(">>Insira os dados da CARTA 1:\n");
printf("Digite a letra do estado (de A a H):\n");
scanf(" %c", &letra_estado1);

printf("Digite o código da Carta (A01, B01, B02, etc): \n");
scanf("%s", &codigo_da_carta1);

printf("Digite o Nome da cidade: \n");
scanf("%s", &nome_da_cidade1);

printf("Digite a população da cidade: \n");
scanf("%lu", &populacao1);

printf("Digite a área da cidade (em Km²): \n");
scanf("%f", &area1);

printf("Digite o PIB (em reais): \n");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turisticos1);

printf("\n--------------------------------\n\n");

printf(">>Insira os dados da CARTA 2:\n");

printf("Digite a letra do estado (de A a H):\n");
scanf(" %c", &letra_estado2);

printf("Digite o código da Carta (A01, B01, B02, etc): \n");
scanf("%s", &codigo_da_carta2);

printf("Digite o Nome da cidade: \n");
scanf("%s", &nome_da_cidade2);

printf("Digite a população da cidade: \n");
scanf("%lu", &populacao2);

printf("Digite a área da cidade (em Km²): \n");
scanf("%f", &area2);

printf("Digite o PIB (em reais): \n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turisticos2);

//calculando o vlaor das variáveis q dependem de outras = PIB per capta e Densidade Populacional 
pibpercapta1 = (float) PIB1 / populacao1;
pibpercapta2 = (float) PIB2 / populacao2;
densidadepop1 = (float) populacao1 / area1;
densidadepop2 = (float) populacao2 / area2;

//calculando o SuperPower
SuperPoder1 = (float)populacao1 + area1 + PIB1 + (float)pontos_turisticos1 + pibpercapta1 + (densidadepop1 * (-1));
SuperPoder2 = (float)populacao2 + area2 + PIB2 + (float)pontos_turisticos2 + pibpercapta2 + (densidadepop2 * (-1));


//imprimindo o cadastro das cartas
printf("\nCadastro realizado. Confira os dados abaixo: \n");
printf("\n <<< CARTA 1 >>>\n");
printf("- Letra do Estado: %c\n\n", letra_estado1);
printf("- Código da Carta: %s\n\n", codigo_da_carta1);
printf("- Nome da cidade: %s\n\n", nome_da_cidade1);
printf("- População: %lu habitantes\n\n", populacao1);
printf("- Área: %.2fKm²\n\n", area1);
printf("- PIB (em reais): R$ %.2f \n\n", PIB1);
printf("- Quantidade de pontos turísticos: %d\n\n", pontos_turisticos1);
printf("- Densidade populacional: %.2fhab/km²\n\n", densidadepop1);
printf("- PIB Per Capta: R$ %.2f\n\n", pibpercapta1);
printf("- Super Poder: %.2f\n\n", SuperPoder1);

printf("\n <<< CARTA 2 >>>\n");
printf("- Letra do Estado: %c\n\n", letra_estado2);
printf("- Código da Carta: %s\n\n", codigo_da_carta2);
printf("- Nome da cidade: %s\n\n", nome_da_cidade2);
printf("- População: %lu habitantes\n\n", populacao2);
printf("- Área: %.2fKm²\n\n", area2);
printf("- PIB (em reais): R$ %.2f \n\n", PIB2);
printf("- Quantidade de pontos turísticos: %d\n\n", pontos_turisticos2);
printf("- Densidade populacional: %.2f hab/km²\n\n", densidadepop2);
printf("- PIB Per Capta: R$ %.2f\n\n", pibpercapta2);
printf("- Super Poder: %.2f\n\n", SuperPoder2);


//comparando os dados
printf("------------ COMPARAÇÃO -------------\n1 = Carta 1 vence\n0 = Carta 2 vence\n\n");

/*
//comparações no prinf
printf("- População: %d\n", populacao1 > populacao2);
printf("- Área: %d\n", area1 > area2);
printf("- PIB: %d\n", PIB1 > PIB2);
printf("- Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
printf("- Densidade Populacional: %d\n", densidadepop1 < densidadepop2);
printf("- PIB per Capta: %d\n", pibpercapta1 > pibpercapta2);
printf("- Super Poder: %d\n", SuperPoder1 > SuperPoder2);
*/

//comparações criando variável
int Cpopulacao = populacao1 > populacao2;
int Carea = area1 > area2;
int CPIB = PIB1 > PIB2;
int Cpontosturisticos = pontos_turisticos1 > pontos_turisticos2;
int Cdendidadepop = densidadepop1 < densidadepop2;
int CPIBpercapta = pibpercapta1 > pibpercapta2;
int CSuperPoder = SuperPoder1 > SuperPoder2;

//resumindo os dados da disputa
printf("<<< DADOS DA DISPUTA >>>\n");
printf("(%d) POPULAÇÃO: %lu x %lu\n", Cpopulacao, populacao1, populacao2);
printf("(%d) ÁREA: %.2f x %.2f\n", Carea, area1, area2);
printf("(%d) PIB: %.2f x %.2f\n", CPIB, PIB1, PIB2);
printf("(%d) PONTOS TURÍSTICOS: %d x %d\n", Cpontosturisticos, pontos_turisticos1, pontos_turisticos2);
printf("(%d) DENSIDADE POPULACIONAL: %.2f x %.2f\n", Cdendidadepop, densidadepop1, densidadepop2);
printf("(%d) PIB PER CAPTA: %.2f x %.2f\n", CPIBpercapta, pibpercapta1, pibpercapta2);
printf("(%d) SUPER PODER: %.0f x %.0f\n\n", CSuperPoder, SuperPoder1, SuperPoder2);

//exibindo o placar
printf("PLACAR FINAL:\n");
printf("%d - %d - %d - %d - %d - %d - %d\n\n-----------------------\n",
Cpopulacao,
Carea,
CPIB,
Cpontosturisticos,
Cdendidadepop,
CPIBpercapta,
CSuperPoder
);

return 0;
}
