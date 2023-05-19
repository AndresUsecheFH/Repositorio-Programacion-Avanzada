/* Autor: Andres Felipe Useche Hernandez
 * Fecha: 8-02-2023
 * Tema: Number Square root
  *Ejercicios spbre los tipos fundamentales de datos
  * "PRIMITIVOS" de C++ */

#include<iostream>
  //Se crea la biblioteca para usar la funcion sqrt
  #include<cmath>
   //Se crea el dominio de la biblioteca "GLOBAL"
  using namespace std;
  
  int main(){
  	
 // creamos la TDA del programa
 
 double x1 = 0, x2 = 12.25, x3 = 0.0121;
 string respuesta;
 
 	cout<<"\n*******************************************"<<endl;
  	cout<<"\n********* Number Square root*******"<<endl;
  	cout<<"\n*******************************************"<<endl;
  //Hacemos un ejemplo de las raices
  	cout<<"\n Ejemplo de raices cuadradas";
  	cout<<"\n La raiz de:  "<<x1<<"   es \t " << sqrt (x1);
  		cout<<"\n La raiz de: "<<x2<<"  es \t " << sqrt (x2);
  			cout<<"\nLa raiz de: "<<x3<<"  es \t " << sqrt (x3)<<endl;
  			
  		//Vamos a hacer un bucle do while, para que el usuario tenga la opcion de hacer otra operacion.
  	 do {
  	     
  	     //Le preguntamos al usuario de cual numero quiere sacarle la raiz cuadrada
  	cout<<" \n Escriba un numero para sacarle su raiz cuadrada: ";
  	     // Se guarda el numero                                   
  	cin>> x1;
  	
  	// Mostramos las respuesta de la raiz
  	cout<< "\n  La raiz cuadrada del numero es:   \n"<<endl;
  	cout<< sqrt(x1)<<endl;
  	
  	//si el usuario escribe si, se vuelve a preguntar, si no, se acaba el buble
  	cout<<"\n¿Quiere sacarle la raiz cuadrada a otro numero?\n ";
  	cin>>respuesta;
  	
  	}
  
  	while( respuesta == "si");
  	
  	
  	cout<<"Fin del programa con exito";
  return 0;
  	    
  }
