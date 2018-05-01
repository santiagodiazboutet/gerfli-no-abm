
typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);
void mostrarListaUsuarios(eUsuario[], int);
int eUsuario_buscarLugarLibre(eUsuario[],int limite);
void eUsuario_alta(eUsuario[],int limite);
int eUsuario_siguienteId(eUsuario listado[],int limite);
