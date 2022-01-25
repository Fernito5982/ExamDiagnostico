#include "Classe_Alumno.h"
#include <iostream>
#include <iomanip>

using namespace std;

int Alumno::getMatricula() {

	cout << "Matricula : " << matricula << endl;
	return matricula;
}

void Alumno::getCalificaciones() {

	cout <<"\n****************** Calificaciones **********************\n" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << materias[i] << ": "<< calificaciones[i]<< endl;
	}
	cout << "\n********************************************************\n" << endl;

}

float Alumno::getPromedioFinal() {

	//setprecision es un metodo de la libreria iomanip para recortar los digitos del decimal (NO redondea)
	cout << "Promedio Final : " << setprecision(2) << promedioFinal << endl; 
	return promedioFinal;
}


void Alumno::getMaterias() {

	cout << "Las Materias que Cursa el Estudiante son : ";
	for (int i = 0; i < 3; i++) {

		(i < 2) ? cout << materias[i] << "," : cout << materias[i] << ".\n" << endl;

	}
}

void Alumno::getInfoEstudiante() {

	system("cls");
	getMatricula();
	getCalificaciones();
	getPromedioFinal();

}


void Alumno::generarPromedio() {

	for (int i = 0; i < 3; i++) {

		promedioFinal += calificaciones[i];
	}

	promedioFinal /= 3;
}

void Alumno::setCalificaciones() {

	system("cls");
	for (int i = 0; i < 3; i++)
	{
		cout << "Ingresa el nombre de la Materia: ";
		getline(cin, materias[i]);
		cout << "Ingresa la calificacion de la materia " << materias[i]<< ": ";
		cin >> calificaciones[i];
		cin.ignore(); // Evita el salto de linea de mas
		cout << endl;
	}
	
}