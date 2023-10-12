#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    printf("Hello world!\n");
    return 0;
} */

#include <stdio.h>
#include <math.h>

/* Suma-cuadrados.
El programa calcula la suma del cuadrado de los elementos de un arreglo unidimensional de 100 elementos de tipo real */

const int MAX = 100;

void lectura(float *, int);
double suma(float *, int);

void main(void)

{
    float VEC[MAX];
    double RES;
    lectura(VEC, MAX);
    RES = suma(VEC, MAX);
    printf("\n\nsuma del arrelgo: %.21f", RES);

}

void lectura(float A[], int T)

{
    int I;
    for (I=0; I<T; I++)

    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%f", &A[I]);

    }
}

double suma(float A[], int T)

{
    int I;
    double AUX = 0.0;
    for (I=0; I<T; I++)
        AUX += pow (A[I], 2);

    return(AUX);

}

