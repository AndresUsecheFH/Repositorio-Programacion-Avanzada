//Autor: Andres Felipe Useche Hernandez
//Ejercicio circulo/clase


// se abren las librerias a utilizar
#include <iostream>
using namespace std;
//se crea la clase circulo
class circulo{
    //se establece lo privado
    private:
    float radio;
    //se establece lo publico
    public:
   //se crea el constructor para el encapsulamiento de las funciones
   circulo(float radio){
       this->radio=radio;
   }
    //funcion para calcular el area del circulo
    float Area(){
        float area;
        area= (radio*radio)*3.1416;
        return area;
    }
    //funcion para calcular el perimetro
    float Perimetro(){
        float perimetro;
        perimetro=(radio*2)*3.1416;
        return perimetro;
    }
    //funcion para calcular el Diametro
    float Diametro(){
        float diametro;
        diametro= radio*2;
        return diametro;
    }
    //se cierra la clase
};
//se abre la funcion principal
int main(){
    //se crea la variable radio y se le pide al usuario que la digite
    float radio;
    cout<<"¿Cual es el radio del circulo?"<<endl;
    cin>>radio;
    //se crea una variable del tipo circulo para ejecutar la estructura
     circulo circulo(radio);
    //se imprimern los valores
    cout<<"el area del circulo es: "<<circulo.Area()<<endl;
    cout<<"el Perimertro del circulo es: "<<circulo.Perimetro()<<endl;
    cout<<"el Diametro del circulo es: "<<circulo.Diametro()<<endl;
    
    
    return 0;
}