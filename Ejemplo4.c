#include <stdio.h>
#include <stdlib.h>
	

	int main(int argc, char *argv[]) {
	
	
	
	char letraIngresada = 'c';
	
	
	printf("Ingresa una letra: ");
	
	scanf("%c",&letraIngresada);

	switch(letraIngresada){
	case 'a':
			printf("Soy la letra a");
			break;
		case 'b':
			printf("Soy la letra b");
			break;
			
		case 'c':
			printf("Soy la letra c");
			break;
						
		case 'd':
			printf("Soy la letra d");
			break;
			
		case 'e':
			printf("Soy la letra e");
			break;
			
			
		default:	
		
		printf("No conozco la letra: %c",letraIngresada);
	}
		
		
		return 0;
	}

