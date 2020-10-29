#ifndef PROFESOR_H
#define PROFESOR_H

#include "iostream"
#include "string.h"
#include "memory"
#include "curso.h"
#include "alumno.h"

class Profesor
{
private:
    std::string nombre; //atributo para nombre del profesor
    std::string apellidos;  //atributo para el apellido del profesor
    Alumno* alumnos=new Alumno[10]; //contenedor de alumnos a cargo
    int c=0;    //contador para el numero de alumnos
    int c1=0;
public:
    Profesor(); //contructor por defecto
    //metodos set y get para los atributos
    //nombre, apellido
    void setNombre(std::string);
    std::string getNombre();
    void setApellidos(std::string);
    std::string getApellidos();
    void listarAlumno(Alumno);  //metodo para poder ingresar un alumno
    void verAlumnos();  //metodo para ver a los alumnos acargo
    /*void setCurso(Curso);
    Curso getCurso();
    void setAlumno(Alumno);
    Alumno getAlumno();*/
    void toString();    //metodo para visualizar la informacion del profesor
};

#endif // PROFESOR_H
