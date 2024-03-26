# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	//declarando variaveis
	char resultado[200];
	
	float nota, soma = 0, media;
	int i;
	
	for (i = 1; i <= 2; i++) {
		do{
			printf("Digite a %i nota: ", i);
			scanf("%f",&nota);
		} while (nota < 0 || nota > 10);
		
		
		soma += nota;
	}
		
		
		
		media = soma / --i;
		
		
//passando informações
	
	if (media >= 7 ) {
		strcpy(resultado, "Aprovado.");
	
	} else if (media >= 4 ) {
		strcpy(resultado, "Recuperação.");
	}else { strcpy(resultado, "Reprovado.");
	strcpy(resultado, "Reprovado.");

	}
	
	printf("\n==== xibido resultado ==== \n");
	printf("Média; %.1f \n", media);
	printf("Resultado: %s \n", resultado);
	
	return 0;
	  
	

	
	
}
