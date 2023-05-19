/*Tema: Arrays, Clase vector, aleatoridad, funciones
Autor: Andres Useche
fecha: 15/02/2023

Problema:
-Crear una forma para crear numeros aleatorios, tal que, se pueda contar la frecuencia y poder graficar tipo histograma.
Se recomienda usar funciones, arrays y la clase Vectar de STL
Para generar el conjunto de aleatorios se debera preguntar la cantidad de elementos del usuario
Se recomienda tambien hacer un menu

//se hace una funcion para generar un array aleatorio

Se hace una funcion para realizar un histograma
*/
#include<iostream>
#include<vector>
#include<ctime>

using namespace std;

struct valores{
    int max_array;   // Valor maximo del conjunto
    int size_array;    // Tamaño del conjunto
    int *puntero_array;   // Apuntador al conjunto de valores
};

//se hace funcion para crear un array aleatorio
valores generar_array_aleatorio(){
    //declarar variables
    valores valor_funcion;
    valor_funcion.size_array=0;
    valor_funcion.max_array=0;
    cout<<"Ingrese el tamaño para generar el conjunto aleatorio: ";
    cin>> valor_funcion.size_array;
    //se crea el array del tamaño del vector valor_funcion.size_array;
    int *array_v=new int[valor-funcion.size-array];
    //Se crea y se presenta el conjunto de aleatorios
    for ( int i =0; i<valor_funtion.size_array; i++){
        *(array_v+i) = (rand()%20);
    }
    
}
int main(){
    
    //declaracion de variables
    int i, j ,k ;
    int array_cinjunto_aleatorio[]= {};
    bool bandera=true;
    
    //Menu de presentacion de opciones al usuario: bucle
    
    while(bandera){
        cout<<"********************************"<<endl;
        cout<<"******Menu principal************"<<endl; 
        cout<<"********************************"<<endl;
        cout<<"seleccione la opcion"<<endl;
        cout<<" 0: generar un conjunto de valores aleaatorios"<<endl;
        cout<<" 1: Generar histograma del conjunto de valores aleatorios"<<endl;
        cout<<" 2: Salir de la aplicacion "<<endl;
        cin>>k;
        switch (k){
            
            case 0;
            cout<<"ingrese el tamaño para generar el conjunto aleatorio: ";
        }
        
    }
    
    return 0;
}
