#include <stdio.h>
#include <stdlib.h>


int main(){
     printf("Desafio cadastro das cartas");
    // Dados da primeira carta
char estado1[50] , cidade1[50] , codigodaCarta1[50];
long int populacao1;
float area1;
float PIB1;
int PontosTuristicos1;
float densidadePopulacional1;
float PIBperCapita1;

    // Dados da segunda carta
char estado2[50] , cidade2[50] , codigodaCarta2[50];
long int populacao2;
float area2;
float PIB2;
int PontosTuristicos2;
float densidadePopulacional2;
float PIBperCapita2;

      // Entrada de Dados da primeira carta
printf("\n---------------------------\n");
printf("Cadastro da primeira carta");
printf("\n----------------------------\n");

printf("Digite o estado 1: ");
fgets(estado1, sizeof(estado1), stdin);//Lê o Estado
estado1[strcspn(estado1, "\n")] ='\0';

printf("Digite o cóigo da carta: ");
fgets(codigodaCarta1, sizeof(codigodaCarta1), stdin); // Lê o código
codigodaCarta1[strcspn(codigodaCarta1, "\n")] = '\0';
    

printf("Digite o nome da cidade: ");
fgets(cidade1, sizeof(cidade1), stdin); // Lê o nome da cidade
cidade1[strcspn(cidade1, "\n")] = '\0';
    
printf("Digite o numero de população: ");
scanf("%ld" , &populacao1); // Lê o numero de habitantes
getchar();

printf("Digite a area em (km): ");
scanf("%f" , &area1); // Lê a área
getchar();

printf("Digite o PIB: ");
scanf("%f" , &PIB1); // Lê o PIB 
getchar();

printf("Digite a quantidde de pontos turísticos: ");
scanf("%d" , &PontosTuristicos1); // Lê a quantidade de pontos turísticos
getchar();
printf("Carta cadastrada com sucesso \n");

    // Entrada de dados da segunda carta
printf("\n-----------------------------\n");
printf("Cadastro da segunda carta");
printf("\n-----------------------------\n");
printf("Digite o estado 2: ");
fgets(estado2, sizeof(estado2), stdin);//Lê o Estado
estado2[strcspn(estado2, "\n")] ='\0';

printf("Digite o cóigo da carta: ");
fgets(codigodaCarta2, sizeof(codigodaCarta2), stdin); // Lê o código
codigodaCarta2[strcspn(codigodaCarta2, "\n")] = '\0';
    
printf("Digite o nome da cidade: ");
fgets(cidade2, sizeof(cidade2), stdin); // Lê o nome da cidade
cidade2[strcspn(cidade2, "\n")] = '\0';
    
printf("Digite o numero de população: ");
scanf("%ld" , &populacao2); // Lê o numero de habitantes
getchar();

printf("Digite a area em (km): ");
scanf("%f" , &area2); // Lê a área
getchar();

printf("Digite o PIB: ");
scanf("%f" , &PIB2); // Lê o PIB 
getchar();

printf("Digite a quantidde de pontos turísticos: ");
scanf("%d" , &PontosTuristicos2); // Lê a quantidade de pontos turísticos
getchar();
printf("Carta cadastrada com sucesso\n ");

// Cálculo da densidade populacional e PIB per Capita
densidadePopulacional1 = populacao1 / area1;
PIBperCapita1 = PIB1 * 1e9/ populacao1;
densidadePopulacional2 = populacao2 / area2;
PIBperCapita2 = PIB2 * 1e9/ populacao2;

//Saída de dados 1 
printf("\n----------------------\n");
printf("Estado: %s\n" , estado1);
printf("Código da carta: %s\n" , codigodaCarta1);
printf("Nome da cidade: %s\n" , cidade1);
printf("População: %ld\n" , populacao1); 
printf("Área: %.2f km²\n" , area1);
printf("PIB: %.2f bilhões de reais\n" , PIB1);
printf("Pontos Turísticos: %d\n" , PontosTuristicos1);
printf("Densidade Populacional: %.2f\n" , densidadePopulacional1);
printf("PIB per Capita: %.2f\n" , PIBperCapita1);

//Saída de dados 2
printf("\n----------------------\n");
printf("Estado: %s\n" , estado2);
printf("Código da carta: %s\n" , codigodaCarta2);
printf("Nome da cidade: %s\n" , cidade2);
printf("População: %ld\n" , populacao2); 
printf("Área: %.2f km²\n" , area2);
printf("PIB: %.2f bilhões de reais\n" , PIB2);
printf("Pontos Turísticos: %d\n" , PontosTuristicos2);
printf("Densidade Populacional: %.2f\n" , densidadePopulacional2);
printf("PIB per Capita: %.2f\n" , PIBperCapita2);

// Vamos comparar
printf("\n------Comparação de Cartas------\n");
printf("Carta 1 - Estado: %s , código: %s, População: %ld\n" , estado1, codigodaCarta1, populacao1);
printf("Carta 2 - Estado: %s,  código: %s , População: %ld\n" , estado2, codigodaCarta2, populacao2);

// condicao a ser utilizada para comparação

if(densidadePopulacional1 < densidadePopulacional2){
        printf("Resultado: Carta 1 venceu com a menor densidade populacional\n");
 }else if(densidadePopulacional1 > densidadePopulacional2) {
    printf("Resultado: carta 2 é a vencedora com a menor densidade populacional\n");
 }

 if(populacao1 > populacao2){
    printf("Resultado: carta 1 venceu com a maior população\n");
 }else
    printf("Resultado: carta 2 venceu com a maior população\n");
 }

    

