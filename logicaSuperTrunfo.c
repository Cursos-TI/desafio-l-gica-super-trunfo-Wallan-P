#include <stdio.h>

int main(){

//primeira carta

char estado[5];
char codigo[8];
char NomeCidade[8];
long int populacao;
float Area;
float PIB;
int NumerosdePontosTuristicos;
float DensidadePopulacional;
float PIBperCapita;
float SuperPoder;

//segunda carta

char estado2[5];
char codigo2[8];
char NomeCidade2[8];
long int populacao2;
float Area2;
float PIB2;
int NumerosdePontosTuristicos2;
float DensidadePopulacional2;
float PIBperCapita2;
float SuperPoder2;

//primeira carta

printf("vamos montar os dados da primeira carta   \n\n");

    printf("insira a letra do estado da carta:  ");
    scanf(" %c",&estado);
    
    printf("insira o codigo da carta:  ");
    scanf("%s",codigo);

    printf("insira o nome da cidade:  ");
    scanf("%s",NomeCidade);

    printf("insira a população da carta:  ");
    scanf(" %ld",&populacao);

    printf("insira a Área da carta em metros:  ");
    scanf(" %f",&Area);

    printf("insira o PIB da carta:  ");
    scanf(" %f",&PIB);

    printf("insira o Numeros de Pontos Turisticos da carta:  ");
    scanf(" %d",&NumerosdePontosTuristicos);

    


    //segunda carta

    printf("\n\nvamos montar os dados da segunda carta   \n\n");

    printf("insira a letra do estado da carta:  ");
    scanf(" %c",&estado2);
    

    printf("insira o codigo da carta:  ");
    scanf(" %s",codigo2);

    printf("insira o nome da cidade:  ");
    scanf(" %s",NomeCidade2);

    printf("insira a população da carta:  ");
    scanf(" %ld",&populacao2);

    printf("insira a Área da carta:  ");
    scanf(" %f",&Area2);

    printf("insira o PIB da carta:  ");
    scanf(" %f",&PIB2);

    printf("insira o Numeros de Pontos Turisticos da carta:  ");
    scanf(" %d",&NumerosdePontosTuristicos2);


    //Calculando Densidade Populacional; 

    DensidadePopulacional = (float) populacao / Area;
    DensidadePopulacional2 = (float) populacao2 / Area2;

    // //Calculando PIB per Capita; 

    PIBperCapita = (float) PIB / populacao;
    PIBperCapita2 = (float) PIB2 / populacao2;

    //super poder;

    SuperPoder = populacao + Area + PIB + NumerosdePontosTuristicos + PIBperCapita - DensidadePopulacional;
    SuperPoder2 = populacao2 + Area2 + PIB2 + NumerosdePontosTuristicos2 + PIBperCapita2 - DensidadePopulacional2;

    //comparando;



   



    printf(" \n\n Comparação de atribuito (população): \n\n");



    printf("catra 1---%s (%s) tem: %ld\n",NomeCidade,estado,populacao);
    printf("catra 2---%s (%s) tem: %ld\n\n",NomeCidade2,estado2,populacao2);


    if (populacao > populacao2){

        printf("catra 1---%s (%s) venceu!  ",NomeCidade,estado);

   }
   
    else{

        printf("catra 1---%s (%s) venceu!  ",NomeCidade2,estado);
    }

    
   
return 0;
}
