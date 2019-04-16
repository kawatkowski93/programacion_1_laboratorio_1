#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
/**struct persona{
char apellido[31];
char nombre[31];
int edad ;
int isEmpty;
};
void main(void)
{
    struct persona per;
    printf("ingrese apellido -nombre - edad ");
    scanf("%s",per.apellido);
    fflush(stdin);
    scanf("%s",per.nombre );
    fflush(stdin);
    scanf("%d",&per.edad);
     per.isEmpty=0;
    system("cls");

    printf("el apellido es:  %s \n nombre :%s \n edad :%d \n %d  "    ,per.apellido,per.nombre,per.edad,per.isEmpty);

}*/



#include <stdio.h>
#include <stdlib.h>
/**typedef struct {
    char apellido[31];
    char nombre[31];
    int edad ;
    int isEmpty;
}persona;*/

int main()
{
    persona  per;

    per=alta(per);

  /**  printf("ingrese apellido -nombre - edad ");
    scanf("%s",per.apellido);
    fflush(stdin);
    scanf("%s",per.nombre );
    fflush(stdin);
    scanf("%d",&per.edad);
     per.isEmpty=0;*/
    system("cls");

    printf("el apellido es:  %s \n nombre :%s \n edad :%d \n %d  "    ,per.apellido,per.nombre,per.edad,per.isEmpty);


}
