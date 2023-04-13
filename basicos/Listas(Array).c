#include <stdio.h>

int main(){
	float notas[4];
	int contador;
	
	float media = 0;
	
	
	for (contador = 0; contador < 4; contador++){
		printf("Nota %d: ", contador + 1);
		scanf("%f", &notas[contador]);
		media += notas[contador];
	}
	media /= 4;
	
	
	printf("Media: %.2f\n", media);
	printf("Situação: ");
	if (media >= 7){
		printf("APROVADO");
	} else if (media >= 5){
		printf("RECUPERAÇÃO");
	} else{
		printf("REPROVADO");
	}
	
	
	
	
	
	
	
}
