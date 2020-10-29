#ifndef MENU_H
#define MENU_H

#include "alumno.h"
#include "profesor.h"

class Menu
{
public:
    Alumno* Alumnos=new Alumno[10]; //contenedor para los alumnos creados
    Profesor* Profesores=new Profesor[10];  //contenedor para los profesores creados
    std::string nombre="";  //atributo de nombre para ingresar
    std::string apellido="";    //atributo para apellido a ingresar
    std::string grado="";   //atributo para grado a ingresar
    std::string curso="";   //atributo para curso a ingresar
    std::string fecha="";   //atributo para fecha a ingresar
    bool estado=false;  //inicializador de estado de tarea
    Tarea t1;   //objeto para Tarea para alumno
    int a=0,p=0;    //contadores para el numero de alumnos y profesores creados
    int op=0;   //atributo para elegir la opcion de menu
    Menu(); //constructor por defecto
    void crearProfesor();   //metodo para crear un nuevo profesor
    void crearAlumno(); //metodo para crear un nuevo alumno
    void verAlumnos();  //metodo para ver listado de alumnos creados
    void verProfesores();   //metodo para ver listado de profesores creados
    void menuPrincipal();   //metodo para mostrar el menu principal
};

#endif // MENU_H
