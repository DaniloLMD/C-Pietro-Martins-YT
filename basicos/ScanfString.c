#include <stdio.h>

int main(){
	
	char nome[10];
	
	// SCANF PADRAO
	printf("Nome (Scanf padrao): ");
	scanf("%s", nome);
	fflush(stdin);
	printf("Resultado: %s\n\n\n", nome);
	
	//SCANF MELHORADO -> "%n-1[^\n]s
	printf("Nome (Scanf melhorado): ");
	scanf("%9[^\n]s", nome);
	fflush(stdin);
	printf("Resultado: %s", nome);	
	
}
