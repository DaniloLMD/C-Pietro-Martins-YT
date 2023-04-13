#include <stdio.h>

int main(){
	int nota;
	printf("Nota: ");
	scanf("%d", &nota);
	if (nota >= 7){
		printf("Aprovado!");
	}else if (nota < 7 && nota >= 5){
		printf("Recuperacao!");
	}else{
		printf("Reprovado!");
	}
}
