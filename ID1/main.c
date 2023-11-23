#include <stdio.h>


 struct persona
 {
     char nombre[40];
     int edad;
     char equipo[50];
     char sexo;
     int cedula;
     char tipoDeSangre[4];
     char fechaNacimineto[15]

 };

 void main(void)

 {
     struct persona;

     printf("Ingrese el nombre: ");
     scanf("%s", persona.nombre);

     printf("Ingrese la edad: ");
     scanf("%d", &persona.edad);

     printf("Ingrese equipo favorito: ");
     scanf("%s", persona.equipo¨);

     printf("Ingresse el tipo de sangre: ");
     scanf("%s", Persona.tipoSangre);

     printf("Ingrese el sexo (M/F): ");
     scanf("%c", &persona.sexo);

     printf("Ingrese la fecha de nacimiento (DD/MM/AAAA) ");
     scanf("%s", perosna.fechaNacimiento);

     printf("Ingrese la cantidad de identificaciones: ");
     scanf("%d", &persona.id);

     FILE *cedula1
     char nombreArchivo[20];

     printf("Ingrese el nombre del archivo: "):
         ("%s", nombreArchivo);

         cedula1 = fopen(nombreArchivo);
         if (cedula1 == NULL)
         {
             printf*=("No se pudo abrir el archivo. \n");
             return 1;

         }

         fprintf(cedula1, "Nombre: %s\n", persona.nombre);
         fprintf(cedula1, "Edad: %d\n", persona.edad);
         fprintf(cedula1, "Equipo favorito: %c\n", persona.equipo);
         fprintf(cedula1"fecha de nacimiento: %s\n", persona.fechaNacimiento);
         fprintf(cedula1, "Tipo de sangre: %s\n", persona.tipoDeSangre);
         fprintf(cedula1, "Cantidad de identificaciones: ^d\n", persona.id);

         fclose(cedula1);

         printf("Informacion guardada exitosamente en el archivo: %s\n", nombreArchivo);

         return 0;






 }



