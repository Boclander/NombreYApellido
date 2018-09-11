#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void pedirString (char*);
void primeraLetraMayus (char*, char*, char*);

int main()
{
    char nombre[20];
    char apellido[20];
    char apellidoYNombre[41]="";

    printf("Ingrese nombre: ");
    pedirString(nombre);

    printf("Ingrese apellido: ");
    pedirString(apellido);

    primeraLetraMayus(nombre, apellido, apellidoYNombre);
    return 0;
}

void pedirString(char* dato)
{
    char buffer[1024];

    fflush(stdin);
    gets(dato);
    strcpy(buffer, dato);

    while (strlen(buffer)>19)
    {
        printf("Reingrese dato: ");
        fflush(stdin);
        gets(dato);
        strcpy(buffer, dato);
    }
    strcpy(dato, buffer);
}

void primeraLetraMayus(char* nombre, char* apellido, char* apellidoYNombre)
{
    int i;
    strcat(apellidoYNombre, apellido);
    strcat(apellidoYNombre, ", ");
    strcat(apellidoYNombre, nombre);

    strlwr(apellidoYNombre);
    apellidoYNombre[0]=toupper(apellidoYNombre[0]);

    for(i=0; i<strlen(apellidoYNombre); i++)
    {
        if(apellidoYNombre[i] == ' ')
        {
            apellidoYNombre[i+1]=toupper(apellidoYNombre[i+1]);
        }
    }
    printf("%s", apellidoYNombre);
}

