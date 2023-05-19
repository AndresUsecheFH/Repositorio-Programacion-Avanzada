/*TALLER NUMERO 2
Autor: Andres Felipe Useche Hernandez

Ejercicio: creacion de histograma con valores aleatoreos*/


//Se crean las bibliotecas que nos permitiran desarrollar el programa
#include<iostream>
#include<vector>
#include<stdlib.h>

//Se crea el dominio de la biblioteca "GLOBAL"
using namespace std;
//se crea una estructura que contenga el valor maximo y el tamaño del array
struct resultado{
    
    int max;
    int size;
    int *puntero;
};

//Se crea una funcion, en la cual se va a rellenar el vector con elementos aleatorios
 int generar_vector_aleatoreo(){


    //declarar variables
    int valor_funcion;
    valor_funcion.size=0;
    valor_funcion.max=0;
    cout<<"Ingrese el tamaño para generar el conjunto aleatorio: ";
    cin>> valor_funcion.size;
    //se crea el array del tamaño del vector valor_funcion.size_array;
    int *array_v=new int[valor-funcion.size];
    //Se crea y se presenta el conjunto de aleatorios
    for ( int i =0; i<valor_funtion.size_array; i++){
        *(array_v+i) = (rand()%20);
        //se le asigna un orden a las variables para facilitar el orden al histograma mas adelante
        cout<<("valor %d", i)
        cin>>("%d", array_v[i])
    }
   return=array_v;
}


//se declara la funcion de la creacion del histograma
funcion histograma(){
    // se imrime los titulos de guia del histograma
    cout<< "INDEX\t valor\t histograma\n";
    
    //se recorre el vector para llenar los valores del histograma con el fin de decir el valor que se repite
     for ( int i =0; i<valor_funtion.size_array; i++){
         
         cout<<("%3d \t \t %d \t \t",i,array_v[i]);
         //se recorre el vector para contar y imprimir el numero de veces que hay un valor
          for ( int a =0; a<array_v[i]; a++){
              
              
              cout<<("%c", '*');
          }
          
          cout<<"  ";
    
}

int main(){
    //se crea las variables para hacer el menu
    int a;
    string respuesta;
    cout<<"Ponga 1 si quiere generar y visualizar un vector con numeros aleatorios y 2 para ver el histograma";
    cin>>a;
    //se crea un bucle con el fin de reperir el menu si el usuario lo desea
    do{
    //se inicializa el menu
    switch(a){
       // case 1, se refiere que el usuario quiere ver los valores que se generaron 
        case 1;
        //imprime la funcion que muestra los valores
        cout<<generar_vector_aleatoreo;
        //se cierra esta opcion
        break;
        //case 2, en el caso del que el usuario quiera ver el histograma generado
        case 2;
        cout<<histograma;
        break;
    }
        cout<<"¿Quiere repetir el menu si/no"<<endl;
        
        //se cierra el bucle
    }
    while(respuesta==si);
    cout<<"programa finalizado con exito";
    return 0;
}
