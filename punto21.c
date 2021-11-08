#include<stdio.h>

int main() {
    
    //Declaracion de variable
    int i;

    //Estructura for
    for ( i = 1000; i < 10000; i++)
    {
        printf("%i\n ", i);
    }
    
    getch(); //Función para que no se cierre la consola luego de imprimir, no forma parte del ejercicio
    return 0;
}