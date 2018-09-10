#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pedirNombre (char*);
void pedirApellido (char*);
void mostrarApellidoYNombre (char*, char*);
void primeraLetraMayus (char*, char*);

int main()
{
    char nombre[20];
    char apellido[20];

    pedirNombre(nombre);
    pedirApellido(apellido);
    primeraLetraMayus(nombre, apellido);
   // mostrarApellidoYNombre(nombre, apellido);
    return 0;
}

void pedirNombre(char* nombre)
{
    printf("Ingrese su nombre: ");
    gets(nombre);
    fflush(stdin);
}

void pedirApellido(char* apellido)
{
    printf("Ingrese su apellido: ");
    gets(apellido);
    fflush(stdin);
}

void primeraLetraMayus(char* nombre, char* apellido)
{
    strupr(nombre);
    strupr(apellido);
    /*strlwr(nombre);
    strupr(nombre[0]);
    strlwr(apellido);
    strupr(apellido[0]);
*/
    printf("%s\n%s", nombre, apellido);

}
void mostrarApellidoYNombre(char* nombre, char* apellido)
{
    char apellidoYNombre[42]="";
    strcat(apellidoYNombre, apellido);
    strcat(apellidoYNombre, ", ");
    strcat(apellidoYNombre, nombre);

    printf(apellidoYNombre);

}
