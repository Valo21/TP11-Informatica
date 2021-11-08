#include<stdio.h>
int main( int arc, char *arg[]) {
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
    printf("El producto entre los dos numeros es: %i", producto);
    
    return 0;
}
