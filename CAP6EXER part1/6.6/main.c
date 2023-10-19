/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
*/

#include <stdio.h>

/* Intercambia.
el programa intercambai las columnas de un arreglo bidimensional, los elementos de la primera columna se intercambian con los de la ultima,
los de las segunda con los de la penultima, y asi sucesivamente. */

const int MAX = 50;

void lectura(float [][MAX], int, int);
void intercambia(float [][MAX], int, int);
void imprime(float [][MAX], int, int);

void main(void)
{
    int F, C;
    float MAT [MAX][MAX]
    do
    {
        printf("Ingrese el numero de filas: ");
        scanf("%d", & F);
    }
    while (F > MAX)
}
