#include<stdio.h>


int ingresarNumero() //No sé si el uso de un subprograma sea correcto para este TP
{
    int num;
    do {
        printf("Ingresar un numero distinto de 0: ");
        scanf("%i", &num);
     } while (num == 0);
    return num;
}

int main() {
    //Declaración de variables
    int numA, numB, numC, producto, suma;
    float promedio;

    //Ingresar valores

    numA = ingresarNumero();
    numB = ingresarNumero();
    numC = ingresarNumero();

    producto = numA * numB * numC;
    suma = numA + numB + numC;
    promedio = suma / 3;

    //Imprimir
    printf("La suma de los numeros es: %i", suma);
    printf("\nEl producto de los numeros es: %i", producto);
    printf("\nEl promedio e los numeros es: %f", promedio);
    
    getch(); //Función para que no se cierre la consola luego de imprimir, no forma parte del ejercicio
    return 0;
}
