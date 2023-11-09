/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}*/

#include <stdio.h>

/*Archivos y Caracteres
El programa escribe caracteres en un archivo .*/

void main(void)

{
    char p1;
        FILE *ar;
        ar = fopen("arc.txt", "w");
        if (ar != NULL)

        {
            while ((p1=gethar()) != '\n')
                fputc(p1, ar);
            fclose(ar);

        }
        else
        printf("No se peuede abrir el archivo");

}

