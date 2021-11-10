#include<stdio.h>

int main () {
    
    int N, i = 1, c = 0;

    printf("Ingresar la cantidad N: ");
    scanf("%i", &N);

    while(c < N) {
        if (i % 2 != 0)
        {
            printf("%i\n", i);
            c++;
        }
        i++;
    }
    
    return 0;
}