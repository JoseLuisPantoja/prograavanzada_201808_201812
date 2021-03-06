// ConsoleApplication_TestEmpleado.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;

#include "Empleado.h"
#define CON_CLASE_EMPLEADOPORCOMISION
#include "EmpleadoPorComision.h"

#ifndef CON_CLASE_EMPLEADOPORCOMISION
int main()
{
	cout << "El n\\'umero de empleados antes de instanciar cualquier objeto es "
		<< Empleado::getCuenta() << endl;
	Empleado *e1Ptr = new Empleado("Susan", "Baker");
	Empleado *e2Ptr = new Empleado("Robert", "Jones");
	cout << "El n\\'umero de empleados despu\\'es de instanciar \
los objetos es " << Empleado::getCuenta() << endl;

	cout << "\n\nEmpleado 1: "
		<< e1Ptr->getPrimerNombre() << " " << e1Ptr->getApellidoPaterno()
		<< "\n\nEmpleado 2: "   
		<< e2Ptr->getPrimerNombre() << " " << e2Ptr->getApellidoPaterno()
		<< "\n\n";

	delete e1Ptr;  //desasigna la memoria
	e1Ptr = 0;     //desconecta el apuntador del espacio de almacenamiento heap
	delete e2Ptr;  //desasigna la memoria
	e2Ptr = 0;     //desconecta el apuntador del espacio de almacenamiento heap

	cout << "El n\\'umero de empleados despu\\'es de eliminar \
los objetos es " << Empleado::getCuenta() << endl;
	//system("pause");
	return 0;
}//end main()
#endif /* CON_CLASE_EMPLEADOPORCOMISION */

#ifdef CON_CLASE_EMPLEADOPORCOMISION
int main() {
	//Instancia un objeto EmppleadoPorComision
	EmpleadoPorComision empleado(
		"Sue","Jones","222-22-2222",10000,0.06);
	//Establece el formato de salida de punto flotante
	cout << fixed << setprecision(2);
	//Obtiene los datos del empleado por comisi\\'on
	cout << "Informaci\\'on del empleado obtenida por las funciones get:\n"
		<< "\nEl primer nombre es " << empleado.getPrimerNombre()
		<< "\nEl apellido paterno es " << empleado.getApellidoPaterno()
		<< "\nEl n\\'umero de seguro social es "
		<< empleado.getNumeroSeguroSocial()
		<< "\nLas ventas brutas son " << empleado.getVentasBrutas()
		<< "\nLa tarifa de comisi\\'on es "
		<< empleado.getTarifaComision() << endl;

	empleado.setVentasBrutas(8000);
	empleado.setTarifaComision(0.1);

	cout << "\nInformaci\\'on actualizada del empleado mostrada por \
la funci\\'on imprimir:\n";
	empleado.imprimir(); //muestra la nueva informci\\'on del empleado

	//muestra los ingresos del empleado
	cout << "\n\nIngresos del empleado: $" << empleado.ingresos()<<endl;

	return 0;
}//end main()
#endif /* CON_CLASE_EMPLEADOPORCOMISION */
 
