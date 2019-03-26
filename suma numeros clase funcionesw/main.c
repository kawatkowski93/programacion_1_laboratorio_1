#include <stdio.h>
#include <stdlib.h>
  int suma(int op1,int op2){
    int res;
    res=op1+op2;
    return res;
    }
int main()

{


    int n1,n2,result;
    printf("numero1");
    scanf("%d",&n1);
    printf("numero2");
    scanf("%d",&n2);
    result=suma(n1,n2);
    printf("la suma es :%d",result);
    return 0;
}
