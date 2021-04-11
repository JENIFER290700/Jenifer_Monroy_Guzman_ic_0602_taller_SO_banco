#include "Banco.h"
#include <stdio.h>
#include <string.h>



Banco banco(char nombrePais[], int tam_clientes){
	Banco *b;
    b->nombrePais[20] = nombrePais[20];
    //b->clientes =  cliente[tam_clientes];
    Cliente cl[tam_clientes];
    b->clientes[tam_clientes]= cl[tam_clientes];
    construirClientes();
}

void construirClientes(){
	Banco *b;
	int i;
    for(i = 0; i < getTotalClientes(); i++){
    	b->clientes[i] = cliente();
    }
}

int getTotalClientes(){
	Banco b;
	int tamanio=lenght(b.clientes);
    return tamanio;
}

bool isTodoOcupado(){
    bool todo_ocupado = false;
    int contador = 0;
    int i;
    for(i = 0; i < getTotalClientes(); i++){
        if(getIsOcupadoCliente(i)){
        	contador++;
        }
    }
    if(contador == getTotalClientes())
    	todo_ocupado = true;
        return todo_ocupado;
}

bool isTodoVacio(){
    bool todo_vacio = false;
    int contador = 0;
    int i;
    for(i = 0; i < getTotalClientes(); i++){
    	if(!getIsOcupadoCliente(i)){
            contador++;
        }
    }
    if(contador == getTotalClientes())
        todo_vacio = true;
        return todo_vacio;
    }

bool existeEspacioVacio(){
    bool existeVacio = false;
    int i;
	for(i = 0; i < getTotalClientes(); i++){
        if(!getIsOcupadoCliente(i)){
            existeVacio = true;
            break;
        }
    }
    return existeVacio;
}

bool existeEspacioOcupado(){
	bool existeOcupado = false;
	int i;
    for(i = 0; i < getTotalClientes(); i++){
        if(getIsOcupadoCliente(i)){
            existeOcupado = true;
            break;
        }
    }
    return existeOcupado;
}

int indiceVacio(){
    int index_vacio = -1;
    int i;
    for(i = 0; i < getTotalClientes(); i++){
        if(!getIsOcupadoCliente(i)){
            index_vacio = i;
            break;
        }
    }
    return index_vacio;
}

bool printSoloOcupados(int pais){
    Banco *b;
	bool imprimio = false;
    if(existeEspacioOcupado()){
        imprimio = true;
        printf("----------------------------------------------------------------------------------------------------------------");
    	printf("\tDel pais [%s] %s Los cliente disponibles son:",pais,b->nombrePais);
        int i;
		for(i = 0; i < getTotalClientes(); i++){
            if(getIsOcupadoCliente(i)){
                printf("El cliente %d es ",i);
                printCliente(i);
            }
        }
        printf("----------------------------------------------------------------------------------------------------------------");
    }
    return imprimio;
}

void printTodosClientes(int pais){
		Banco *b;
    printf("\tDel pais [%s] %s",pais, b->nombrePais);
    int i;
	for(i = 0; i < getTotalClientes(); i++){
        printf("El cliente %d es:",i);
        printCliente(i);
    }
}

void imprimirEspecifico(int cliente){
	Banco *b;
    printf("----------------------------------------------------------------------------------------------------------------");
	printf("\tDel pais %s:",b->nombrePais);
    printCliente(cliente);
    printf("----------------------------------------------------------------------------------------------------------------");
}

char getNombrePais() {
	Banco *b;
    //return b->nombrePais;
}

void setNombrePais(char nombrePais[]) {
    Banco *b;
	b->nombrePais[20]= nombrePais[20];
}

Cliente getEspecificoCliente(int index){
    Banco *b;
	return b->clientes[index];
}

void setEspecificoCliente(int index, Cliente cliente){
    Banco *b;
	b->clientes[index] = cliente;
    //this.clientes[index].setTodosDatos(cliente);
    }
char getNombreCliente(int index){
	Banco *b;
	char tnombre=getNombre();
    //return this.clientes[index].getNombre();
    //return strcpy(b->clientes[index],tnombre);
}

char getSexoCliente(int index){
	Banco b;
    //return  b.clientes[index]=getSexo();
}

double getSaldoCliente(int index){
	Banco *b;
    //return *b->clientes[index].getSaldo();
}

bool getIsOcupadoCliente(int index){
	Banco *b;
    //return b->clientes[index]=isOcupado();
}

void eliminarCliente(int index){
	Banco *b;
        //this.clientes[index].eliminar();
    }

void cambiarNombreCliente(int index, char nuevoNombre[]){
	Banco b;
        //clientes[index].cambiarNombre(nuevoNombre);
    }

void cambiarSexoCliente(int index, char nuevoSexo){
	Banco b;
     //   b.clientes[index].cambiarSexo(nuevoSexo);
    }

void abonarSaldoCliente(int index, double cuanto){
       // this.clientes[index].abonarSaldo(cuanto);
    }

void retirarSaldoCliente(int index, double cuanto){
        //this.clientes[index].retirarSaldo(cuanto);
    }

void printCliente(int index){
        //this.clientes[index].imprimirCliente();
    }

