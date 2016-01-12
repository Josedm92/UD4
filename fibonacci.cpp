//Programa que hace la sucesión de Fibonacci de un número usando una función iterativa o usando una función recursiva.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <stdlib.h> //Incluimos librería stdlib.h que permite usar atoi para comprobar si se introducen números.
using namespace std; //Sentencia obligatoria.

//Creación de las funciones

/*
 * @brief Módulo que calcula de forma iterativa el número de la sucesión de Fibonacci.
 * @param int n Posición de la sucesión a calcular.
 * @return int Devuelve El número de Fibonacci calculado.
 * @pre n>0.
 * @ver 1.0.
 * @author Josedm92.
 */
int Fibonacci_Iterativo (int n) {
	int acu1=0, acu2=1, numero;
	if (n>1){
		for (int i=2; i<=n; i++) {
			numero=acu1+acu2;
			acu1=acu2;
			acu2=numero;
		}
	}
	else {
		if (n==1){
			numero=1;
		}
		if (n==0){
			numero=0;
		}
	}
	return numero;
}

/*
 * @brief Módulo que calcula de forma recursiva el número de la sucesión de Fibonacci.
 * @param int n Posición de la sucesión a calcular.
 * @return int Devuelve El número de Fibonacci calculado.
 * @pre n>0.
 * @ver 1.0.
 * @author Josedm92.
 */
int Fibonacci_Recursivo (int n) {
	if (n>1) {
		n=Fibonacci_Recursivo(n-1)+Fibonacci_Recursivo(n-2);
	} else {
		if (n==1){
			n=1;
		}
		if (n==0){
			n=0;
		}
	}
	return n;
}

//Inicio del programa.
int main () {
	//Declaración de variables.
	char numero[1]; 
	char opcionfibonacci;
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
	
	//Pedimos la opción para calcular la sucesión y sacamos por pantalla el resultado.
	cout << "Indique función a utilizar(1- Iterativa, 2- Recursiva): "; 
	cin >> opcionfibonacci;
	
	switch (opcionfibonacci) {
		case '1':
			cout << "El Fibonacci de " << n << " es: " << Fibonacci_Iterativo(n) << endl;
			break;
		case '2':
			cout << "El Fibonacci de " << n << " es: " << Fibonacci_Recursivo(n) << endl;
			break;
		default:
			cout << "ERROR: Opción incorrecta" << endl;
	}
}
