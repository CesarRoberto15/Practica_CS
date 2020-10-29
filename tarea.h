#ifndef TAREA_H
#define TAREA_H

#include "iostream"
#include "string.h"

class Tarea
{
private:
    std::string curso;  //atributo para el nombre del curso que pertenece la tarea
    std::string fecha;  //atributo para la fecha de entrega
    bool estado=false;  //estado de la tarea si se entrego o no
public:
    Tarea();    //constructor por defecto
    Tarea(std::string,std::string,bool);    //contructor inicializador
    //metodos set y get para los atributos
    //curso, fecha y estado
    void setCurso(std::string);
    std::string getCurso();
    void setFecha(std::string);
    std::string getFecha();
    void setEstado(bool);
    bool getEstado();
};

#endif // TAREA_H
