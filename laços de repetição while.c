# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	//declarando varioveis
	
	float nota;
	
	  
	  //solicitando informa��es para o usu�rio

do {

	  
	printf("Digite sua nota: ");
	scanf("%f",&nota);
} while (nota < 0 || nota > 10);

//Exibindo resultados
	printf("\n ==== Exibindo Resultados ====\n");
	printf("Notas: %.1f \n", nota);

return 0;

}
		  
	  
 
		  
	
		  
