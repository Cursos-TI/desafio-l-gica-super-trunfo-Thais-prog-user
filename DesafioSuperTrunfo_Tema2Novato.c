#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Definições de variáveis para cada atributo das cidades.
    char estado1 = 'A', estado2 = 'B';
    char codigo1[10] = "A01", codigo2[10] = "B01";
    char nomeCidade1[20] = "Contagem", nomeCidade2[20] = "Gramado";
    float populacao1 = 621.863, populacao2 = 40.134;
    float area1 = 194.746, area2 = 239.341;
    float pib1 = 36.479, pib2 = 2.658;
    int pontosTuristicos1 = 6 , pontosTuristicos2 = 35;
    float quociente1 = populacao1 / area1;
    float quociente2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
	float pibPerCapita2 = pib2 / populacao2; 

    
    // Exibição dos Dados das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %.3f\n", populacao1);
    printf("Area ocupada: %.3f km²\n", area1);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", quociente1);
    printf("PIB per capita: %.2f\n" , pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %.3f\n", populacao2);
    printf("Area ocupada: %.3f km²\n", area2);
    printf("PIB: R$ %.2f milhoes de reais\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n" , quociente2);
    printf("PIB per capita: %.2f\n" , pibPerCapita2);
    
    
    if(pib1 < pib2){
		printf("\nPIB de Contagem e menor do que o PIB de Gramado\n");
	}
	
	
	//Início dos resultados das comparações das cartas
	printf("\n*** Resultado das comparacoes ***\n");
    printf("\nTema: Populacao\n");
    
    printf("Carta 1 - Contagem (MG): %.2f\n" , populacao1);
    printf("Carta 2 - Gramado (RS): %.2f\n" , populacao2);
    if(populacao1 > populacao2){
    	printf("Carta 1 venceu!\n");
	}
	
	printf("\nTema: Area ocupada\n");
	printf("Carta 1 - Contagem (MG): %.2f\n" , area1);
    printf("Carta 2 - Gramado (RS): %.2f\n" , area2);
    if(area1 > area2){
		printf("Carta 1 venceu!\n");
	}else {
		printf("Carta 2 venceu!\n");
	}
	
	printf("\nTema: PIB\n");
	printf("Carta 1 - Contagem (MG): %.2f\n" , pib1);
    printf("Carta 2 - Gramado (RS): %.2f\n" , pib2);
    if(pib1 > pib2){
		printf("Carta 1 venceu!\n");
	}else {
		printf("Carta 2 venceu!\n");
	}

	printf("\nTema: Quantidade de pontos turisticos:\n");
	printf("Carta 1 - Contagem (MG): %d\n" , pontosTuristicos1);
	printf("Carta 2 - Gramado (RS): %d\n" , pontosTuristicos2);
	if(pontosTuristicos1 > pontosTuristicos2){
		printf("Carta 1 venceu!\n");
	}else{
		printf("Carta 2 venceu!\n");
	}
	
	printf("\nDensidade Populacional:\n");
	printf("Carta 1 - Contagem (MG): %.2f\n" , quociente1);
	printf("Carta 2 - Gramado (RS): %.2f\n" , quociente2);
	if(quociente1 < quociente2){
		printf("Carta 1 venceu!\n");
	}else{
		printf("Carta 2 venceu!\n");
	}
	
	printf("\nTema: PIB per capita:\n");
	printf("Carta 1 - Contagem (MG): %.2f\n" , pibPerCapita1);
	printf("Carta 2 - Gramado (RS): %.2f\n" , pibPerCapita2);
	if(pibPerCapita1 > pibPerCapita2){
		printf("Carta 1 venceu!\n");
	}else{
		printf("Carta 2 venceu!\n");
	}
	
	
    return 0;
}