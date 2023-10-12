#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    printf("Hello world!\n");
    return 0;
}
*/

#include <stdio.h>

/* Arreglo sin elementos repartidos.
EL programa, al recibir como dato un arreflo unidimensional desordenado de N elementos, obtiene como salida ese  mismo arreglo pero sin los elementos repartidos. */

void lectura(int *, int);
void imprime(int *, int);
void elimina(int *, int *);

void main(void)

{
    int TAM, ARRE[100];
    do
    {

        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);

    }

    while (TAM > 100 / TAM < 1);
    lectura(ARRE, TAM);
    elimina(ARRE,&TAM);
    imprime(ARRE, TAM);

}

void lectura(int A[], int T)
{
    printf("\n");
    int I;
    for (I=0; I<T; I++)

    {
        printf("Ingrese el elemnto %d:" , I+1):
            scanf("%d", &A[I]);

    }
}
void imprime(int A[], int T)

{
    int = I;
    for (I=0; I<; I++)
        prinf("\nA[%d]: %d" , I, A[I]);

}

void elimina(int A[], int *T)

{
    int I = 0, K, L;
    while (I < (*T-1))
    {
         K = I + 1;
         while (K <= (*T-1))
         {
             if (a[I] == A[K])
             {
                 for (L =K; l< (*T-1); L++)
                    A[L] = A[L+1];
                 *T = *T -1;

             }
             else
                K++;

         }
         I++;
    }
}
