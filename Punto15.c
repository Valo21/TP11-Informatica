#include<stdio.h>

int main() {
    
    //Declaracion de variable
    int contador;

    //Estructura for
    printf("Los numeros pares entre 1 y 4 son: ");
    for (contador = 1; contador <= 40; contador++)
    {
        if ( contador%2 == 0 )
        {
            printf("%i\n", contador);
        }
        
    }
    
    getch(); //Función para que no se cierre la consola luego de imprimir, no forma parte del ejercicio
    return 0;
}