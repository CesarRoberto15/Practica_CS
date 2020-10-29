#include "alumno.h"

Alumno::Alumno(){}  //contructor por defecto
//metodos set y get de los atributos
void Alumno::setNombre(std::string n){
    this->nombre=n;
}
std::string Alumno::getNombre(){
    return nombre;
}
void Alumno::setApellidos(std::string a){
    this->apellidos=a;
}
std::string Alumno::getApellidos(){
    return apellidos;
}
void Alumno::setGrado(std::string g){
    this->grado=g;
}
std::string Alumno::getGrado(){
    return grado;
}
/*void Alumno::setCurso(Curso cu){
    cursos[c]=cu;
    c++;
}
Curso Alumno::getCurso(){
    return cursos[c];
}*/
//metodo para entregar tarea
void Alumno::tareaEntregar(Tarea ta){
    std::string c,f;    //strings para los atributos de la tarea
    bool e=false;   //bool para estado de la tarea
    //pedimmos al usuario ingresar campos necesarios para la tarea
    std::cout<<"Ingrese el curso:"<<std::endl;
    std::cin>>c;
    std::cout<<"Ingrese la fecha:"<<std::endl;
    std::cin>>f;
    if(c!=" " && f!=" "){   //comprobamos que los campos sean correctos
        e=true; //cambiamos el estado de la tarea
        //ingresamos todos los atributos a la Tarea
        ta.setCurso(c);
        ta.setFecha(f);
        ta.setEstado(e);
        tarea[t]=ta;    //ingresamos la tarea al contenedor
        t++;    //incrementamos el para la siguiente tarea
    }else{
        tareaEntregar(ta);  //se regresa todo de nuevo
    }
}
//metodo para imprimir informacion del alumno
void Alumno::toString(){
    std::cout<<"Apellidos y Nombres: "<<apellidos<<", "<<nombre<<std::endl;
    std::cout<<"Grado: "<<grado<<std::endl;
    //std::cout<<"Cursos:"<<std::endl;
    /*for(int i=0;i<c;i++){
        std::cout<<i+1<<": "<<cursos[i].getNombre()<<std::endl;
    }*/
}
//metodo para visualizar todas las tareas del alumno
void Alumno::verTareas(){
    std::cout<<"Tareas"<<std::endl;
    for(int i=0;i<t;i++){   //recorremos todo el contendor de tareas y los mostramos
        std::cout<<i+1<<": "<<tarea[i].getCurso()<<", "<<tarea[i].getFecha()<<", "<<tarea[i].getEstado()<<std::endl;
    }
}
