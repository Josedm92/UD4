//11.5.2. Página 308 - Programa que indica el número mínimo de movimientos para resolver la Torre de hanoi usando una función recursiva.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <stdlib.h> //Incluimos librería stdlib.h que permite usar atoi para comprobar si se introducen números.
using namespace std; //Sentencia obligatoria.

//Creación de la función.

/*
 * @brief Módulo que calcula de forma iterativa y saca por pantalla los movimientos necesarios para completar una partida del juego Torres de Hanoi.
 * @param int fichas, int torreinicial, int torrefinal Número de fichas con las que se juegan, Posición inicial de la torre y posición en la que se desea termianr.
 * @return void no Devuelve nada puesto que saca los movimientos por pantalla en la propia función.
 * @pre fichas>1, torreinicial>=1&&<=3, torrefinal>=1&&<=3&&!torreinicial.
 * @ver 1.0.
 * @author Josedm92.
 */
void Hanoi (int fichas, int torreinicial, int torrefinal){
    if (fichas==1) {
		cout << "Mueve la ficha desde la torre " << torreinicial << " a la torre " << torrefinal << endl;
	} else {
		Hanoi(fichas-1,torreinicial,6-torreinicial-torrefinal);
		cout << "Mueve la ficha desde la torre " << torreinicial << " a la torre " << torrefinal << endl;
		Hanoi(fichas-1,6-torreinicial-torrefinal,torrefinal);
	}
}

//Inicio del programa.
int main () {
	//Declaración de variables.
	char numerofichas[1], torre1[50], torre2[100]; 
	int fichas, torreinicial, torrefinal;
	
	//Pedimos los datos por pantalla.
	do {
		cout << "Introduce el número de fichas: "; 
		cin >> numerofichas;
		fichas=atoi(numerofichas);
		if (fichas<1){
			cout << "ERROR: El número de fichas debe ser positivo." << endl;
		}
	} while(fichas<1);
	
	do {
		cout << "Introduce la torre inicial (1-3): "; 
		cin >> torre1;
		torreinicial=atoi(torre1);
		if (torreinicial<1 || torreinicial>3){
			cout << "ERROR: La torre inicial debe estar entre 1 y 3." << endl;
		}
	} while(torreinicial<1 || torreinicial>3);
	
	do {
		cout << "Introduce la torre final (1-3): "; 
		cin >> torre2;
		torrefinal=atoi(torre2);
		if (torrefinal<1 || torrefinal>3 || torrefinal==torreinicial){
			cout << "ERROR: La torre final debe ser distinta de la torre inicial y estar entre 1 y 3." << endl;
		}
	} while(torrefinal<1 || torrefinal>3 || torrefinal==torreinicial);
	
	//Llamamos a la función.
	Hanoi(fichas,torreinicial,torrefinal);
}
