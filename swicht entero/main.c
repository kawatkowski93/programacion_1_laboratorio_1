#include <stdio.h>
#include <stdlib.h>

int main()

{
    int hora ;

    printf("ingrese una hora \n");
    scanf("%d",&hora);
    switch(hora){
    case 1:
    case 2 :
    case 3:
    case 4:
    case 5:
        printf("hola");
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        printf("a dormir");
        break;
    }
    return 0;
}
