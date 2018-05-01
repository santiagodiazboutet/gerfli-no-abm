#include <stdio.h>
#include <stdlib.h>
#include "UsuariosySeries.h"
#define TAMSERIE 20
#define TAMUSUARIO 100
#define TAMUSUARIOSERIE 2000

int main()
{


    int opcion=0;
    int codigo=0;
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];
    usuarioSerie listaUsuarioSerie[TAMUSUARIOSERIE];

    while (opcion!=9)
    {
        printf("\nMENU\n1-ALTA\n2-BAJA\n3-MODIFICAR\n4-SERIES CON USUARIOS\n5-USUARIOS CON SERIES\n6-VER SERIES DE USUARIO\n7-VER USUARIOS DE SERIES\n8-LA SERIE MAS POPULAR\n9-SALIR\n");
        scanf("%d", &opcion);
        switch(opcion){
        case 1:
    /*inicializarSeriesEstado(listaDeSeries, TAMSERIE);
   */ inicializarSeriesHardCode(listaDeSeries);
   eUsuario_alta(listaDeUsuarios,TAMUSUARIOSERIE);
    //inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    //inicializarUsuariosHardCode(listaDeUsuarios);
        break;
        case 4:
            mostrarSerieConUsuario(listaDeUsuarios, listaDeSeries, TAMUSUARIO, TAMSERIE,listaUsuarioSerie);
            break;
        case 5:
            mostrarUsuarioConSerie(listaDeUsuarios, listaDeSeries, TAMUSUARIO, TAMSERIE,listaUsuarioSerie);
            ;
        case 6:
            mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
            printf("\nIngrese el codigo del usuario que desea observar: \n");
            scanf("%d",&codigo);
            mostrarSeriesUsuario(listaDeSeries,listaDeUsuarios,listaUsuarioSerie,codigo);
            break;
        case 7:
            mostrarListaSeries(listaDeSeries, TAMSERIE);
            printf("\nIngrese el codigo de la serie que desea observar: \n");
            scanf("%d",&codigo);
            mostrarUsuariosSerie(listaDeSeries,listaDeUsuarios,listaUsuarioSerie,codigo);
            break;
        case 9:
            break;

        }
    }






    //mostrarListaSeries(listaDeSeries, TAMSERIE);
    //mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);





    return 0;
}
