/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
*/

#include <stdio.h>

/* Suma matrices.
EL programa, al recibir como datos dos arreglos bidimensionales del mismo tamano, calcula la suma de ambos en un tercer arreglo bidimensional. */

const int MAX = 50;

void lectura(int [][MAX], int, int);
void suma(int [][MAX], int[][MAX], int[][MAX], int, int);
void imprime(int [][MAX], int, int);

void main(void)

{
    int MA[MAX][MAX], MB[MAX][MAX];

    int DIL, COL;
    do
    {
        printf("Ingrese el numero de filas de los arreglos: ");
        scanf("%d", &FIL);

    }
    while (FIL> MAX / FIL< 1);
    do
    {
        printf("Ingrese el numero de columnas de los arreglos: ");
        scanf("%d", &COL);

    }
    while (COL > MAX / COL < 1);
    printf("\nLectura del arreglo MA\n");
    lectura(MA, FIL, COL);
    pintf("\nLectura del arreglo MB\n");
    lectura(MB, FIL, COL);
    suma (MA, MB, MC, FIL, COL);
    printf("\nImpresion del arreglo MC\n");
    imprime (MC, FIL, COL);

}

void lectura(int A[][MAX], int F, Int C)

{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
    {
        printf("Ingrese el elemento %d %d: ", I+1, J+1);
        scanf("%d", &A[I][J]);

    }
}

void suma(int M1[][MAX], int M2[][MAX], int M3[][MAX], int F, int C)

{
    int I, J;
    for (I=0; J<C; J++)
    M3[I][J]= M1[I][J] + M2[I][J];

}

void imprime(int A[][MAX], int F, int C)

{
    int I, J;
    for (I=o; I<F; I++)
        printf("\nElemento %d %d: %d", I, J, A[I][J]);
}
