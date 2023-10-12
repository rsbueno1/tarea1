#include <stdio.h>
#include <stdlib.h>

/*int main()

    printf("Hello world!\n");
    return 0; */



#include <stdio.h>

/* Cuneta numeros.
El progra,a, al recibir como datos un arreglo unidimensional de tipo entero y un numero entero, determina cuantas veces se encuentra el numero en el arreglo. */

void main(void)

{
    int I, NUM, CUE = 0;
    int ARRE[100];
    for(I=0; I<100; I++);
    {
        printf("Ingrese el elemento %d del arreglo: ", I+1);
        scanf("%d", &ARRE[I]);

    }
    printf("\n\nIngrese el numero que se va a buscar en el arreglo: ");
    scanf("%d", &NUM);
    for (I=0; I<100; I++)
        if (ARRE [I]== NUM)

        CUE++;
printf("\n\nE1 %d se encuentra %d veces en el arreglo", NUM, CUE);



}
