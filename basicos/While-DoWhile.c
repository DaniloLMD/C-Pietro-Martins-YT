#include <stdio.h>

int main(){
	int cont1 = 1;
	int cont2 = 1;
	
	while (cont1 <= 10){
		printf("%d\n", cont1);
		cont1++;
	}
	
	printf("-----------------\n");
	
	do {
		printf("%d\n", cont2);
		cont2++;
	} while (cont2 <= 10);
}
