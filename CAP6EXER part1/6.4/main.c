/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
*/


#include <stdio.h>

/* Simetrico.
El programa, al recibir como dato un arreglo bidimensional cuadrado, determina si el mismo es simetrico. */

const int MAX = 100;

void lectura(int [][MAX], int);
int simetrico(int [][MAX], int);

void main(void)

{
    int MAT[MAX][MAX], N, RES;
    do
    {
        printf("Ingrese el tamano real del arreglo: ");
        scanf("%d", &N);

    }
    while (N > MAX / N < 1);

    lectura (MAT, N);
    RES = simetrico(MAT, N);
    if (RES)
        printf("\nE; arreglo bidimensional es simetrico");
    else
        printf("\nE; arreglo bidimensional no es simetrico");
}

void lectura(int A[][MAX], int T)

{
    int I, J;
    for (I=0; I<T; I++)
        for (J=0; J<T; J++)
    {
        printf("Fila: %d\tColumna: %d", I+1, J+1);
        scanf("%d", &A[I][J]);

    }
}

    int Simectrico (int A[][MAX], int T)

    {
        int I = 0, J, F = 1;
        while ((I < T)&& F)
        {
            J = 0;
            while ((J < I)&& F)
            if (A[I][J] == A[J][I])
                J++;
            else
                F = 0;
            I++;

        }
        return (F);

    }


