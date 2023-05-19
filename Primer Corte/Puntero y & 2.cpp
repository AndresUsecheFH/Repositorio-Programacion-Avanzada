/* Autor: Andres Felipe Useche Hernandez
 * Fecha: 10-02-2023
 * Tema: Uso de la clase vector*/
 
 #include <iostream>
  //Se crea la biblioteca para usar la funcion sqrt
  #include<cmath>
   
    //Se crea la biblioteca de vector
  #include<vector>
  //Se crea el dominio de la biblioteca "GLOBAL"
  using namespace std;
  int main (){
// Se crea una variable y se le asigna un valor 
int variable_a = 27;
//Se crea un puntero
int*puntero;
// Se señala el puntero a la dirección de la variable 
puntero = &variable_a;
//Se imprime la variable_a
cout<<"la variable tiene el valor :"<<variable_a<<endl;
//Se imprime el puntero
cout<<"valor del puntero :"<< puntero<< endl;
//Se imprime la referencia o dirección
cout<<"la variable tiene el valor :" <<puntero << endl;

return 0;
}
