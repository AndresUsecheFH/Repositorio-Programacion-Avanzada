class Padre{
  //los metoddos privados no se sobrescriben
  private void m1(){
    System.out.println("Desde el padre el m1()");
  }

  protected void m2(){
    System.out.println("Desde el padre el m2()");
  }
}

class Hija extends Padre{
  //nuevo metodo m1()
  //unico a la clase hijasss
  private void m1(){
    System.out.println("Desde Hija ,m1()");
  }
  
   public void m2(){
    System.out.println("Desde el padre el m2()");
  }
}

class Prueba_extends{
  public static void main(String [] args){
    //se instancia  objeto de la clase Padre
    Padre padre= new Padre();
    // Se insstancia objeto de la clase hija
    Padre hija=new Hija();
  
    hija.m2();
    padre.m2();
  }

}
