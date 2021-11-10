#include<stdio.h>

int main() {
    
    //Declaración de variables
    float radio, diametro, perimetro, area, pi = 3.14;
    
    //Ingresar radio
    printf("Ingresar el radio del circulo: ");
    scanf("%f", &radio);

    //Proceso
    diametro = radio * 2;
    perimetro = 2.0 * pi * radio;
    area = pi * radio * radio;

    //Imprimir
    printf("El diametro del circulo es: %2f\n", diametro);
    printf("El perimetro del circulo es: %2f\n", perimetro);
    printf("El area del circulo es: %2f\n", area);

    return 0;
}