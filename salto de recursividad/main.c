#include <stdio.h>
#include <stdlib.h>
int main(){

int resp=1;
int n;
int i ;
printf("ingrese numero");
scanf("%d",&n);

for(i=n;i>0;i--){
    resp=resp*i;
}
printf("%d",resp);

}
