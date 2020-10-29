#include "curso.h"

Curso::Curso(){}    //constructor por defecto
//metodos set y get de nombre
void Curso::setNombre(std::string n){
    this->nombre=n;
}
std::string Curso::getNombre(){
    return nombre;
}
