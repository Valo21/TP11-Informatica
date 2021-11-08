#include<stdio.h>

int main() {

    //Declaración de variables
    int numero, aux, invertido = 0;

    //Ingresar numero
    do
    {
        printf("Ingresar un numero: ");
        scanf("%i", &numero);
    } while (numero <= 0);
    aux = numero;
    //Estructura while
    while (aux > 0)
    {
        invertido = invertido*10 + aux%10;
        aux = aux/10;
    }
    
    //Imprimir
    printf("El numero ingresado fue: %i\n", numero);
    printf("Su invertido es: %i", invertido);

    getch(); //Función para que no se cierre la consola luego de imprimir, no forma parte del ejercicio
    return 0;
}