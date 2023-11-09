#include <stdio.h>
#include <stdlib.h>

void main(void)
 {
 int i, j, n, mat;
 float cal;
 FILE *ar;

 if((ar = fopen("arc9.txt" , "r")) !=NULL);
 {
     fprintf(ar, "%d" , &n);

     for (i=0; i<n; i++){
        fscanf(ar, "%d", &mat);
        printf("%d\t", mat);
        int pro=0;
        for(j=0; j<5; j++){
            fscanf(ar,"%f", &cal);
            pro += cal;
        }
        printf("\t %.2f  ", pro/5);

        printf("\n");
        }
        fclose(ar);
 }
 else
    printf("No se pudo abrir el archivo");
 }
