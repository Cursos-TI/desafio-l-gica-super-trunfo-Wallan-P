#include <stdio.h>

int main(){

//primeira carta
int num, num2 ;
char estado[5];
char codigo[8];
char NomeCidade[8];
long int populacao, soma,soma2;
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
    scanf(" %s",&estado);
    
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
    scanf(" %s",&estado2);
    

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

   //menu;
   
    
    
   printf("\n\necolha dois atributos. Os atributos disponíveis são:\n");
   printf("1.Populacao\n");
   printf("2.Area\n");
   printf("3.PIB\n");
   printf("4.Numeros de Pontos Turisticos\n");
   printf("5.Densidade Populacional\n");

   scanf("%d %d",&num, &num2 );

// verificando atubutos;
   if (num == num2 ){

    printf("dois atributos iguais\n");
    return 0;
   };


 
   switch (num)
   {
   
   case 1:

   if (populacao > populacao2){


    printf("\ncarta 1---%s (%s) venceu!\n População %ld  ",NomeCidade,estado,populacao);
    printf("\ncarta 2---%s (%s) perdeu!\n População %ld  ",NomeCidade2,estado2,populacao2);
    soma += populacao;
    soma2 += populacao2;

}


        else if (populacao < populacao2){

            printf("\ncarta 2---%s (%s) venceu!\n População %ld  ",NomeCidade2,estado2,populacao2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %ld  ",NomeCidade,estado,populacao);
            soma2 += populacao2;
            soma += populacao;

        }

            else{

                printf("empate!");
                soma2 += populacao2;
                soma += populacao;

            }
    break;


    case 2:
    if (Area > Area2){

        printf("\ncarta 1---%s (%s) venceu!\n População %f  ",NomeCidade,estado,Area);
        printf("\ncarta 2---%s (%s) perdeu!\n População %f  ",NomeCidade2,estado2,Area2);
        soma +=Area;
        soma2 +=Area2;
    }
    
        else if(Area < Area2){
    
            printf("\ncarta 2---%s (%s) venceu!\n População %f  ",NomeCidade2,estado2,Area2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %f  ",NomeCidade,estado,Area);
            soma2 +=Area2;
            soma +=Area;

        }

            else{

                printf("empate!");
                soma2 +=Area2;
                soma +=Area;

            }
    break;

    case 3:
    if (PIB > PIB2){

        printf("\ncarta 1---%s (%s) venceu!\n População %f  ",NomeCidade,estado,PIB);
        printf("\ncarta 2---%s (%s) perdeu!\n População %f  ",NomeCidade2,estado2,PIB2);
        soma +=PIB;
        soma2 +=PIB2;

    }

        else if (PIB < PIB2){
    
            printf("\ncarta 2---%s (%s) venceu!\n População %f  ",NomeCidade2,estado2,PIB2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %f  ",NomeCidade,estado,PIB);
            soma2 +=PIB2;
            soma +=PIB;

        }

            else{

                printf("empate!");
                soma2 +=PIB2;
                soma +=PIB;
           
            }
    break;

    case 4:
    if (NumerosdePontosTuristicos > NumerosdePontosTuristicos2){

        printf("\ncarta 1---%s (%s) venceu!\n População %d  ",NomeCidade,estado,NumerosdePontosTuristicos);
        printf("\ncarta 2---%s (%s) perdeu!\n População %d  ",NomeCidade2,estado2,NumerosdePontosTuristicos2);
        soma +=NumerosdePontosTuristicos;
        soma2 +=NumerosdePontosTuristicos2;
    }
    
        else if(NumerosdePontosTuristicos < NumerosdePontosTuristicos2){
    
            printf("\ncarta 2---%s (%s) venceu!\n População %d  ",NomeCidade2,estado2,NumerosdePontosTuristicos2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %d  ",NomeCidade,estado,NumerosdePontosTuristicos);
            soma2 +=NumerosdePontosTuristicos2;
            soma +=NumerosdePontosTuristicos;
    
        }


            else{

                printf("empate!");
                soma2 +=NumerosdePontosTuristicos2;
                soma +=NumerosdePontosTuristicos;
        
            
           
            }
    break;

    case 5:
    if (DensidadePopulacional < DensidadePopulacional2){

        printf("\ncarta 1---%s (%s) venceu!\n População %f  ",NomeCidade,estado,DensidadePopulacional);
        printf("\ncarta 2---%s (%s) perdeu!\n População %f  ",NomeCidade2,estado2,DensidadePopulacional2);
        soma +=DensidadePopulacional;
        soma2 +=DensidadePopulacional2;
    
    }
    
        else if(DensidadePopulacional > DensidadePopulacional2){
    
            printf("\ncarta 2---%s (%s) venceu!\n População %f  ",NomeCidade2,estado2,DensidadePopulacional2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %f  ",NomeCidade,estado,DensidadePopulacional);
            soma2 +=DensidadePopulacional2;
            soma +=DensidadePopulacional;

        }

            else{

                printf("empate!");
                soma2 +=DensidadePopulacional2;
                soma +=DensidadePopulacional;
            
           
            }
    break;

   
   default:
   printf("opção invalida\n");
    break;
   }



   switch (num2)
   {
   
   case 1:

   if (populacao > populacao2){


    printf("\ncarta 1---%s (%s) venceu!\n População %ld  ",NomeCidade,estado,populacao);
    printf("\ncarta 2---%s (%s) perdeu!\n População %ld  ",NomeCidade2,estado2,populacao2);
    soma += populacao;
    soma2 += populacao2;

}


        else if (populacao < populacao2){

            printf("\ncarta 2---%s (%s) venceu!\n População %ld  ",NomeCidade2,estado2,populacao2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %ld  ",NomeCidade,estado,populacao);
            soma2 += populacao2;
            soma += populacao;

        }

        else{

            printf("empate!");
            soma2 += populacao2;
            soma += populacao;


        }
    break;


    case 2:
    if (Area > Area2){

        printf("\ncarta 1---%s (%s) venceu!\n População %f  ",NomeCidade,estado,Area);
        printf("\ncarta 2---%s (%s) perdeu!\n População %f  ",NomeCidade2,estado2,Area2);
        soma +=Area;
        soma2 +=Area2;

    }

    
        else if(Area < Area2){
    
            printf("\ncarta 2---%s (%s) venceu!\n População %f  ",NomeCidade2,estado2,Area2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %f  ",NomeCidade,estado,Area);
            soma2 +=Area2;
            soma +=Area;

        }

        else{

            printf("empate!");
            soma2 +=Area2;
            soma +=Area;


        }
    break;

    case 3:
    if (PIB > PIB2){

        printf("\ncarta 1---%s (%s) venceu!\n População %f  ",NomeCidade,estado,PIB);
        printf("\ncarta 2---%s (%s) perdeu!\n População %f  ",NomeCidade2,estado2,PIB2);
        soma +=PIB;
        soma2 +=PIB2;

    }

        else if (PIB < PIB2){
    
            printf("\ncarta 2---%s (%s) venceu!\n População %f  ",NomeCidade2,estado2,PIB2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %f  ",NomeCidade,estado,PIB);
            soma2 +=PIB2;
            soma +=PIB;

        }

        else{

            printf("empate!");
            soma2 +=PIB2;
            soma +=PIB;

           
        }
    break;

    case 4:
    if (NumerosdePontosTuristicos > NumerosdePontosTuristicos2){

        printf("\ncarta 1---%s (%s) venceu!\n População %d  ",NomeCidade,estado,NumerosdePontosTuristicos);
        printf("\ncarta 2---%s (%s) perdeu!\n População %d  ",NomeCidade2,estado2,NumerosdePontosTuristicos2);
        soma +=NumerosdePontosTuristicos;
        soma2 +=NumerosdePontosTuristicos2;

    }

    
        else if(NumerosdePontosTuristicos < NumerosdePontosTuristicos2){
    
            printf("\ncarta 2---%s (%s) venceu!\n População %d  ",NomeCidade2,estado2,NumerosdePontosTuristicos2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %d  ",NomeCidade,estado,NumerosdePontosTuristicos);
            soma2 +=NumerosdePontosTuristicos2;
            soma +=NumerosdePontosTuristicos;
    
        }


            else{

                printf("empate!");
                soma2 +=NumerosdePontosTuristicos2;
                soma +=NumerosdePontosTuristicos;
        
            
           
            }
    break;

    case 5:
    if (DensidadePopulacional < DensidadePopulacional2){

        printf("\ncarta 1---%s (%s) venceu!\n População %f  ",NomeCidade,estado,DensidadePopulacional);
        printf("\ncarta 2---%s (%s) perdeu!\n População %f  ",NomeCidade2,estado2,DensidadePopulacional2);
        soma +=DensidadePopulacional;
        soma2 +=DensidadePopulacional2;
    
    }
    
        else if(DensidadePopulacional > DensidadePopulacional2){
    
            printf("\ncarta 2---%s (%s) venceu!\n População %f  ",NomeCidade2,estado2,DensidadePopulacional2);
            printf("\ncarta 1---%s (%s) perdeu!\n População %f  ",NomeCidade,estado,DensidadePopulacional);
            soma2 +=DensidadePopulacional2;
            soma +=DensidadePopulacional;
        }
            else{

                printf("empate!");
                soma2 +=DensidadePopulacional2;
                soma +=DensidadePopulacional;
            
           
            }
    break;

   
   default:
   printf("opção invalida\n");
    break;
   }

   //soma dos atributos;
   
   printf("comparação da soma:\n");

   printf("soma da carta 1 -- %ld\n\nsoma da carta 1 -- %ld\n",soma,soma2);


   if (soma < soma2){

    printf("\ncarta 1---%s (%s) venceu!\n População %ld  ",NomeCidade,estado,soma);
    printf("\ncarta 2---%s (%s) perdeu!\n População %ld ",NomeCidade2,estado2,soma2);
   
}

    else if(soma > soma2){

        printf("\ncarta 2---%s (%s) venceu!\n População %ld  ",NomeCidade2,estado2,soma);
        printf("\ncarta 1---%s (%s) perdeu!\n População %ld  ",NomeCidade,estado,soma2);
       
    }
        else{

            printf("empate!");
            
    
   
        }

 

return 0;
}
