#include "Cliente.h"
#include <stdio.h>


Cliente cliente(){
    setTodosDatos();
}

Cliente cliente3D(char nombre[20], char sexo, double saldo){
    setTodosDatos3D(nombre, sexo, saldo);
}

Cliente clienteTD(Cliente cliente){
    setTodosDatosTD(cliente);
}

void setTodosDatos(){
    Cliente *c;
	c->nombre[20] =' ';
    c->sexo =' ';
    c->saldo = 0.0;
	c->ocupado = false;
    }
    
    
void setTodosDatos3D(char nombre[], char sexo, double saldo){
	Cliente *c;
    c->nombre[20] = nombre[20];
	c->sexo = validarSexo(sexo);
    c->saldo = validarSaldo(saldo);
    c->ocupado = setOcupado();
    }

void setTodosDatosTD(Cliente cliente){
	Cliente *c;
	c->nombre[20]= getNombre();
    //c->validarSexo(cliente.getSexo());
    //c->validarSaldo(cliente.getSaldo());
    //c->setOcupado();
    }



Cliente getTodosDatos(){
    Cliente temporal;
    //temporal->nombre = getNombre();
    temporal.sexo = getSexo();
    temporal.saldo = getSaldo();
    temporal.ocupado = isOcupado();
    return temporal;
    }

char validarSexo(char sexo){
	Cliente *c;
	if(sexo != 'M' && sexo != 'F'){
    	c->sexo = ' ';
    }
return c->sexo = sexo;
}

double validarSaldo(double saldo){
	Cliente c;
    if(c.saldo <= 0.0){
    	c.saldo = 0.0;
    }
return c.saldo = saldo;
}


bool tieneSaldo(){
	Cliente *c;
    return c->saldo > 0.0;
}

bool tieneDatos(){
    Cliente *c;
	if(c->nombre[20] == ' ' || strcasecmp(c->nombre[20]," ") || c->sexo == ' '){
        return false;
    }else{
	    return true;
    }
}

bool setOcupado() {
	Cliente *c;
    if(!tieneDatos()){
        setTodosDatos();
    }
    else{
    	c->ocupado = true;
        }
    }

char getNombre(){
	Cliente *c;
    return c->nombre[20];
}

char getSexo() {
	Cliente *c;
    return c->sexo;
}

double getSaldo() {
	Cliente *c;
    return c->saldo;
}

bool isOcupado() {
	Cliente *c;
    return c->ocupado;
}

void eliminar(){
    setTodosDatos();
}

void cambiarNombre(char nuevoNombre[]){
	Cliente *c;
	if(nuevoNombre[20] != ' ' && !strcasecmp(nuevoNombre[20]," ")){
    	c->nombre[20] = nuevoNombre[20];
    }
    setOcupado();
}

void cambiarSexo(char sexo){
	Cliente *c;
    if(sexo == 'M' || sexo == 'F'){
    	sexo = sexo;
    }
    setOcupado();
}

void abonarSaldo(double cuanto){
	Cliente *c;
    if(tieneDatos()) {
        if(cuanto > 0.0){
        	c->saldo += cuanto;
        }
        else{
            printf("\tImposible, no puedes abonar saldos negativos o nada.");
        }
    }
}

void retirarSaldo(double cuanto){
	Cliente *c;
    if(tieneDatos()){
    	if(cuanto > 0.0){
            if(tieneSaldo()){
                if(c->saldo >= cuanto){
                    c->saldo -= cuanto;
            	}
                else{
                    printf("\tImposible, tú saldo es insuficiente para retirar %f",cuanto);
            	}
            }
            else{
                    printf("\tImposible, no hay saldo.");
                }
        }
        else{
            printf("\tImposible, no puedes retirar saldos negativos o nada.");
            }
    }
}

    //Override
char toString(){
	Cliente *c;
        return printf("Nombre: %s\nSexo: %c\nSaldo: %f\nOcupado: %d",c->nombre,c->sexo,c->saldo,c->ocupado);
    }

//void imprimirCliente(){
   //     printf("\t\t",toString());
    //}
//}
