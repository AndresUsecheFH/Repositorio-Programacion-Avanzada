/*Fehca 19 de mayo de 2023
  *Autor: Andres Useche
  *Tema: Overridin en Java
  */

class Padre{
  //Se crea un metodo show()
 void show(){

    System.out.println("Mostrar desde clase padre");

    
  }
}

class Hija extends Padre{
  //se sobre escribe el metodo show en el sub clase
  void show(){
    System.out.println("Show() desde la clase Hija");
  }
}

class Over10_5_Padre{
  public static void main(String [] args){
    //se instancia  objeto de la clase Padre
    Padre padre= new Padre();
    // Se insstancia objeto de la clase hija
    Hija hija=new Hija();
  
    hija.show();
    padre.show();
  }
}
