/**************************
  primer ejercicio- programacion avanzada- estructuras de datos
 problema: Se tiene un gym, el cual solicita hacer el registro de usuarios. La cantidad de registros deben ser indicados al principio.
 los datos solicitados deberian ser eshaustivos, la finalidad es imprimir los nombres de los usuarios con registro satisfactorio.
 
 
 -Datos a solicitar 
 *nombres
 * edad
 * genero
 * fecha de inscripcion
 * hijos
 * masa muscular
 * plan
 * franja horaria
 * lesiones
 * altura
 
 
 
 -tips solucion:
 *Para la solucion se recomienda hacer uso de la estructura de datos
 
 *************************/
 
 #include <iostream>
 using namespace std;
 /* Declaracion de una estructura de datos que capture los datos iniciales solicitados*/
 
 struct DatosPersonas{
   string nombres;
   int edad;
   char genero;
   string fecha_de_inscripcion;
   int hijos;
  float masa_muscular;
  string plan;
  string franja_horaria;
   string lesiones;
   float altura;};
 int main()
 {
     
     //Bienvenida al programa
    cout<<"***********"<<endl;
    cout<<"***Bienvedido al GYM***"<<endl;
    cout<<"***********"<<endl;
     
     //Se crea las variables contadores y auxiliares necesarias
     int i;
     int cantidad_personas;
     
     // Se pide al usuario la cantidad de personas que va a registrar
     cout <<"�Cuantas personas se van a registrar?"<<endl;
     cin >> cantidad_personas;
     // se crea el vector de personas con cantidad de personas

// se crea objeto estructura  Dtospersonajes
    DatosPersonas persona[cantidad_personas];
 
 // SE HACE UN BUBLE PARA CAPTURAR LOS DATOS DE LAS personas
 for(i=0; i<cantidad_personas; i++){
     //Se presenta la pregunta y la captura por cada DATO
     cout<<"Ingrese nombre: "<<endl;
     cin>> persona[i].nombres;
     
     cout<<"Ingrese edad: "<<endl;
     cin>> persona[i].edad;
     
     cout<<"Ingrese genero: "<<endl;
     cin>> persona[i].genero;
     
 }
     //Presentar los nombres de los usuarios registrados satisfactoriamente
     
     cout<<"\n\n\n**********"<<endl;
     cout<<"Usuarios registrados satisfactoriamente"<<endl;
     
     for(i=0;i<cantidad_personas; i++){
         
        cout<<persona[i].nombres<<endl;
     }
     
     
 
 return 0;
 }
