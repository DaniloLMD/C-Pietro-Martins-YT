#include <stdio.h>

int main(){
	
	// continue em While
	int i = 0;
	while (i < 10){
		i++;
		if (i == 5){
			continue;
		}
		printf("%d ", i);
		
	}
		
		
		
		
	printf("\n\n----------------------------\n\n");	
	
	
	// Continue em For
	for (i = 1; i <= 10; i++){
		if (i == 5){
			continue;
		}
		printf("%d ", i);
	}
	printf("\n\n----------------------------\n\n");
	
	
	
	
	
	
	
	
	// Break
	i = 1;
	// 0 = false, 1 = true (qualquer outro valor alem de 0 é true)
	while (1){
		printf("%d ", i);
		if (i == 10){
			break;
		}
		i++;
	}


}
