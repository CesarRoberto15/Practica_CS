#include "menu.h"

Menu::Menu() {} //constructor por defecto
//metodo para crear un profesor
void Menu::crearProfesor(){
    if(p<=10){  //verificamos que haya espacio disponible
        Profesor p1;    //creamos un profesor
        //pedimos atributos al usuario
        std::cout<<"Ingrese el nombre del profesor:"<<std::endl;
        std::cin>>nombre;
        std::cout<<"Ingrese el apellido del profesor:"<<std::endl;
        std::cin>>apellido;
        /*std::cout<<"Desea Ingresar cursos: 1-Si\t2-No"<<std::endl;
        std::cin>>op;
        if(op==1){
            std::cout<<"Ingrese el nombre del curso:"<<std::endl;
            std::cin>>curso;
            c1.setNombre(curso);
        }*/
        //ingresamos atributos al objeto profesor
        p1.setNombre(nombre);
        p1.setApellidos(apellido);
        //p1.setCurso(c1);
        Profesores[p]=p1;   //agregamos al contenedor de profesores
        p++;    //incrementamos el p para el siguiente profesor
    }else{
        std::cout<<"Sin espacio"<<std::endl;    //sino hay espacio se manda mensaje
    }

}
//metodo para crear un alumno
void Menu::crearAlumno(){
    std::string ap="";  //string para demostrar con que profesor trabaja
    if(a<=10){  //verificamos que haya espacio
        Alumno a1;  //creamos un alumno
        //pedimos datos del alumno
        std::cout<<"Ingrese el nombre del alumno:"<<std::endl;
        std::cin>>nombre;
        std::cout<<"Ingrese el apellido del alumno:"<<std::endl;
        std::cin>>apellido;
        /*std::cout<<"Desea Ingresar cursos: 1-Si\t2-No"<<std::endl;
        std::cin>>op;
        if(op==1){
            std::cout<<"Ingrese el nombre del curso:"<<std::endl;
            std::cin>>curso;
            c1.setNombre(curso);
        }*/
        //pedimos el apellido del profesor con quien trabaja
        std::cout<<"Ingrese el apellido de su profesor"<<std::endl;
        std::cin>>ap;
        for(int i=0;i<p;i++){
            if(ap==Profesores[i].getApellidos()){
                op=i;   //si existe guardamos el indice
            }
        }
        //pedimos el ultimo dato del alumno
        std::cout<<"Ingrese el grado del alumno:"<<std::endl;
        std::cin>>grado;
        //ingresamos datos al alumno
        a1.setNombre(nombre);
        a1.setApellidos(apellido);
        //a1.setCurso(c1);
        a1.setGrado(grado);
        Alumnos[a]=a1;  //agregados al contendor de alumnos
        Profesores[op].listarAlumno(a1);    //agregamos al listado de los profesores
        a++;
    }else{
        std::cout<<"Sin espacio"<<std::endl;
    }
}
//metodo para ver los alumnos creados
void Menu::verAlumnos(){
    for(int i=0;i<a;i++){
        Alumnos[i].toString();
    }
}
//metodo para ver los profesores creados
void Menu::verProfesores(){
    for(int i=0;i<p;i++){
        Profesores[i].toString();
    }
}
//metodo para el menu principal
//aqui se va elegir las opciones para las acciones y se llama a los metodos
void Menu::menuPrincipal(){
    int c=0;
    while(op!=3){
        std::cout<<"1-Profesor\t2-Alumnos\t3-Salir"<<std::endl;
        std::cin>>op;
        if(op==1){
            std::cout<<"1-Crear Profesor\t2-Listado de Profesores\t3-Alumnos encargados"<<std::endl;
            std::cin>>c;
            if(c==1){
                crearProfesor();
            }else if(c==2){
                verProfesores();
            }else if(c==3){
                std::cout<<"Ingrese el apellido del profesor:"<<std::endl;
                std::cin>>apellido;
                for(int i=0;i<p;i++){
                    if(apellido==Profesores[i].getApellidos()){
                        op=i;
                    }
                }
                Profesores[op].verAlumnos();
            }
        }else if(op==2){
            std::cout<<"1-Crear Alumno\t2-Realizar tarea\t3-Listaddo de Alumnos\t4-Tareas realizadas"<<std::endl;
            std::cin>>c;
            if(c==1){
                crearAlumno();
            }else if(c==2){
                std::cout<<"Ingrese el apellido del alumno:"<<std::endl;
                std::cin>>apellido;
                for(int i=0;i<a;i++){
                    if(apellido==Alumnos[i].getApellidos()){
                        op=i;
                    }
                }
                Tarea t1;
                Alumnos[op].tareaEntregar(t1);
                op=0;
            }else if(c==3){
                verAlumnos();
            }else if(c==4){
                std::cout<<"Ingrese el apellido del alumno:"<<std::endl;
                std::cin>>apellido;
                for(int i=0;i<a;i++){
                    if(apellido==Alumnos[i].getApellidos()){
                        op=i;
                    }
                }
                Alumnos[op].verTareas();
            }
        }
    }
}
