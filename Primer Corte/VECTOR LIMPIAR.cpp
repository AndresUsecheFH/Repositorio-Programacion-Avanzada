/* Autor: Andres Felipe Useche Hernandez
 * Fecha: 8-02-2023
 * Tema: Uso de la clase vector*/
 
 #include <iostream>
  //Se crea la biblioteca para usar la funcion sqrt
  #include<cmath>
   
    //Se crea la biblioteca de vector
  #include<vector>
  //Se crea el dominio de la biblioteca "GLOBAL"
  using namespace std;
  
  
  //Se crea la funcion principla
  int main(){
      // Se declara el objeto del tipo del tipo de vector
      vector<int>numeros_vector;
      
      int i, j, k;
      
      // Se asigna tamaño de 7 al vector y se inicualiza en 2
      
     numeros_vector.assign(7,2);
     
     //Se imprime los primerpos valores del vector
     cout<<"1.contenido inicial del vector"<<endl;
     //se recorre el vector para imprimirlo
     for(i=0; i<numeros_vector.size(); i++){
     cout<<numeros_vector[i]<<" " ;
     
     
     }
     cout<<endl;
     //se cambia  los valores del vector
     //Con push.back se añade un elemento al final del vector
     
     cout<< "2.Cambio de los valores del vector:"<<endl;
     numeros_vector.push_back(4);
     cout<<"Contenido al cambiar el vector"<<endl;
     for(i=0; i<numeros_vector.size(); i++)
     //Se imrime el vector
     cout<<numeros_vector[i]<<" ";
     
     cout<<endl;
     //Ahora vamos añadir un nuevo valor al inicio del vector con .inset() y .begin(),
     //en este caso, un 5

     numeros_vector.insert(numeros_vector.begin(), 5);
     cout<<"3.contenido del vector al añadirle el valor : "<<endl;
     for(i=0; i<numeros_vector.size(); i++)
     cout<<numeros_vector[i]<<" ";
     
     
     cout<<endl;
     
       //Ahora vamos añadir un nuevo valor al inicio del vector con .inset() y .begin(),
     //en este caso, un 5

     numeros_vector.insert(numeros_vector.begin()+3, 7);
     cout<<"4.contenido del vector al añadirle el valor : "<<endl;
     for(i=0; i<numeros_vector.size(); i++)
     cout<<numeros_vector[i]<<" ";
     
     
     cout<<endl;
     
     
     
      //Ahora vamos a eliminar el ultimo elemento del vector
      numeros_vector.pop_back();
     cout<<"5.Contenido al cambiar el vector"<<endl;
     for(i=0; i<numeros_vector.size(); i++)
     cout<<numeros_vector[i]<<" ";
     
     cout<<endl;
     
     //Ahora si queremos mostrar una posicion especifica del vector por ejemplo la primera
     //se imprime la posicion en donde esta
     cout<<"6.Elemento del vector que esta en la primera posicion: ";
     cout<<numeros_vector[0]<<endl;
     

     
     //Se limpia los valores del vector con .clear()
    
     numeros_vector.clear();
      
     cout<<"7.Elementos del vector eliminados "<<endl;
     //Vamos a recorrer el vector y se supone que no va a aparecer nada
      for(i=0; i<numeros_vector.size(); i++)
 cout<<numeros_vector[i]<<endl;
 
 
 
     return 0;
  }
