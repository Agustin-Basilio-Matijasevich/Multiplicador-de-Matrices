//Librerias
#include "Librerias.hpp"

//Espacios de memoria universales
#include "Constantes-Universales.hpp"
#include "Variables-Universales.hpp"

//Espacio numerico estandar
using namespace std;

void ingreso_datos(Bmatrices &matrices, unsigned int &FMA, unsigned int &CMA, unsigned int &FMB, unsigned int &CMB)
{
	cout << "--Ingresemos la primera matriz--" << endl << endl;

	//Control de ingreso de datos
	//Variables
	double auxd;
	int auxi;

	//Control
	do
	{
		cout << "Ingrese la cantidad de filas de la matriz A: ";
		cin >> auxd;

		auxi = auxd;

		if (auxd > 0 && (auxd - auxi) == 0)
		{
			FMA = auxi;
		}
		else
		{
			cout << "Valor invalido, por favor ingrese un valor mayor que cero y entero." << endl << endl;
		}

	} while (!(auxd > 0 && (auxd - auxi) == 0));
	
	do
	{
		cout << "Ingrese la cantidad de columnas de la matriz A: ";
		cin >> auxd;

		auxi = auxd;

		if (auxd > 0 && (auxd - auxi) == 0)
		{
			CMA = auxi;
		}
		else
		{
			cout << "Valor invalido, por favor ingrese un valor mayor que cero y entero." << endl << endl;
		}

	} while (!(auxd > 0 && (auxd - auxi) == 0));
	
	cout << "--A continuacion ingrese los valores de la matriz A en orden F1 y C1 luego F1 y C2 y asi sucesivamente--" << endl;
	
	for (unsigned int i = 0; i < FMA; i++)
	{
		for (unsigned int j = 0; j < CMA; j++)
		{
			cout << "Ingrese el valor de la posicion:" << endl << "Fila: " << i+1 << " Columna: " << j+1 << endl;
			cin >> matrices.A[i][j];
		}
	}

	
	cout << "--Ingresemos la segunda matriz--" << endl << endl;

	//Control de ingreso de datos
	//Variables
	//Reutilizamos variables de control anterior

	//Control
	do
	{
		cout << "Ingrese la cantidad de filas de la matriz B: ";
		cin >> auxd;

		auxi = auxd;

		if (auxd > 0 && (auxd - auxi) == 0)
		{
			FMB = auxi;
		}
		else
		{
			cout << "Valor invalido, por favor ingrese un valor mayor que cero y entero." << endl << endl;
		}

	} while (!(auxd > 0 && (auxd - auxi) == 0));
	
	do
	{
		cout << "Ingrese la cantidad de columnas de la matriz B: ";
		cin >> auxd;

		auxi = auxd;

		if (auxd > 0 && (auxd - auxi) == 0)
		{
			CMB = auxi;
		}
		else
		{
			cout << "Valor invalido, por favor ingrese un valor mayor que cero y entero." << endl << endl;
		}

	} while (!(auxd > 0 && (auxd - auxi) == 0));
	
	cout << "--A continuacion ingrese los valores de la matriz B en orden F1 y C1 luego F1 y C2 y asi sucesivamente--" << endl;

	for (unsigned int i = 0; i < FMB; i++)
	{
		for (unsigned int j = 0; j < CMB; j++)
		{
			cout << "Ingrese el valor de la posicion:" << endl << "Fila: " << i+1 << " Columna: " << j+1 << endl;
			cin >> matrices.B[i][j];
		}
	}

}  //Recibe la variable con el struct, las filas y columnas. Se encarga de cargar ambas matrices con los valores ingresados por usuario.

void imprimir_matriz(unsigned int FM, unsigned int CM, double matriz[FMAX][CMAX])
{
	cout << endl;

	for (unsigned int i = 0; i < FM; i++)
	{
		for (unsigned int j = 0; j < CM; j++)
		{
			cout << "|" << setw(10) << right << matriz[i][j];
		}
		cout << "|" << endl;
	}

	cout << endl;

}  //Recibe una matriz, cuantas filas y columnas tiene e imprime la matriz con un formato determinado

bool multiplicar_matrices(Bmatrices& matrices, unsigned int& FMA, unsigned int& CMA, unsigned int& FMB, unsigned int& CMB, unsigned int& FMR, unsigned int& CMR)
{
	cout << "--Inicializando multiplicacion--" << endl << endl;

	if (CMA == FMB)
	{
		//Variables
		double auxr;  //Aca van los resultados que van saliendo
		unsigned int operaciones = CMA;  //Este es el indicador de operaciones de multiplico y sumo que se deben hacer

		//Definir filas y columnas de matriz resultado
		FMR = FMA;
		CMR = CMB;

		//Hacer la multiplicacion
		for (int i = 0; i < FMR; i++)
		{
			for (int j = 0; j < CMR; j++)
			{
				auxr = 0;

				for (int t = 0; t < operaciones; t++)
				{
					auxr += matrices.A[i][t] * matrices.B[t][j];

				}

				matrices.R[i][j] = auxr;

			}

		}

		return true;
	}
	else
	{
		return false;
	}
}  //Recibe la varible donde se encuentras las matrices a multiplicar y la resultado tambien recibe tamaños de las matrices. Devuelve un valor booleano indicando si ñla multiplicacion salio bien.