/*Autor: Andres Felipe Useche Hernandez
Ejercicio clase persona primera opcion en donde los usuarios ya estan cargados*/
#include <iostream>
using namespace std;
//Se crea la clase principal Persona
class Persona {
    //Se establecen los datos publicos ya que se necesitan heredar a otras clases
    public:
        string nombre;
    //se crea el constructor
        Persona(string nombre){
            this->nombre= nombre;
        }
};
//se crea la clase Profesor
class Profesor : public Persona {
    public:
    
        string ensena;
    //se crea el constructor en donde se añaden atributos de la clase Persona
        Profesor(string nombre,string ensena) : Persona(nombre) {
        
            this->ensena= ensena;
        } 
};
//se crea la clase estudiante en donde hereda datos de la clase persona

class Estudiante : public Persona {
     public:
        int grado;
        //en el constructor se añaden atributos de la clase Persona
        Estudiante(string nombre, int grado) : Persona(nombre), grado(grado) {}
        //Se crea la funcion para saber si el estudiante puede estudiar progracion
        string puedecursarprogramacion(){
            //si el grado es menor a 8 retornara que el estudiante no podra estudiar programacion, de lo contario si podra hacerlo
            if (this->grado > 8) {
                return "puede estudiar programacion."; 
            } else {
                return "no puede estudiar programacion.";
            }
        }
};

//se crea la funcion principal
int main()
{
    //se inicializan las variables
    string Pregunta;
    int opcion;
    //se establece un bucle para que el usuario tenga la opcion de repetir el proceso y presentar a otra persona
    do{
        //le pide la opcion
    cout<<"Dijite 1 si quiere presentar a una persona, Dijite 2 si quiere presentar a un profesor y la materia que enseña, dije 3 si quiere presentar a un estudiante, su grado y si puede estudiar programacion: "<<endl;
    cin>> opcion;
    
    //se crea la estructura de contro switch en donde se dividen las opciones con sus respectivos procesos
    switch (opcion){
        //en el caso uno presentara a una persona
        case 1:
            {
                string nombre;
                cout<<"dijite el nombre a la persona a presentar: "<<endl;
                cin>>nombre;
                Persona persona(nombre);
                cout<<"les presento a la persona "<<persona.nombre<<endl;
                break;
            }
        //en el caso dos presentara a un profesor y la materia que enseña
        case 2: 
            {
                string nombre, ensena;
                cout<<"dijite el nombre del profesor a presentar: "<<endl;
                cin>>nombre;
                cout<<"dijite lo que enseña el profesor: "<<endl;
                cin>>ensena;
                Profesor profesor(nombre, ensena);
                cout<<"les presento al profesor "<<profesor.nombre<<" y enseña "<<profesor.ensena<<endl;
                break;
            }
        //en el caso tres presentara al estudiante, el grado en el que esta y si puede o no puede estudiar programacion
        case 3:
            {
                string nombre;
                int grado;
                cout<<"dijite el nombre del estudiante a presentar: "<<endl;
                cin>>nombre;
                cout<<"dijite el grado del estudiante: "<<endl;
                cin>>grado;
                Estudiante estudiante(nombre, grado);
                cout<<"les presento al estudiante "<<estudiante.nombre<<" y está en el grado "<<estudiante.grado<<" ("<<estudiante.puedecursarprogramacion()<<")"<<endl;
                break;
            }
    }
    //se le pregunta al usuario si quiere presentar a otra persona, si dice si, el programa va apresentar nuevamente las opciones
    cout<<"¿Quiere presentar a otra persona, profesor o estudiante?"<<endl;
    cin>>Pregunta;
    }while(Pregunta=="si");


    
    
    return 0; 
}
