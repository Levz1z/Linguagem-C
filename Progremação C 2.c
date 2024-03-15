#include <stdio.h>
                                                                                                                                                                                                                                                                                                                         
int main() {
	// Declarando variaveis.
	char nome[200] = "Marta"; // cadeia
	char sexo = 'F'; // caracter
	int idade =20; // inteiro
	float peso = 58.400; //Real
	
	// Solicitando informções para o u´suario.
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	fflush(stdin); // Limpa a cache de input.
	
	printf("Digite seu exo - M ou F: ");
	scanf("%c",&sexo);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	
	//Exibindo Resultados.
	printf("\n====Exibindo Resultados ====\n"); // %s string
	printf("Nome: %s \n", nome); 
	printf("Sexo: %c \n", sexo);
	printf("Idade: %i \n", idade);
	printf("Peso: %f \n", peso);
	
	
	return 0;

}
