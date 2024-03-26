# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	//declarando varioveis
	
	int i;
	float notas, soma = 0;
	  
	  //solicitando informações para o usuário
	  
	  for(i = 1; i <=3 ; i ++) {
	  	printf("Digite sua %d nota: ", i);
	  	scanf("%f", &notas);
	  	
	  	soma += notas;
	  	
		  }
		  
		  //realizando calculos
		  
		  float media = soma / 3;
		  
		  //Exibindo resultados
		  
		  printf("==== Exibindo Resultados ====");
		  printf("\nSua Média é: %2.f \n", media);
		  if(media >= 7){
		  	printf("Parabéns você foi aprovado!");
		  	
		  }else if (media < 7 && media > 4) {
		  	printf("Lamentamos você está de recuperação!");
		  	
		  }else{
		  	printf("Infelizmente você foi reprovado!");
		  	
		  }
		  
		  return 0;
		  
	}
		  
