//Programa que hace la función de Ackermann de dos números usando una función recursiva.
#include <iostream> //Incluimos librería iostream que permite la entrada por teclado y la salida por pantalla.
#include <stdlib.h> //Incluimos librería stdlib.h que permite usar atoi para comprobar si se introducen números.
using namespace std; //Sentencia obligatoria.

//Creación de la función

/*
 * @brief Módulo que calcula de forma recursiva la función de Ackermann de dos números.
 * @param int m, int n Números a partir de los cuales se calcula Ackermann.
 * @return int Devuelve el número de la función de Ackermann calculado.
 * @pre m>=0 && n>=0.
 * @ver 1.0.
 * @author Josedm92.
 */
int Ackermann(int m, int n){
    int resultado;
    if (m>0 && n>0){
	    resultado=Ackermann(m-1, Ackermann(m, n-1));
	}else{
		if (m==0) {
			resultado=n+1;
		} else{
			resultado=Ackermann(m-1, 1);
		}
	}
    return resultado;
}

//Inicio del programa.
int main () {
	//Declaración de variables.
	char numero1[1], numero2[50]; 
	int m, n;
	
	//Pedimos un número por pantalla.
	do {
		cout << "Introduce un valor positivo: "; 
		cin >> numero1;
		cout << "Introduce otro valor positivo: "; 
		cin >> numero2;
		m=atoi(numero1);
		n=atoi(numero2);
		if (m<0 || n<0){
			cout << "ERROR: debe introducir un valor positivo." << endl;
		}
	} while(m<0 || n<0);
	
	//Sacamos por pantalla el resultado
	cout << "El Ackermann de (" << m << ", " << n << ") es: " << Ackermann(m, n) << endl;
}
