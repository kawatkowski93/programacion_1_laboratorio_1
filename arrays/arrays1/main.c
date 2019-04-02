#include <stdio.h>
#include <stdlib.h>
#define cant 5

int main()
{       int datos [5];
        int acum=0,i;

        for(i=0;i<cant;i++){
            printf("edad:\n");
            scanf("%d",&datos [1]);
            acum+=datos;
        }
    printf("cantidad  suma %d ",acum);
    return 0;
}
