#include <string.h>
#include <stdio.h>
#include "Usuario.h"
#define OCUPADO 0
#define LIBRE 1
void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
     int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]={"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,104,104,100,103};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}
void mostrarListaUsuarios(eUsuario usuarios[], int cant)
{
    {
    int i;

    for(i=0;i<cant;i++)
        {
            if(usuarios[i].estado==1)
            {

                printf("Usuario: %s. Codigo: %d\n", usuarios[i].nombre,usuarios[i].idUsuario);

            }

        }


}
}
void eUsuario_alta(eUsuario  listado[],int limite)
{
    char nombre[50];
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        indice = eUsuario_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
                id = eUsuario_siguienteId(listado,limite);
                printf("Ingrese el nombre del usuario que desea dar de alta");
                gets(nombre);
            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{

                strcpy(listado[indice].nombre,nombre);
                listado[indice].idUsuario = id;
                listado[indice].estado = OCUPADO;





        }
    }
}

int eUsuario_buscarLugarLibre(eUsuario listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int eUsuario_siguienteId(eUsuario listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idUsuario>retorno)
                    {
                         retorno=listado[i].idUsuario;
                    }

            }
        }
    }

    return retorno+1000;
}
