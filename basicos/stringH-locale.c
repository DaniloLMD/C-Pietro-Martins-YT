#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 20

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	//strcpy - copia o conteudo da segunda string para a primeira
	char string1[n] = {"Mensagem 1"};
	char string2[n] = {"Mensagem 2"};
	
	puts(string1);
	puts(string2);
	
	strcpy(string1, string2);
	puts(string1);
	puts(string2);
	
	printf("\n\n\n");
	
	//strcat - concatena 2 strings
	char primeira[n] = {"Hello"};
	char segunda[n] = {" World!"};
	puts(primeira);
	puts(segunda);
	strcat(primeira, segunda);
	puts(primeira);
	puts(segunda);
	
	
	printf("\n\n\n\n");
	
	//strlen -> retorna o tamanho do texto
	printf("Digite algo:\n");
	char texto[n];
	gets(texto);
	int quantidade = strlen(texto);
	int i;
	printf("Quantidade de letras digitadas: %d\n\n", quantidade);
	
	printf("Imprimindo o texto letra por letra: \n");
	for (i = 0; i < quantidade; i++){
		printf("%d -> %c\n", i + 1, texto[i]);
	}
	
	printf("\n\n\n");
	fflush(stdin);
	
	
	//strcmp -> retorna 0 se as strings forem iguais
	char senha[n] = {"senha"};
	char usuario[n];
	printf("Senha: ");
	gets(usuario);
	int resultado = strcmp(senha, usuario);
	if (!0){
		printf("Senha aceita!");
	}else{
		printf("Senha inválida!");
	}
	printf("\n%d", resultado);
	
}
