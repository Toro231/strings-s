#include<stdio.h>

int main ()
{
    char c, palabra [21];
    int i=0;
    
    printf ("ingrese una palabra:");
    scanf ("%s", palabra);
    
    while (palabra[i++]!= '\0');
    printf("La palabras es:", palabra);
    while (i>0)
    printf("%c", palabra[--i]);
}
