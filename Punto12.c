#include<stdio.h>

int main () {

    //Declaración de variables
    int num;

    //Ingresar numero
    printf("Ingresar un numero: ");
    scanf("%i", &num);

    //Estructura de selección
    if (num % 2 == 0) {
        printf("El numero ingresado es par");
    } else {
        printf("El numero ingresado es impar");
    }

    return 0;
}