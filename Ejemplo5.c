#include <stdio.h>
#include <stdlib.h>
	

	int main(int argc, char *argv[]) {
	
	
	
	char letraIngresada[3];
	
	//HOLA
	letraIngresada[0]= 'a';
	letraIngresada[1]= 'a';
	letraIngresada[2]= 'a';
	letraIngresada[3]= 'a';
	
	
	
	printf("Ingresa una palabra: ");
	
	scanf("%c \r",&letraIngresada[0]);	

	scanf("%c \r",&letraIngresada[1]);

	scanf("%c \r",&letraIngresada[2]);

	scanf("%c",&letraIngresada[3]);

		
	
/*
	switch(letraIngresada[0]){
		case 'h':
		switch(letraIngresada[1]){
			case 'o':
				switch(letraIngresada[2]){
					case 'l':
						switch(letraIngresada[3]){
							case 'a':
								printf("\n Ingresaste hola :D \n");
							break;
					    }
				}
		}
		break;
		default:
			printf("No ingresaste hola :( \n");
	}
	*/
	
	if(letraIngresada[0]=='h'){
			if(letraIngresada[1]=='o'){
				if(letraIngresada[2]=='l'){
					if(letraIngresada[3]=='a'){
						printf("Ingresaste: \n");
						printf("%c%c%c%c\n",letraIngresada[0],letraIngresada[1],letraIngresada[2],letraIngresada[3]);
				}else{
				printf("casi lo logras te falto una a :(");
				}
			}else{
			printf("Te falto la :(");
		}
		}else{
			printf("Te falto ola :(");
		}
	}else{
		printf("No ingresaste hola :(");
	}
	



		
		
		return 0;
	}

