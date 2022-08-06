#include <stdio.h>
#include <string.h>

int main(){
	
	char nombre[19];  
	char joven[19]; 
	int i = 0;
	int edad; 
	int menor = 200; 
	
	for(i=0; i<=4; i++) 
	{
		printf("Ingrese el nombre: ");
		scanf("%s", nombre);
		
		printf("Ingrese la edad: ");
		scanf("%d", &edad);
		
		if(edad < menor){     
			menor = edad;    
			strcpy(joven, nombre); 
		}
	}
	printf("La persona mas joven es: %s", joven);
	
	return 0;
} 