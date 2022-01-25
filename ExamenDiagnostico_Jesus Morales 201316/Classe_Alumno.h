#pragma once

#include <string>
using namespace std;

class Alumno
{
public:

	//CONSTRUCTOR
	Alumno(int _matricula) : matricula(_matricula) {}

	//GETTERS
	int getMatricula();
	void getCalificaciones();
	float getPromedioFinal();
	void getMaterias();
	void getInfoEstudiante();

	//SETTERS
	void setCalificaciones();

	//METODOS
	void generarPromedio();

private:

	float calificaciones[3];
	string materias[3];
	int matricula;
	float promedioFinal = 0;
	

};
