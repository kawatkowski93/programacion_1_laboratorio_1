#include <stdio.h>
#include <stdlib.h>
int suma(int op1 ,int op2 );// prototip no es necesario q declare las variables con solo el tipo de variable basta o directamente
//con toda la ejecucion no varia al principio sin el prototipo  parametro formal estrictamente riguroso le paso 2 enteros
int main()

{


    int n1,n2,result;
    printf("numero1");
    scanf("%d",&n1);
    printf("numero2");
    scanf("%d",&n2);
    result=suma(n1,n2);// llamada a la funcionc
    printf("la suma es :%d",result);
    return 0;
}
 int suma(int op1,int op2){//cuerpo desarrollo q hace la funcion tambien aca esta el partametro formal estrictamente riguroso
    int res;
    res=op1+op2;
    return res;
    }
