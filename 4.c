#include <stdio.h>

int main()
{
    char palabras[20];
    int i; 
    int l=0;

    
    printf("Ingrese una palabra:"); 
    scanf("%s", palabras);
    
    for(i=0; i<=21; i++ ){
        
    if(palabras[i] == 'a'){ 
    
            l++;
        }
    }
    printf("La palabra tiene %d ", l);
}