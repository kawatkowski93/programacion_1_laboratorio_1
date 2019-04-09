#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 /**
  usamos las funcion :
   strcmp (char *, char *)

   char = char  devuelve 0
   char  > char devuelve

 */
void main(void)
{   char apellido[20];
    char nombre[20];
    char apellidonombre[60];
      printf("ingrese apellido \n luego nombre \n");
      fflush(stdin);
      scanf("%s",apellido);
      fflush(stdin);
      scanf("%s",nombre);
    strlwr(apellido);
    apellido[0]=toupper(apellido[0]);/** para pasar a mayuscula la primer letra de la variable */
    strlwr(nombre);
    nombre[0]=toupper(nombre[0]);
   strcpy(apellidonombre,apellido);
    strcat(apellidonombre,apellido);
    strcat(apellido," ");
     strcat(apellidonombre,nombre);
    printf("%s",apellidonombre);


}
