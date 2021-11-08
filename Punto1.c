#include<stdio.h>
int main() {
    //Declaración de variables
    int numA, numB, producto;
    //Ingresar números
    printf("Ingresar el primer numero: ");
    scanf("%i", &numA);
    printf("Ingresar el segundo numero: ");
    scanf("%i", &numB);
    //Operación
    producto = numA * numB; 
    //Imprimir
    printf("El producto entre los dos numeros es:");
    printf("%i", producto);

    getch(); //Función para que no se cierre la consola luego de imprimir, no forma parte del ejercicio
    return 0;
}
