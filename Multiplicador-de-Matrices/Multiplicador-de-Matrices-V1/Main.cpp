//Librerias
#include "Librerias.hpp"

//Espacios de memoria universales
#include "Variables-Universales.hpp"
#include "Constantes-Universales.hpp"

//Funciones-Auxiliares
#include "Funciones-Auxiliares.hpp"

//Espacio numerico general
using namespace std;

//Funciones Auxiliares


//Main

int main()
{
	//Variables de la funcion
	int FMA, CMA, FMB, CMB;

	//Banderas del Ciclo principal
	bool Bandera = true;
	int opcion = 1;

	//Ciclo principal de funcionamiento
	while (Bandera == true)
	{
		//Solicitud de datos
		cout << "--Ingresemos la primera matriz--" << endl << endl;
		cout << "Ingrese la cantidad de filas de la matriz A: ";
		cin >> FMA;
		cout << "Ingrese la cantidad de columnas de la matriz A: ";
		cin >> CMA;

		cout << "--A continuacion ingrese los valores de la matriz A en orden F1 y C1 luego F1 y C2 y asi sucesivamente--";

		//Control del Ciclo principal
		cout << "Ingrese el numero de la opcion que quiera:" << endl << "Opcion 1: Salir" << endl << "Opcion 2: Realizar otra multiplicacion" << endl << "Su opcion es: ";
		cin >> opcion;

		if (opcion == 1)
		{
			Bandera = false;
		}
		else if (opcion == 2)
		{
			Bandera = true;
		}
		else
		{
			cout << "Fatal Error in Main Cycle" << endl << endl;
			system("Pause");
			break;
		}
	}

	return 0;
}