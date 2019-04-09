#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[64];
    int cantidad;

    printf("Nombre: ");
    //fgets(buffer, 62, stdin);
    fgets(buffer,sizeof(buffer)-2,stdin);/** sizeof devuelve los bites q tiene la variable  64 x1
 /** toma la / variable / cuenta bytes -2 caracteres extra q son  / stdin toma del teclado  */
    cantidad = strlen(buffer);
/** strlen  cuenta la cantidad de bytes de buffer */
    buffer[cantidad-1] = '\0';
    /** va a devoler 5 caracteres pero  yo no quiero el astericos y lo borro */

    printf("%s", buffer);

    return 0;
}
