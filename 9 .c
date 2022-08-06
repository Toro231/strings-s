#include<stdio.h>
#include <string.h>

int main(){
	
	char pal[20]; 
	char A[20];
	int i = 0;
	
	printf("Ingrese la palabra que se quiere encriptar: "); 
	scanf("%s", pal);
	
	while(pal[i] != '\0') 
	{
		A[i] = pal[i]+3; 
		
		if(pal[i] == 'x'){
			A[i] = 'a'; 
		}
		if(pal[i] == 'y'){
			A[i] = 'b';
		}
		if(pal[i] == 'z'){
			A[i] = 'c';
		}
		if(pal[i] == 'X'){   
			A[i] = 'A'; 
		}
		if(pal[i] == 'Y'){
			A[i] = 'B';
		}
		if(pal[i] == 'Z'){
			A[i] = 'C';
		}
		i++;
	}
	
	printf("La palabra encriptada es: %s\n", A); 

}