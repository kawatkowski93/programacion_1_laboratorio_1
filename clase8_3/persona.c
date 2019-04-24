#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

void alta( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        printf("Apellido:\n");
        fflush(stdin);
        scanf("%s", pers[i].apellido);

        printf("Nombre:\n");
        fflush(stdin);
        scanf("%s", pers[i].nombre);

        printf("Edad:\n");
        scanf("%d", &pers[i].edad);

        pers[i].isEmpty = 0;
    }
}

void mostrarTodos( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        mostrarUno(pers[i]);
    }

}

void mostrarUno( ePersona per ){
        printf("%s\t%s\t%d\t%d\n", per.apellido, per.nombre, per.edad, per.isEmpty);
}
void  ordenar (ePersona per[],int cantidad){
        int i,j;
        ePersona aux;
        for(i=0;i<cantidad-1;i++){
                for(j=i+1;i<cantidad;j++){
            if(strcmp(per[i].apellido,per[j].apellido)>0){
                aux=per[i];
                per[i]=per[j];
                per[j]=aux;
            }
        }
    }


}
eNacion nacionalidad[]={1,"argentina",2,"peru",3."uruguay"};
