#include <string.h>
#include <stdio.h>
#include "UsuariosySeries.h"
void inicializarUsuarioySeries(usuarioSerie codUsuarioySerie[],eUsuario usuario[],eSerie serie[])
{
   int i[50]={1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014,1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
   int j[50]={100,100,101,101,102,100,100,103,101,102,103,104,104,100,103,102,105,101,102,100,100,103,101,102,103,104,104,100,103};
   int z;


    for(z=0; z<30; z++)
    {
    codUsuarioySerie[z].idUsuario=i[z];
    codUsuarioySerie[z].idSerie=j[z];
    }

}

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
