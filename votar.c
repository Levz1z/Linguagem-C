# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	//variaveis
	int idade;
	
	
	//Solicitando informa��es para o usuario
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	//Exibindo resultados
	
	
	
	if(idade <  18 || idade > 65 ) {
		printf(" N�o � obrigado a votar! ");
		
		}else {
		printf("Obrigado a votar!");
	} 
	
	return 0;
		
	}

