#include <stdio.h>

int main()

{
    char palabras[20];
    int i; 
    int l=0;
    
    printf("Ingrese una palabra:");
    scanf("%s", &palabras);
    
    for(i=0; i<=21; i++ ){
        
        if(palabras[i] == 'A'){ 
            l++;
        }
        if(palabras[i] == 'B'){
            l++;
        }
        if(palabras[i] == 'C'){
            l++;
        }
        if(palabras[i] == 'D'){
            l++;
        }
        if(palabras[i] == 'E'){
            l++;
        }
        if(palabras[i] == 'F'){
            l++;
        }
        if(palabras[i] == 'G'){
            l++;
        }
        if(palabras[i] == 'H'){
            l++;
        }
        if(palabras[i] == 'I'){
            l++;
        }
        if(palabras[i] == 'J'){
            l++;
        }
        if(palabras[i] == 'K'){
            l++;
        }
        if(palabras[i] == 'M'){
            l++;
        }
        if(palabras[i] == 'N'){
            l++;
        }
        if(palabras[i] == 'L'){
            l++;
        }
        if(palabras[i] == 'O'){
            l++;
        }
        if(palabras[i] == 'P'){
            l++;
        }
        if(palabras[i] == 'Q'){
            l++;
        }
        if(palabras[i] == 'R'){
            l++;
        }
        if(palabras[i] == 'S'){
            l++;
        }
        if(palabras[i] == 'T'){
            l++;
        }
        if(palabras[i] == 'U'){
            l++;
        }
        if(palabras[i] == 'V'){
            l++;
        }
        if(palabras[i] == 'W'){
            l++;
        }
        if(palabras[i] == 'X'){
            l++;
        }
        if(palabras[i] == 'Y'){
            l++;
        }
        if(palabras[i] == 'Z'){
            l++;
        }
        
    }
    
    l--;
    
    printf("La palabra tiene: %d", l);
}