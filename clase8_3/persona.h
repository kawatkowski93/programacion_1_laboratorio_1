typedef struct{
int id;
char descripcion[31];
}eNacion;


typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
    int idNacionalidad;
}ePersona;

void alta( ePersona pers[], int cantidad );

void mostrarUno( ePersona per );

void mostrarTodos( ePersona pers[], int cantidad);

void  ordenar (ePersona per[],int cantidad);


