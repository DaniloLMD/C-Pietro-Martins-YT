#include <stdio.h>
	// Constante
	#define pi 3.1415
	#define texto "Hello, World!"

int main(){
	
	printf("%s\n", texto);
	printf("Valor de pi = %f\n\n\n", pi);


	// Int
	int idade;
	
	// Double ( mais preciso) ou float
	float altura;
	
	// String
	char nome[50];
	
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	printf("Informe sua altura: ");
	scanf("%f", &altura);

	printf("Ola %s. Voce foi registrado com %d anos e altura de %.2f.",
	 nome, idade, altura);
	 
	 

}
