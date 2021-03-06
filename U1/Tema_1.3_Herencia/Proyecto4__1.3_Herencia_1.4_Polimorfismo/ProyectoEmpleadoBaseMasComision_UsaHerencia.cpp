// ProyectoEmpleadoBaseMasComision_UsaHerencia.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;
#include "EmpleadoBaseMasComision.h"

int main()
{
	//instancia un objeto EmpleadoBaseMasComision
	EmpleadoBaseMasComision empleado("Bob", "Lewis", "333-33-3333",
		5000, .04, 300);
	//establecer el formato de salida de punto floanate
	cout << fixed << setprecision(2);

	//Obtiene los datos del empleado base mas comisi\'on
	cout << "Informaci\\'on del empleado obtenida por las funciones get:\n"
		<< "\nEl primer nombre es " << empleado.getPrimerNombre()
		<< "\nEl apellido paterno es " << empleado.getApellidoPaterno()
		<< "\nEl n\\'umero de seguro social es "
		<< empleado.getNumeroSeguroSocial()
		<< "\nLas ventas brutas son " << empleado.getVentasBrutas()
		<< "\nLa tarifa de comisi\\'on es "
		<< empleado.getTarifaComision()
		<< "\nEl salario base es " << empleado.getSalarioBase() << endl;

	empleado.setSalarioBase(1000);
	cout << "\nInformaci\\'on actualizada del empleado mostrada por \
la funci\\'on imprimir:\n" << endl;
	empleado.imprimir(); //muestra la nueva informci\\'on del empleado

						 //muestra los ingresos del empleado
	cout << "\n\nIngresos del empleado: $" << empleado.ingresos() << endl;
    return 0;
}

