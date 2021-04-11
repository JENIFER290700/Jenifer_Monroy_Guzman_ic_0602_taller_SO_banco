#include <stdbool.h>
typedef struct {
	char nombre[20];
	char sexo;
	double saldo;
	bool ocupado;
}Cliente;

Cliente cliente();

Cliente cliente3D(char nombre[], char sexo, double saldo);

Cliente clienteTD(Cliente cliente);

 void setTodosDatos();
 
 
 void setTodosDatos3D(char nombre[], char sexo, double saldo);

void setTodosDatosTD(Cliente cliente);

Cliente getTodosDatos();

char validarSexo(char sexo);

double validarSaldo(double saldo);

bool tieneSaldo();

bool tieneDatos();

bool setOcupado();

char getNombre();

char getSexo();

double getSaldo();

bool isOcupado();

void eliminar();

void cambiarNombre(char nuevoNombre[]);

void cambiarSexo(char sexo);

void abonarSaldo(double cuanto);

void retirarSaldo(double cuanto);


//Override
char toString();

void imprimirCliente();


