#include <stdio.h>

int main() {
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;
    float dp;
    float pibpc;
    float poder1;
    int opcao;

printf("Bem vindo ao jogo super trunfo!\n");
printf("Por favor, cadastre a carta 1.\n");
    printf ("Digite o Estado: \n"); 
    scanf ("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf ("%s", &codigo);

    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao);

    printf ("Digite a Área em km²: \n");
    scanf ("%f", &area);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Digite o Número de pontos turisticos: \n");
    scanf ("%d", &turisticos);

    dp = populacao / area;
    pibpc = pib / populacao;
    poder1 = populacao + area + turisticos + dp + pibpc;








    char estado02[50];
    char codigo02[50];
    char cidade02[50];
    int populacao02;
    float area02;
    float pib02;
    int turisticos02;
    float dp02;
    float pibpc02;
    float poder2;

    printf("Por favor, cadastre a carta 2.\n");

    printf ("Digite o Estado: \n");
    scanf ("%s", &estado02);

    printf("Digite o código da carta: \n");
    scanf ("%s", &codigo02);

    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade02);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao02);

    printf ("Digite a Área em km²: \n");
    scanf ("%f", &area02);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib02);

    printf ("Digite o Número de pontos turísticos: \n");
    scanf ("%d", &turisticos02);

    dp02 = populacao02 / area02;
    pibpc02 = pib02 / populacao02;
    poder2 = populacao02 + area02+ turisticos02 + dp02 + pibpc02;


printf("Ecolha 1  atributo que será usado na comparação.\n");
printf("1. População\n");
printf("2. Área km²\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
printf("7. Poder total\n");
scanf("%d", &opcao);


switch (opcao)
{
case 1:
printf("Você escolheu população.\n");
if (populacao > populacao02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s\n", &estado02);
    printf("Atributo carta 1: %d\n", populacao);
    printf("Atributo carta 2: %d\n", populacao02);
    printf("Carta 1 venceu!\n");

}else if (populacao < populacao02)
{
    printf("Estado 1 é:%s\n", &estado);
    printf("Estado 2 é:%s\n", &estado02);
    printf("Atributo carta 1: %d\n", populacao);
    printf("Atributo carta 2: %d\n", populacao02);
    printf("Carta 2 venceu!\n");
}else  {
    printf("Houve um empate\n");
}
break;
case 2:
printf("Você escolheu Área por km².\n");
if (area > area02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s\n", &estado02);
    printf("Atributo carta 1: %f\n", area);
    printf("Atributo carta 2: %f\n", area02);
    printf("Carta 1 venceu!\n");
}else if (area < area02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %f\n", area);
    printf("Atributo carta 2: %f\n", area02);
    printf("Carta 2 venceu!\n");
}else  {
    printf("Houve um empate\n");
}
break;
case 3:
printf("Você escolheu PIB.\n");
if (pib > pib02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %f\n", pib);
    printf("Atributo carta 2: %f\n", pib02);
    printf("Carta 1 venceu!\n");
}else if (pib < pib02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %f\n", pib);
    printf("Atributo carta 2: %f\n", pib02);
    printf("Carta 2 venceu!\n");
}else  {
    printf("Houve um empate\n");
}
break;
case 4:
printf("Você escolheu pontos turísticos.\n");
if (turisticos > turisticos02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %d\n", turisticos);
    printf("Atributo carta 2: %d\n", turisticos02);
    printf("Carta 1 venceu!\n");
}else if (turisticos < turisticos02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %d\n", turisticos);
    printf("Atributo carta 2: %d\n", turisticos02);
    printf("Carta 2 venceu!\n");
}else  {
    printf("Houve um empate\n");
}
break;
case 5:
printf("Você escolheu Densidade populacional.\n");
if (dp < dp02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %f\n", dp);
    printf("Atributo carta 2: %f\n", dp02);
    printf("Carta 1 venceu!\n");
}else if (dp > dp02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %f\n", dp);
    printf("Atributo carta 2: %f\n", dp02);
    printf("Carta 2 venceu!\n");
}else  {
    printf("Houve um empate\n");
}
break;
case 6:
printf("Você escolheu PIB per capita.\n");
if (pibpc > pibpc02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %f\n", pibpc);
    printf("Atributo carta 2: %f\n", pibpc02);
    printf("Carta 1 venceu!\n");
}else if (pibpc < pibpc02)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %f\n", pibpc);
    printf("Atributo carta 2: %f\n", pibpc02);
    printf("Carta 2 venceu!\n");
}else  {
    printf("Houve um empate\n");
}
break;
case 7:
printf("Você escolheu Poder total.\n");
if (poder1 > poder2)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %f\n", poder1);
    printf("Atributo carta 2: %f\n", poder2);
    printf("Carta 1 venceu!\n");
}else if (poder1 < poder2)
{
    printf("Estado 1 é: %s\n", &estado);
    printf("Estado 2 é: %s \n", &estado02);
    printf("Atributo carta 1: %f\n", poder1);
    printf("Atributo carta 2: %f\n", poder2);
    printf("Carta 2 venceu!\n");
}else  {
    printf("Houve um empate\n");
}
break;
default:
printf("Opção inválida");
}

return 0;

}











