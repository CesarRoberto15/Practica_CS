#include "tarea.h"

Tarea::Tarea(){}    //contructor por defecto
Tarea::Tarea(std::string cu,std::string fe,bool es){    //constructor inicializador
    this->curso=cu;
    this->fecha=fe;
    this->estado=es;
}
//metodos set y get de los atributos
void Tarea::setCurso(std::string cu){
    this->curso=cu;
}
std::string Tarea::getCurso(){
    return curso;
}
void Tarea::setFecha(std::string fe){
    this->fecha=fe;
}
std::string Tarea::getFecha(){
    return fecha;
}
void Tarea::setEstado(bool es){
    this->estado=es;
}
bool Tarea::getEstado(){
    return estado;
}
