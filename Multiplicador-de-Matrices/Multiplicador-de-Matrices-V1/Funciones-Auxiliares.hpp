#pragma once

//Inclucion de constantes
#include "Constantes-Universales.hpp"

void ingreso_datos(Bmatrices& matrices, unsigned int& FMA, unsigned int& CMA, unsigned int& FMB, unsigned int& CMB);
void imprimir_matriz(unsigned int FM, unsigned int CM, double matriz[FMAX][CMAX]);
bool multiplicar_matrices(Bmatrices& matrices, unsigned int& FMA, unsigned int& CMA, unsigned int& FMB, unsigned int& CMB, unsigned int& FMR, unsigned int& CMR);