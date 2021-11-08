#include<stdio.h>
int main() {
    //Declaración de variables
    float numA, numB, suma, producto;
    //Ingresar números
    printf("Ingresar el primer numero: ");
    scanf("%f", &numA);
    printf("Ingresar el segundo numero: ");
    scanf("%f", &numB);
    //Operaciones
    suma = numA + numB;
    producto = numA * numB;
    //Imprimir
    printf("La suma entre los dos numeros es: %f", suma);
    printf("\nEl producto entre los dos numeros es: %f", producto);
    
    return 0;
}