# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	//declarando variaveis
	
	float nota, soma = 0, media;
	int i;
	
	for (i = 1; i <= 2; i++) {
		do{
			printf("Digite a %i nota: ", i);
			scanf("%f",&nota);
		} while (nota < 0 || nota > 10);
		
		soma += nota;
		
	}
	
	media = soma / 2;
	
	printf("\n==== Exibindo Resultados média ====\n");
	printf("Média: %.1f \n", media);
	
	return 0
	
}
