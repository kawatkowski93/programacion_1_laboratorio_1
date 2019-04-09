#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 /**
  usamos las funcion :
   strcmp (char *, char *)

   char = char  devuelve 0
   char  > char devuelve

 */
int main()
{   char apellido[12];
    char nombre[8];
      printf("ingrese apellido \n luego nombre \n");
      fflush(stdin);
      scanf("%s",apellido);
      fflush(stdin);
      scanf("%s",nombre);

    strcat(apellido,nombre);
    printf("%s",apellido);

return ;
}
