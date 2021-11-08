#include<stdio.h>

int main() {

    //Declaración de variables
    int cantidadN, numero, cPositivos, cNegativos, cCeros, c; 

    //Ingresar cantidadN
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%i", &cantidadN);
    
    //Inicialización de variables
    cPositivos = 0, cNegativos = 0, cCeros = 0, c = 0;

    //Estructura while
    while ( c < cantidadN )
    {
        printf("Ingresar un numero: ");
        scanf("%i", &numero);

        if (numero > 0)
        {
            cPositivos++; //Aumenta el contador de positivos
        } else {
            if (numero == 0) {
                cCeros++; //Aumenta el contador de ceros
            } else {
                cNegativos++; //Aumenta el contador de Negativos
            }
        }
        
        c++; //Aumenta el contador general
    }
    //Imprimir
    printf("Cantidad de numeros positivos: %i\n", cPositivos);
    printf("Cantidad de numeros negativos: %i\n", cNegativos);
    printf("Cantidad de numeros iguales a 0: %i\n", cCeros);

    getch(); //Función para que no se cierre la consola luego de imprimir, no forma parte del ejercicio
    return 0;
}