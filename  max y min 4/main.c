#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro,max,min,flag=0;
    char rta;
    do{
        printf("ingrese un numero");
        scanf("%d",&nro);

        if(flag==0 || nro>max){
                max =nro;
        }
        if(flag==0 || nro<min){
            min=nro;
            flag=1;
        }
        printf("desea ingresar otro numero si / no ");
        fflush(stdin);
        scanf("%c",&rta);
    }while(rta=='s');
    printf("el numero max es %d \n el numero minimo es %d",max,min);
    return 0;
}
