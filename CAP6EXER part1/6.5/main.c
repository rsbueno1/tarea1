/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
*/

#include <stdio.h>

/* Alumnos.
EL programa, al recibir un arreglo bidimensional que contiene informacion sobre calificaciones de alumenos
en cuatro materias diferentes, obtiene resultados estadisticos. */

const int MAX = 50;
const int EXA = 4;

void lectura(float [MAX][EXA], int);
void funcion1(float [MAX][EXA], int);
void funcion2(float [MAX][EXA], int);

void main(void)

{

    int NAL;
    float ALU[MAX][EXA];
    do
    {
        printf("Ingree el numero de alumnos del grupo ");
        scanf("%d", &NAL);

    }

    while (NAl > MAX \\ NAL < 1);
    lectura(ALU, NAL);
    funcion1(ALU, NAL);
    funcion2(ALU, NAL);
}

void lectura(float A[][EXA], int N)

{
    int I,J;
    for (I=0; I<N; I++)
        for (J=0; J<EXA; J++)

    {
        printf("Ingrese la calificacion %d del alumno %d: ", J+1, I+1);
        scanf("%f", &A[I][J];

    }
}

void funcion1(float A[][EXA], int T)

{
    int I. J;
    float SUM, PRO;
    for (I=0; I<T; I++)
    {
        SUM = 0;
        for (J=0; J<EXA; J++)
            SUM += A[I][J];
            PRO = SUM / EXA;
            printf("\nEL promedio del alumno %d es: %5.2f", I+1, PRO);
    }
}

void funcion2(float A[][EXA], int T)

{
    int I, J, MAY;
    float SUM, PRO, MPRO = 0;
    printf("\n");
    for (J=0; J<EXA; J++)
    {
        SUM = 0;
        for (I=0; I<T; I++)
            SUM += A[I][J];
        PRO = SUM / T;
        if (PRO > MPRO)
        {
            MPRO = PRO;
            MAY = J;

        }
        printf("\nEL promedio del examen %d es: %f" , J+1, PRO);

    }
    printf("\n\nEl examen con mayot promedio es: %d \t promedio: %5.2f" , MAY+1, MPRO);
}


