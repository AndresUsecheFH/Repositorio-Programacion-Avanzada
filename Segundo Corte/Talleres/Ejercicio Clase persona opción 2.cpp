/*Autor: Andres Felipe Useche Hernandez
Ejercicio clase persona primera opcion en donde los usuarios ya estan cargados*/


//Se abren las librerias

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

// se crea la funcion principal en donde  se imprimiran los datos 
int main()
{
    
  //se le asignan datos a los atributos y metodos de las clases  
     Persona persona("Juan");
    Profesor profesor("Maria", "Matemáticas");
    Estudiante estudiante("Pedro", 9);
    Estudiante estudiante2("Raul", 7);
    //se imprimen los datos
    cout << "Les presento a " << persona.nombre << endl;
    cout << "Les presento al profesor/a " << profesor.nombre << " que enseña " << profesor.ensena << endl;
    cout << "Les presento al estudiante  " << estudiante.nombre << "y esta en el grado:  " << estudiante.grado << ", " << estudiante.puedecursarprogramacion()  << endl;
    cout << "Les presento al estudiante  " << estudiante2.nombre << "y esta en el grado:  " << estudiante2.grado << ", " << estudiante2.puedecursarprogramacion()  << endl;
 


    
    
    return 0; 
}
