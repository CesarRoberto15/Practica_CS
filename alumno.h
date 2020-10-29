#ifndef ALUMNO_H
#define ALUMNO_H

#include "iostream"
#include "string.h"
#include "memory"
#include "curso.h"
#include "tarea.h"

class Alumno
{
private:
    std::string nombre; //atributo para el nombre del alumno
    std::string apellidos;  //atributo para el apellido del alumno
    std::string grado;  //el grado que cursa el alumno
    int t=0;        //contador para las tareas del alumno
    Tarea* tarea=new Tarea[10]; //un contendor para las tareas
public:
    Alumno();   //constructor por defecto
    //metodos set y get para los atributos
    //nombre, apellido grado
    void setNombre(std::string);
    std::string getNombre();
    void setApellidos(std::string);
    std::string getApellidos();
    void setGrado(std::string);
    std::string getGrado();
    void tareaEntregar(Tarea);  //metodo para entregar tarea
    void verTareas();   //metodo para visualizar las tareas
    void toString();    //metodo para visualizar informacion del alumno
};

#endif // ALUMNO_H
