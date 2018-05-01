#include <string.h>
#include <stdio.h>
#include "UsuariosySeries.h"
#define OCUPADO 0
#define LIBRE 1
void mostrarUsuarioConSerie(eUsuario usuarios[], eSerie series[],int cantUsuarios, int cantSeries, usuarioSerie lista[] )
{
     {
    int i;
    int j;
    int z;
    for(i=0;i<cantUsuarios;i++)
        {
            if(usuarios[i].estado==1)
            {
                printf("\n %s \n", usuarios[i].nombre);
                for(j=0;j<cantSeries;j++)
                {
                    for(z=0;z<100;z++)
                    {

                        if(usuarios[i].idUsuario==lista[z].idUsuario&&series[j].idSerie==lista[z].idSerie)
                        {

                           printf(" %s ", series[j].nombre);
                        }
                    }
                }
            }





        }


    }
}
void mostrarSerieConUsuario(eUsuario usuarios[], eSerie series[],int cantUsuarios, int cantSeries, usuarioSerie lista [])
{
     {
    int i;
    int j;
    int z;
    for(i=0;i<cantSeries;i++)
        {
            if(series[i].estado==1)
            {
                printf("\nSerie: %s\n", series[i].nombre);
                for(j=0;j<cantUsuarios;j++)
                {
                    if(usuarios[j].idSerie==series[i].idSerie)
                    {
                        printf("%s, ", usuarios[j].nombre);
                    }
                }
            }
        }
    }
}
void mostrarSeriesUsuario(eSerie serie[],eUsuario usuario[],usuarioSerie codUsuarioSerie[],int codigo)
{
    int i;
    int z;
    for(i=0;i<15;i++)
    {
        if(usuario[i].idUsuario==codigo)
        {
            printf("Usuario: %s.\n",usuario[i].nombre);
        }
    }
    for (i=0;i<50;i++)
    {
        if(codUsuarioSerie[i].idUsuario==codigo)
        {
            for(z=0;z<50;z++)
            {
              if(codUsuarioSerie[i].idSerie==serie[z].idSerie)
              {
              printf("Serie: %s.\n",serie[z].nombre);
              }
            }

        }
    }


}
void mostrarUsuariosSerie(eSerie serie[],eUsuario usuario[],usuarioSerie codUsuarioSerie[],int codigo)
{
    int i;
    int z;
    for(i=0;i<15;i++)
    {
        if(serie[i].idSerie==codigo)
        {
            printf("Serie: %s.\n",serie[i].nombre);
        }
    }
    for (i=0;i<50;i++)
    {
        if(codUsuarioSerie[i].idSerie==codigo)
        {
            for(z=0;z<50;z++)
            {
              if(codUsuarioSerie[i].idUsuario==usuario[z].idUsuario)
              {
              printf("Usuario: %s.\n",usuario[z].nombre);
              }
            }

        }
    }


}
int eUsuarioySerie_buscarLugarLibre(usuarioSerie listado[],int limite)
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
