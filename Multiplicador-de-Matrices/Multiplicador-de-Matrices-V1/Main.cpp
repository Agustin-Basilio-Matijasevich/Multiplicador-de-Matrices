//Librerias
#include "Librerias.hpp"

//Espacios de memoria universales
#include "Variables-Universales.hpp"
#include "Constantes-Universales.hpp"

//Funciones-Auxiliares
#include "Funciones-Auxiliares.hpp"

//Espacio numerico general
using namespace std;

//Main
int main()
{
	//Variables de la funcion
	unsigned int FMA, CMA, FMB, CMB, FMR, CMR;  //filas y columnas de las matrices
	bool multiplicacion;  //Indica si la multiplicacion fue exitosa o si no se puede realizar

	//Banderas del Ciclo principal
	bool Bandera = true;
	int opcion = 1;

	//Saludo principal
	cout << "----------------------------------------------------" << endl;
	cout << "--Bienvenido a la multiplicadora de matrices--" << endl;
	cout << "--V1 (Matrices de hasta 200X200 con numeros decimales)--" << endl;
	cout << "----------------------------------------------------" << endl << endl;

	//Ciclo principal de funcionamiento
	while (Bandera == true)
	{
		//Solicitud de datos
		ingreso_datos(matrices, FMA, CMA, FMB, CMB);

		//Impresion de matrices para control de ingreso
		cout << "La matriz A es: " << endl;
		imprimir_matriz(FMA, CMA, matrices.A);
		cout << endl;
		cout << "La matriz B es: " << endl;
		imprimir_matriz(FMB, CMB, matrices.B);
		cout << endl;

		//Multiplicacion
		multiplicacion = multiplicar_matrices(matrices, FMA, CMA, FMB, CMB, FMR, CMR);

		//Resultados de la multiplicacion
		if (multiplicacion)
		{
			cout << "El resultado de la multiplicacion es el siguiente:" << endl;

			imprimir_matriz(FMR, CMR, matrices.R);

			cout << endl;
		}
		else
		{
			cout << "Las matrices no se pueden multiplicar ya que las columnas de A: " << CMA << " no son iguales a filas de B: " << FMB << "." << endl;
		}

		//Control del Ciclo principal
		do
		{
			cout << "Ingrese el numero de la opcion que quiera:" << endl << "Opcion 1: Salir" << endl << "Opcion 2: Realizar otra multiplicacion" << endl << "Su opcion es: ";
			cin >> opcion;

			if (opcion < 1 || opcion > 2)
			{
				cout << "Valor ingresado invalido, por favor reintente." << endl;
			}

		} while (opcion < 1 || opcion > 2);

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