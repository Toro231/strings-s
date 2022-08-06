#include <stdio.h>

int main()
{
    char palabras[20];
    int i; 
    int l=0;
    int a=0;
    
    printf("Ingrese una palabra:"); 
    scanf("%s", &palabras);
    
    for(i=0; i<=20; i++ ){
        
        if(palabras[i] == 'A'){ 
            l++;
        }
        if(palabras[i] == 'E'){
            l++;
        }
        
        if(palabras[i] == 'O'){
            l++;
        }
        if(palabras[i] == 'U'){
            l++;
        }
        
        if(palabras[i] == 'a'){ 
            a++;
        }
        if(palabras[i] == 'e'){
            a++;
        }
        if(palabras[i] == 'i'){
            a++;
        }
        if(palabras[i] == 'o'){
            a++;
        }
        if(palabras[i] == 'u'){
            a++;
        }       
    }
    l--;
    
    printf("La palabra tiene %d vocales minusculas y %d  vocales mayusculas",a ,l);
}