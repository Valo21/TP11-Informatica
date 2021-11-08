#include<stdio.h>
int main() {

    /*Declaración de variables*/
    float notaA, notaB, notaC;

    /*Ingresar notas */
    printf("Ingresar nota del primer parcial:");
    scanf("%f",&notaA);
    printf("Ingresar nota del segundo parcial:");
    scanf("%f",&notaB);
    printf("Ingresar nota del tercer parcial:");
    scanf("%f",&notaC);

    /*Estructura de selección doble*/
    if( notaA >= 4 && notaB >=4 && notaC >=4 ){
        printf("El alumno tiene aprobado los 3 parciales\n");
    } else {
        printf("El alumno desaprobó uno o más parciales\n");
    }
    getch();
    return 0;
}