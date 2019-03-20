#include <stdio.h>
#include <stdlib.h>


    int main (){

    char hora;
    printf("ingrese hora");
    fflush(stdin);
    scanf("%c",&hora);

    switch(hora){
    case 'u':
        printf("tenes sueño");
        break;
    case 'b':
        printf("te la tomaste toda chinwewencha");
        break;

    default:
        printf("no corresponde a las horas ");
        break;

    }return 0;

    }

