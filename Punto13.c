#include<stdio.h>

int main() {

    //Declaración de variables
    float vMes1, vMes2, vMes3;
    //Ingresar valores
    printf("Ingresar recuento de globulos rojos del primer mes: ");
    scanf("%f", &vMes1);
    printf("Ingresar recuento de globulos rojos del segundo mes: ");
    scanf("%f", &vMes2);
    printf("Ingresar recuento de globulos rojos del tercer mes: ");
    scanf("%f", &vMes3);
    
    //Estructuras de selección
    if (vMes1 > vMes2) {
        if (vMes2 > vMes3) {
            printf("El recuento de globulos rojos desciende por cada mes");
        } else {
            printf("El recuento de globulos rojos no aumenta ni desciende por mes");
        }
    } else {
        if (vMes3 > vMes2) {
            printf("El recuento de globulos rojos aumenta por cada mes");
        } else {
             printf("El recuento de globulos rojos no aumenta ni desciende por mes");
        }
    }

    getch(); //Función para que no se cierre la consola luego de imprimir, no forma parte del ejercicio
    return 0;
}