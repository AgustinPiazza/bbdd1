// STRUCT CAMPO CON NOMBRE Y LONGITUD
// STRUCT REGISTRO CON CANTIDAD, LONGITUD Y STRUCT DE CAMPOS (PUNTERO)
// FUNCIONES DEFINICION REGISTRO, DEVUELVE UN PUNTERO A UNA ESTRUCTURA REGISTRO
// FUNCION INGRESO REGISTRO, RECIBE STRUCT REGISTRO, DEVUELVE PUNTERO CHAR, PIDE LOS DSITNITOS CAMPOS Y ME LOS DEVUELVE EN STRING (parsear que separa cada registro).
// MOSTRAR REGISTRO, TOMA EL REGISTRO COMO STRING COMO ESTRUCTURA Y ME LOS MUESTRA.
// MENU ALTA DE REGISTRO, CONSULTA
// ALTAS ARCHIVO
// BUSQUEDAS ARCHIVO AMBOS RECIBEN LA ESTRUCTURA REGISTRO.
// CANTIDAD DE BYTES DEL ARCHIVO. RECIBE EL FILE.

// DEFNIICIION REGFISTTRO, PRIMERO UN MALLOC PARA EL REGISTTRO  R = (ESTEREGISTRO) MALLOC (SIZEOF); SETEA LOS CAMPOS Y LA CANTIDAD, HAGO UN
// MALLOC PARA DEFINIR EL ARREGLO DE CAMPOS, CANTIDAD * TAMAÑO DE ESTRUCTURA DE CAMPO.
// RECORDAR BYTE PARA EL ACTIVO O INACTIVO DEL CLIENTE. RETORNA EL PRIMER PUNTERO CREADO.

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

struct campo
{
    char nombre[30];
    int longitud;
};

struct estRegistro
{
    int cantidad, longitud;
    struct campo *campos;
};

struct estRegistro *definicionRegistro();
char *ingresoRegistro(struct estRegistro *);
void limpiarBuffer();
void mostrarRegistro(char *, struct estRegistro *);

struct estRegistro *definicionRegistro()
{
    struct estRegistro *r = (struct estRegistro *)malloc(sizeof(struct estRegistro));
    int cantidad, longitud;
    printf("Ingrese la cantidad de campos que quiere añadir:    \n");
    // c. De alguna forma, el usuario le indicará al programa cuando haterminado de definir la estructura de la lista de clientes
    // No se a que se refieren con eso, si para eso les preguntamos cuantos campos van a ser...
    scanf("%d", &cantidad);
    struct campo *lista = (struct campo *)malloc(sizeof(struct campo) * cantidad);
    // VALIDAR QUE CANTIDAD SEA MAYOR A 0;
    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingrese el nombre que va a tener el campo numero [%d] :   \n", i);
        scanf("%d", &lista[i].longitud);
        printf("Ingrese la longitud que va a tener el campo numero [%d] :   \n", i);
        fgets(lista[i].nombre, sizeof(lista[i].nombre), stdin);
        lista[i].nombre[strcspn(lista[i].nombre, "\n")] = '\0';
        limpiarBuffer();
    }
    r->campos = lista;
    r->cantidad = cantidad;
    return r;
}



//Mas o menos lo que vi, es hacer un ciclo con la cantidad de campos (no se si hay que escribirla en el archivo o directamente usarla en el ciclo)
//Ir escribiendo el el archivo cada nombre con su longitud, hasta que termine el ciclo

void guardarStructEnArchivo(archivo, struct){

    fwrite(r->cantidad)

    for (int i = 0; i < r->cantidad; i++){
        fwrite(campos_nombre, tamaño, archivo donde lo guardas);
        fwrite(campos_longitud, "", "");
    }
    

}

//calculamos el tamaño del registro primero, creamos el registro y despues con otro ciclo vamos cargando los datos de cada campo 
//despues escribir el registro ya cargado en el archivo.


char *ingresoRegistro(struct estRegistro *r){

    int tamañoRegistro;
    for (int i = 0; i < r->cantidad; i++){
        /* code */
    }

    char *registro = (char *)malloc(tamañoRegistro);
    
    //carga de datos

    FILE *archivo = fopen;
    fwrite(registro, sizeof(char), tamañoRegistro, archivo)
}

void limpiarBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}