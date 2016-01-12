//Programa que hace la factorial de un número usando una función iterativa o usando una función recursiva.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <stdlib.h> //Incluimos librería stdlib.h que permite usar atoi para comprobar si se introducen números.
using namespace std; //Sentencia obligatoria.

//Creación de las funciones

/*
 * @brief Módulo que calcula de forma iterativa el factorial de un número.
 * @param int n Número del que se desea calcular el factorial.
 * @return int Devuelve el factorial calculado.
 * @pre n>0.
 * @ver 1.0.
 * @author Josedm92.
 */
int Factorial_Iterativo (int n) {
	int i;
	int acu=1;
	for (i=2; i<=n; i++) {
		acu=acu*i;
	}
	
	return acu;
}

/*
 * @brief Módulo que calcula de forma recursiva el factorial de un número.
 * @param int n Número del que se desea calcular el factorial.
 * @return int Devuelve el factorial calculado.
 * @pre n>0.
 * @ver 1.0.
 * @author Josedm92.
 */
int Factorial_Recursivo (int n) {
	if (n==0) {
		n=1;
	} else {
		n=n*Factorial_Recursivo(n-1);
	}
	return n;
}

//Inicio del programa.
int main () {
	//Declaración de variables.
	char numero[1]; 
	char opcionfactorial;
	int n;
	
	//Pedimos un número por pantalla.
	do {
		cout << "Introduce un valor positivo: "; 
		cin >> numero;
		n=atoi(numero);
		if (n<1){
			cout << "ERROR: debe introducir un valor positivo" << endl;
		}
	} while(n<1);
	
	//Pedimos la opción para calcular el factorial y sacamos por pantalla el factorial calculado.
	cout << "Indique función a utilizar(1- Iterativa, 2- Recursiva): "; 
	cin >> opcionfactorial;
	
	switch (opcionfactorial) {
		case '1':
			cout << "El factorial de " << n << " es: " << Factorial_Iterativo(n) << endl;
			break;
		case '2':
			cout << "El factorial de " << n << " es: " << Factorial_Recursivo(n) << endl;
			break;
		default:
			cout << "ERROR: Opción incorrecta" << endl;
	}
}
