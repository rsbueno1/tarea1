/*#include <stdio.h>
#include <stdlib.h>

nt main()
{
    printf("Hello world!\n");
    return 0;
*/


#include <stdio.h>

/*Diagonal principal.
El programa, al recibir como dato una matriz de tipo entero, escribe la diagonal principa. */

const int TAM = 10;

void lectura(int [] [TAM], int);
void imprime(int [] [TAM], int);

void main (void)

{

    int MAT[TAM][TAM];
    lectura(MAT, TAM);
    imprime(MAT, TAM);


}

 void lectura(int A[][TAM], int F)

 {
     int I, J;
     for (I=0; I<F; I++)
        for (J=0; J<F; J++)
        {
            printf("Ingrese el elemnto %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
                    }
     }



 void imprime(int A[][TAM], int F)

 {
     int I,J;
     for (I=0; J<TAM; J++)
        if (I == J)
        printf("\nDiagonal %d %d: %d ", I, J, A[I][J]);
 }

