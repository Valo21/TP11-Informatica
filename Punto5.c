#include<stdio.h>

int main() {

    //Declaración de variables
    float numA, numB, numC, suma, producto;

    //Ingresar numeros
    printf("Ingresar el primer numero: ");
    scanf("%f", &numA);
    printf("Ingresar el segundo numero: ");
    scanf("%f", &numB);
    printf("Ingresar el tercer numero: ");
    scanf("%f", &numC);
    
    //Proceso
    suma = numA + numB + numC;
    producto = numA * numB * numC;

    //Imprimir
    printf("La suma de los numeros es: %2f\n", suma);
    printf("El producto de los numeros es: %2f", producto);

    return 0;

}