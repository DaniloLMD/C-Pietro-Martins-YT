#include <stdio.h>

int main(){	
	char nome[7];
	
	//gets - mais simples, não limita tamanho
	gets(nome);
	puts(nome);
	fflush(stdin);
	
	//fgets - mais correto
	fgets(nome, 7, stdin);
	puts(nome);
}
