# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>


int main() {
	// Acentos nas palavras
	setlocale(LC_ALL, "portuguese");
	
	//Variaveis
	char loginSalvo[200] = "Levi";
	char senhaSalva[200] = "123";
	char login[200];
	char senha[200];
	
	//Solicitando informações do usuario
	
	printf("Digite o login: ");
	scanf("%s",&login);
	
	printf("Digite sua senha: ");
	scanf("%s", &senha);
	
	if (strcmp(login, loginSalvo) == 0 &&  strcmp(senha, senhaSalva) == 0) {
		printf("Bem vindo!");
		
	}else {
		printf("Acesso negado !");
	}
	
	
	
	return 0;
}
