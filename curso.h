#ifndef CURSO_H
#define CURSO_H

#include "iostream"
#include "string.h"

class Curso
{
private:
    std::string nombre; //atributo para el nombre del curso
public:
    Curso();    //constructor por defecto
    //metodos set y get para el atributo nombre
    void setNombre(std::string);
    std::string getNombre();
};

#endif // CURSO_H
