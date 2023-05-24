/*Autor: Andres Felipe Useche Hernandez
Ejercicio clase persona primera opcion en donde los usuarios ya estan cargados*/
//se crean las librerias necesarias
#include <iostream>
#include <math.h>

using namespace std;
//se crea la clase Triangulo
class Triangulo {
    //se establecen estos datos como privados
private:
    float altura;
    float base;
    float hipotenusa_;
    int T;
    //se establecen estos datos y operaciones como publicas
public:}
//se crea el constructor del Triangulo
    Triangulo(float altura, float base, float hipotenusa_) {
        this->altura = altura;
        this->base = base;
        this->hipotenusa_ = hipotenusa_;
        
    }
    // se crea la funcion para calcular la hipotenusa
    float Hipotenusa() {
        hipotenusa_ = sqrt(pow(altura, 2) + pow(base, 2));
        return hipotenusa_;
    }
    //se crea la funcion para calcular el perimetro en el caso de que el usuario digite solo la base y la altura
    float Perimetro_H() {
        float perimetro;
        hipotenusa_ = sqrt(pow(altura, 2) + pow(base, 2));
        perimetro = hipotenusa_ + altura + base;
        return perimetro;
    }
    //funcion para calcular la altura
    float Altura() {
        altura = sqrt(pow(hipotenusa_, 2) - pow(base, 2));
        return altura;
    }
    
    //se crea la funcion para calcular el perimetro en el caso de que el usuario digite solo la base y la hipotenusa
    float Perimetro_A() {
        float perimetro;
        altura = sqrt(pow(hipotenusa_, 2) - pow(base, 2));
        perimetro = hipotenusa_ + altura + base;
        return perimetro;
    }
};
//se crea la funcion principal
int main() {
    float altura, base, hipotenusa_;
    int T;
//se le presentan las opciones al usuario
    cout << "Digite 1, si desea hallar la hipotenusa del triangulo rectangulo, digite 2 si quiere calcular su altura:" << endl;
    cin >> T;
//esto se hace para que identifique y se inicialice los datos de la clase
    Triangulo t(0, 0, 0);
// de esta manera se ejecutan las opciones con sus respectivas operaciones
    switch (T) {
        case 1:
            cout << "Digite la altura y la base del triangulo rectangulo: " << endl;
            cin >> altura >> base;

            t = Triangulo(altura, base, 0);

            cout << "La hipotenusa es: " << t.Hipotenusa() << endl;
            cout << "La altura es: " << altura << endl;
            cout << "El perimetro es: " << t.Perimetro_H() << endl;

            break;

        case 2:
            cout << "Digite la hipotenusa y la base del triangulo rectangulo: " << endl;
            cin >> hipotenusa_ >> base;

            t = Triangulo(0, base, hipotenusa_);

            cout << "La hipotenusa es: " << hipotenusa_ << endl;
            cout << "La altura es: " << t.Altura() << endl;
            cout << "El perimetro es: " << t.Perimetro_A() << endl;

            break;
    }

    return 0;
}

