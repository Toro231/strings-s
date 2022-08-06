#include <stdio.h>

int main()
{
    char palabra[20];
    char palabra2[20];
    int i=0;
    int l=0;
    int a=0;
    int c=0;
    int b=0;
    int d=0;
    
    printf("Ingrese el primer string: ");
    scanf("%s",palabra);
    printf("Ingrese el segundo string: ");
    scanf("%s",palabra2);  
    
    	
	while(palabra[i] != '\0'){ 
		
		if(palabra[i] == palabra2[i]){ 
			a++;
		}
		i++;
		b++; 
	}
	
	while(palabra2[l] != '\0'){   
		
		if(palabra[l] == palabra2[l]){ 
			c++;
		}
		l++;
		d++;
	}
	

	if(a == d && a == d){ 
	    
		printf("Son iguales");
	}
	else
	{
		printf("No son iguales"); 
}
      
}