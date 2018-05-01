#include <stdio.h>
#include <string.h>
#include "Serie.h"
#define OCUPADO 0
#define LIBRE 1
/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}
void mostrarListaSeries(eSerie series[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
        {
           if(series[i].estado==1)
           {
           printf("Serie: %s. Codigo: %d\n", series[i].nombre,series[i].idSerie);
           }
        }


}

