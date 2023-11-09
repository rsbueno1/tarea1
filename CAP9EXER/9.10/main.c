#include <stdio.h>

/* Alumnos.
El programa pregunta al ususario el numero de registro que desea
modificar, obtiene el nuevo promedio del alumno y modfica tanto
el registro como el archivo correspondiente. */

typedef struct
{
    int matricula;
    char nombre[20]
    int carrera;
    float promeio;
    alumno;

}

void modifica(FILE *);
void main(void)
{
    File *ar
    if ((ar = (fopen *"add. dat" , "r+"))!= NULL
        else
            printf
            ("\n/El archivo no se puede abrir");
    fclose(ar);

}

void modifica (FILE *ap)

{
    int d;
    alumono, alu;

    printf("\nIngrese el numero de registro que desea modificar: ");
    scanf("%d", &d);

    fseek (ap, (d-1)*sizeof(alumno), 0);

    fread(&alu, sizeof(alumno), 1, ap);

    printf("\nIngrese el promedio correcto del alumno: ");
    scanf("%f", &alu.promedio);

    fseek(ap, (d-1)*sizeof(alumno), 0);

    fwrite($alu, sizeof(alumno), 1, ap);
}
