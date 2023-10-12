#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    printf("Hello world!\n");
    return 0;
} */

#include <stdio.h>

/* Eleccion
el programa almacena los votos emitidos en una eleccion en la que hubo cinco candidatos es imprime el total de votos que obtuvo cada uno de ellos. */

void main(void)

{
    int ELE[5] = {0};
    int I, VOT;
    printf("Ingrese el primer voto (0 - para terminar): ");
    scanf("%d", &VOT);
    while (VOT)

    {
        if ((VOT > 0) && (VOT < 6))

            ELE[VOT-1]++;
        else
            printf("\nEL voto ingresado es incorrecto. \n");
        printf("Ingresa el siguiente voto (0 - para terminar): ");
        scanf("%d", &VOT);
    }

    printf("\n\nResultados de la eleccion\n");
    for (I = 0; I <= 4; I++)
        printf("\nCandidato %d: %d", I+1, ELE[I]);
}
