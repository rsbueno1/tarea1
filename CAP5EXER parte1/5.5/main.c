#include <stdio.h>
#include <stdlib.h>

/* int main()
{
    printf("Hello world!\n");
    return 0;
} */

#include <stdio.h>

/* Frecuencia de calificaciones.
El programa, al recibir como datos las calificaciones de un grupo de 50 alumnos, obtiene la frecuencia de cada una de las calificaciones y ademas escribe cual es la frecuencia mas alta/ */

const int TAM = 50;

void lectura (int *, int);
void frecuencia(int , int, int , int);
void impresion(int *, int);
void mayor(int *, int);

void main(void)

{
    int CAL[TAM], FRE[6] = {0};
    lectura(CAL, TAM);
    frecuencia(CAL, TAM, FRE, 6);
    printf("\nFrecuencia de calificaciones\n");
    impresion(FRE, 6);
    mayor(FRE, 6);

}

void lectura(int VEC[], int T)

{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese la calificacion  -0:5- del alumno %d: ", I+1);
        scanf("%d", %VEC[I]);
    }
}
{
    void impresion (int VEC[], int T)

    {
        int I;
        for (I=0; I<T; I++)
            printf("\nVEC[%d]: %d", I, VEC[I]);
    }

    void frecuencia(int A[], int P, int B[], int T)

    {
        int y;
        for (I=0; I<P; I++)
            if ((A[I] >= 0) && (A[I] < 6))
                B[A[I]]++;

    }

    void mayor(int *X, int T)

    {
        int I, MFRE =0, MVAL = x[0];
        for (I=1; I<T; I++)
            if (MVAL < X[I])
        {
            MFRE = I;
            MVAL = X[I];
        }
        printf("\nMayor frecuencia de calificaciones: %d \tvalor: %d", MFRE, MVAL);
    }



