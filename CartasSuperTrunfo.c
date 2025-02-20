#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
     printf("Jogo Super Trunfo\n");

    // Dados das Cartas
char estado1[50] , estado2[50] , cidade1[50] , cidade2[50] , codigodaCarta1[50], codigodaCarta2[50];
long int populacao1, populacao2;
float area1 , PIB1, area2, PIB2;
int PontosTuristicos1, PontosTuristicos2;
float densidadePopulacional1, densidadePopulacional2;
float PIBperCapita1, PIBperCapita2;


      // Entrada de Dados da primeira carta
printf("\n---------------------------\n");
printf("Cadastro da primeira carta");
printf("\n----------------------------\n");

printf("Digite o estado: ");
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
printf("Digite o estado: ");
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

//Saída de dados 1 
printf("\n----------------------\n");
printf("   Saída de dados 1   ");
printf("\n----------------------\n");
printf("Estado: %s\n" , estado1);
printf("Código da carta: %s\n" , codigodaCarta1);
printf("Nome da cidade: %s\n" , cidade1);
printf("População: %ld\n" , populacao1); 
printf("Área: %0.f km²\n" , area1);
printf("PIB: %.0f bilhões de reais\n" , PIB1);
printf("Pontos Turísticos: %d\n" , PontosTuristicos1);

//Saída de dados 2
printf("\n---------------------\n");
printf("  Saída de dados 2  ");
printf("\n--------------------\n");
printf("Estado: %s\n" , estado2);
printf("Código da carta: %s\n" , codigodaCarta2);
printf("Nome da cidade: %s\n" , cidade2);
printf("População: %ld\n" , populacao2); 
printf("Área: %.0f km²\n" , area2);
printf("PIB: %.0f bilhões de reais\n" , PIB2);
printf("Pontos Turísticos: %d\n" , PontosTuristicos2);


return 0;
}
    

