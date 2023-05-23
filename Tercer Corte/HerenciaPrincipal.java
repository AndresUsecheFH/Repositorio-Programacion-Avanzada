public class HernenciaPrincipal{

public static void main (string []args){
  profesor profesor1 = new profesor ("profesor", "mendoza cuba", 33);

  System.out.println(profesor1,tostring());


  alumno alumno1= new alumno ("alumno", "pardo feo", 15);
  alumno1.setidalumno("alumno123456789");
  System.out.println(profesor1,tostring());

  practicante practicante1 = new practicante ("practicante", "torres milo", 19);
  practicante1.setipracticante("alumno123456789");
  System.out.println(practicante1,tostring());
  
}
}
