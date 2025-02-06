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
long int SomaSuperPoderes;


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
densidadePopulacional1 = (double)populacao1 / area1;
PIBperCapita1 = PIB1 * 1e9/ populacao1;
densidadePopulacional2 = (double)populacao2 / area2;
PIBperCapita2 = PIB2 * 1e9/ populacao2;

SomaSuperPoderes = populacao1 + area1 + PIB1 + PontosTuristicos1;

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
printf("Densidade Populacional: %.2f\n" , densidadePopulacional1);
printf("PIB per Capita: %.2f\n" , PIBperCapita1);
printf("A soma dos super Poderes é: %.2ld\n" , SomaSuperPoderes);

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
printf("Densidade Populacional: %.2f\n" , densidadePopulacional2);
printf("PIB per Capita: %.2f\n" , PIBperCapita2);
printf("A soma dos super Poderes é: %.2ld\n" , SomaSuperPoderes);

SomaSuperPoderes = populacao2 + area2 + PIB2 + PontosTuristicos2;

// Vamos comparar
printf("\n------Comparação de Cartas------\n");
printf("Carta 1 - Estado: %s , código: %s, População: %ld, PIB: %f, Pontos Turísticos: %d\n" , estado1, codigodaCarta1, populacao1, PIB1, PontosTuristicos1);
printf("Carta 2 - Estado: %s,  código: %s , População: %ld, PIB: %f, Pontos Turísticos: %d\n" , estado2, codigodaCarta2, populacao2, PIB2, PontosTuristicos2);

// condicao a ser utilizada para comparação

if(populacao1 > populacao2){
    printf("Cidade 1 venceu, com uma população de: %ld\n" , populacao1);
} else {
    printf("Cidade 2 venceu, com uma população de: %ld\n" , populacao2);
} if(area1 > area2){
    printf("Cidade 1 venceu, com uma área de: %.0f M²\n" , area1);
} else{
    printf("Cidade 2 venceu, com uma área de: %.0f M²\n" , area2);

} if(PIB1 > PIB2){
 printf("Cidade 2 venceu, com um PIB de: %f bilhões\n" , PIB1);

} else{
      printf("Cidade 2 venceu, com um PIB de: %f bilhões\n" , PIB2);

}if(PontosTuristicos1 > PontosTuristicos2){
    printf("Cidade 1 venceu, com uma quantidade de:  %d pontos turísticos\n" , PontosTuristicos1);
}else{
    printf("Cidade 2 venceu, com uma quantidadede de: %d pontos turísticos\n" , PontosTuristicos2);
} if(densidadePopulacional1 < densidadePopulacional2){
     printf("Cidade 1 venceu, com uma densidade populacional de: %.0f\n" , densidadePopulacional1);
}else{
     printf("Cidade 2 venceu, com uma densidade populacional de: %.0f\n" , densidadePopulacional2);
} if(PIBperCapita1 > PIBperCapita2){
    printf("Cidade 2 venceu, com um PIB per Capita de: %.2f\n" , PIBperCapita1);
}else{
    printf("Cidade 2 venceu, com um PIB per Capita de: %.2f\n", PIBperCapita2);
}

return 0;
}
    

