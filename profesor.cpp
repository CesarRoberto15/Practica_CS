#include "profesor.h"

Profesor::Profesor(){}  //constructor por defecto
//set y get de los atributos
void Profesor::setNombre(std::string n){
    this->nombre=n;
}
std::string Profesor::getNombre(){
    return nombre;
}
void Profesor::setApellidos(std::string a){
    this->apellidos=a;
}
std::string Profesor::getApellidos(){
    return apellidos;
}
/*void Profesor::setCurso(Curso cu){
    this->cursos[c]=cu;
    c++;
}
Curso Profesor::getCurso(){
    return cursos[c];
}
void Profesor::setAlumno(Alumno al){
    this->alumnos[c1]=al;
    c1++;
}
Alumno Profesor::getAlumno(){
    return alumnos[c1];
}*/
//metodo para imprimir la informacion del profesor
void Profesor::toString(){
    std::cout<<"Apellidos y Nombres: "<<apellidos<<", "<<nombre<<std::endl;
    //std::cout<<"Cursos:"<<std::endl;
    /*for(int i=0;i<c;i++){
        std::cout<<i+1<<": "<<cursos[i].getNombre()<<std::endl;
    }
    for(int i=0;i<c1;i++){
        std::cout<<i+1<<": "<<alumnos[i].getNombre()<<" "<<alumnos[i].getApellidos()<<std::endl;
    }*/
}
//metodo para agregar un nuevo alumno a la lista del profesor
void Profesor::listarAlumno(Alumno a){
    alumnos[c]=a;
    c++;
}
//metodo para ver el listado de alumnos
void Profesor::verAlumnos(){
    std::cout<<"Alumnos"<<std::endl;
    for(int i=0;i<c;i++){
        std::cout<<i+1<<": "<<alumnos[i].getApellidos()<<", "<<alumnos[i].getNombre()<<std::endl;
    }
}
