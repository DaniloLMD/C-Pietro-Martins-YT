#include <stdio.h>

int main(){	
	char nome[7];
	
	//gets - mais simples, n�o limita tamanho
	gets(nome);
	puts(nome);
	fflush(stdin);
	
	//fgets - mais correto
	fgets(nome, 7, stdin);
	puts(nome);
}
