#include<stdio.h>

int main ()
{
    //Declaración de variables
    int dia, mes, ano;
    //Ingresar datos
    printf("Ingresar un numero de un dia: ");
    scanf("%i", &dia);
    printf("Ingresar un numero de un mes: ");
    scanf("%i", &mes);
    printf("Ingresar un ano: ");
    scanf("%i", &ano);

    //Estructuras de selección
    if (dia < 1 || dia > 31)
    {
        printf("El numero del dia es incorrecto");
    }
    
    if (mes < 1 || mes > 12) 
    {
        printf("El numero del mes es incorrecto");
    }
    
    if (ano < 1 ) 
    {
        printf("El numero del ano es incorrecto");
    }


    return 0;
}