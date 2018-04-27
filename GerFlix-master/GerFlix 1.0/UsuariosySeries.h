#include "Serie.h"
#include "Usuario.h"
typedef struct{
int idUsuario;
int idSerie;
}usuarioSerie;
void inicializarUsuarioySeries(usuarioSerie [],eUsuario[],eSerie[]);
void mostrarUsuarioConSerie(eUsuario [], eSerie[], int, int, usuarioSerie []);
void mostrarSerieConUsuario(eUsuario [], eSerie[], int, int, usuarioSerie[]);
void mostrarSeriesUsuario(eSerie[],eUsuario[],usuarioSerie[],int);
void mostrarUsuariosSerie(eSerie[],eUsuario[],usuarioSerie[],int);
