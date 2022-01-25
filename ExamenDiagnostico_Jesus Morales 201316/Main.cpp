/*
	Name: EXAMEN DIAGNOSTICO
	Copyright: 201316
	Author: JESUS FERNANDO MORALES DUARTE
	Date: 24/01/22 06:56

	Description:  IMPLEMENTAR LA ESTRUCTURA DE ALMACENAMIENTO EN C++ PARA N CANTIDAD DE ALUMNOS Y
    3 MATERIAS POR ALUMNO. LOS VALORES DEBEN SER LEIDOS DESDE EL TECLADO. CON LA CALIFICACION 
    ESPECIFICADA PARA CADA ALUMNO. IMPRIMIR TODOS LOS VALORES ALMACENADOS.

*/

#include <iostream>
#include "Classe_Alumno.h"

using namespace std;

int main()
{

    int matricula = 0;
    float promedio = 0;

    cout << "Ingresa la matricula del Estudiante: ";
    cin >> matricula;
    system("CLS");

    Alumno Fernando(matricula);
    cin.ignore(); // Evita el salto de linea de mas
    Fernando.setCalificaciones();
    Fernando.generarPromedio();

    do
    {
        promedio = Fernando.getPromedioFinal();

        if (promedio > 0)
        {
            Fernando.getInfoEstudiante();
        }

        else {

           
            cout << "Ha ocurrido un error porfavor intentalo de nuevo\n" << endl;
            system("PAUSE");
            Fernando.setCalificaciones();
            Fernando.generarPromedio();
        }

    } while (promedio < 0);
           
    return 0;
}

