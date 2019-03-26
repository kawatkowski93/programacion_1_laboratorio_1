
#include <stdio.h>
int var; void carga(void);
void main(void) { int x,y,z; var=5; carga(); printf("%d",var); }
void carga(void) { int var;  var=3; }// aca se esta tomando una variable local pero  nos muestra
//5 por q toma como variable  global se llaman igual pero una es global y la otra local ;
