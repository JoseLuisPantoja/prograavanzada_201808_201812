// PROGLINEAL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "FormaAumentada.h"
#include "..\CommonF\Set_Functions.h"
//#define WINDOR_GLASS_CO
#define REDDY_MIKKS

int main()
{
	int M;                      /*n\'umero de restricciones*/
	int N;                      /*n\'umero total de variables*/
#ifdef WINDOR_GLASS_CO
	M = 3; N = 5;
#endif
#ifdef REDDY_MIKKS
	M = 4; N = 6;
#endif // REDDY_MIKKS

	MATRIX_D_RAC(M,N);          /*Matriz de objetos de clase Rac*/
#ifdef WINDOR_GLASS_CO
	E[0][0] = Rac(1, 1); E[0][1] = Rac(-3, 1); E[0][2] = Rac(-5, 1); E[0][3] = Rac(0, 1); E[0][4] = Rac(0, 1); E[0][5] = Rac(0, 1); E[0][6] = Rac(0, 1);
	E[1][0] = Rac(0, 1); E[1][1] = Rac(1, 1); E[1][2] = Rac(0, 1); E[1][3] = Rac(1, 1); E[1][4] = Rac(0, 1); E[1][5] = Rac(0, 1); E[1][6] = Rac(4, 1);
	E[2][0] = Rac(0, 1); E[2][1] = Rac(0, 1); E[2][2] = Rac(2, 1); E[2][3] = Rac(0, 1); E[2][4] = Rac(1, 1); E[2][5] = Rac(0, 1); E[2][6] = Rac(12, 1);
	E[3][0] = Rac(0, 1); E[3][1] = Rac(3, 1); E[3][2] = Rac(2, 1); E[3][3] = Rac(0, 1); E[3][4] = Rac(0, 1); E[3][5] = Rac(1, 1); E[3][6] = Rac(18, 1);
#endif
#ifdef REDDY_MIKKS
	E[0][0] = Rac(1, 1); E[0][1] = Rac(-5, 1); E[0][2] = Rac(-4, 1); E[0][3] = Rac(0, 1); E[0][4] = Rac(0, 1); E[0][5] = Rac(0, 1); E[0][6] = Rac(0, 1); E[0][7] = Rac(0,1);
	E[1][0] = Rac(0, 1); E[1][1] = Rac(6, 1); E[1][2] = Rac(4, 1); E[1][3] = Rac(1, 1); E[1][4] = Rac(0, 1); E[1][5] = Rac(0, 1); E[1][6] = Rac(0, 1); E[1][7] = Rac(24, 1);
	E[2][0] = Rac(0, 1); E[2][1] = Rac(1, 1); E[2][2] = Rac(2, 1); E[2][3] = Rac(0, 1); E[2][4] = Rac(1, 1); E[2][5] = Rac(0, 1); E[2][6] = Rac(0, 1); E[2][7] = Rac(6,1);
	E[3][0] = Rac(0, 1); E[3][1] = Rac(-1, 1); E[3][2] = Rac(1, 1); E[3][3] = Rac(0, 1); E[3][4] = Rac(0, 1); E[3][5] = Rac(1, 1); E[3][6] = Rac(0, 1); E[3][7] = Rac(1, 1);
	E[4][0] = Rac(0, 1); E[4][1] = Rac(0, 1); E[4][2] = Rac(1, 1); E[4][3] = Rac(0, 1); E[4][4] = Rac(0, 1); E[4][5] = Rac(0, 1); E[4][6] = Rac(1, 1); E[4][7] = Rac(2, 1);
#endif // REDDY_MIKKS

	FormaAumentada FA = FormaAumentada(E,M,N);
#ifdef WINDOR_GLASS_CO
	int IDVBas[] = { 3,4,5 };    /*\'Indices De Variables Basicas*/
#endif
#ifdef REDDY_MIKKS
	int IDVBas[] = { 3,4,5,6 };
#endif // REDDY_MIKKS

	VAR_BASIC(IDVBas, FA);       /*VARiables BASICas*/
	
	do{
		MOSTRAR_PREG_ITERAR(FA); /*MOSTRAR PREGUNTAR ITERAR*/
	} while (opt);

    return 0;
}//end main()

