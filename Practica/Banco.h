#include "Cliente.h"
typedef struct {
	char nombrePais[20];
	Cliente clientes[];
}Banco;

Banco banco(char nombrePais[], int tam_clientes);

void construirClientes();

int getTotalClientes();

bool isTodoOcupado();

bool isTodoVacio();

bool existeEspacioVacio();

bool existeEspacioOcupado();

int indiceVacio();

bool printSoloOcupados(int pais);

void printTodosClientes(int pais);

void imprimirEspecifico(int cliente);

char getNombrePais();

void setNombrePais(char nombrePais[]) ;

Cliente getEspecificoCliente(int index);

void setEspecificoCliente(int index, Cliente cliente);

char getNombreCliente(int index);

char getSexoCliente(int index);

double getSaldoCliente(int index);

bool getIsOcupadoCliente(int index);

void eliminarCliente(int index);

void cambiarNombreCliente(int index, char nuevoNombre[]);

void cambiarSexoCliente(int index, char nuevoSexo);

void abonarSaldoCliente(int index, double cuanto);

void retirarSaldoCliente(int index, double cuanto);

void printCliente(int index);
