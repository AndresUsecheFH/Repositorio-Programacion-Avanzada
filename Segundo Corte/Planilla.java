import java.util.Collections;// ya que se va a hacer por coleciones
import java.util.Comparator;//compara elementos
import java.util.ArrayList; // es una libreria de tipo vectores

class Empleado {
  /* Atributos */
  private String nombre;
  private int edad;
  private int salario;

  /* Constructor de la clase */
  public Empleado(String n, int e, int s) {
    this.nombre = n;
    this.edad = e;
    this.salario = s;
  }

  public String getNombre() {
    return nombre;
  }

  public int getEdad() {
    return edad;
  }

  public int getSalario() {
    return salario;
  }

  public void setNombre(String nombre) {
    this.nombre = nombre;
  }

  public void setEdad(int ed) {
    this.edad = ed;
  }

  public void setSalario(int sal) {
    this.salario = sal;
  }

  public String imprimirEmpleado() {
    return "(" + getNombre() + "," + getEdad() + "," + getSalario() + ")";
  }
}// Fin clase Empleado

/*
 * Se requiere que la lista sea ordenada como colección,
 * según un criterio de atributo "Edad", se implementa a través de el método
 * compare de Comparator
 */
class OrdenarEmpleadoEdad implements Comparator<Empleado> {
  /* Se crea el metodo de diferencia con "compare" */
  public int compare(Empleado emp1, Empleado emp2) {
    return emp1.getEdad() - emp2.getEdad();
  }
}

/*
 * Se requiere que la lista sea ordenada como colección,
 * según un criterio de atributo "Salario", se implementa a través de el método
 * compare de Comparator
 */
class OrdenarEmpleadoSalario implements Comparator<Empleado> {
  /* Se crea el metodo de diferencia con "compare" */
  public int compare(Empleado sal, Empleado sal2) {
    return sal.getSalario() - sal2.getSalario();
  }
}

public class Planilla {
  public static void main(String[] args) {

    ArrayList<Empleado> lista = new ArrayList<Empleado>();
    /* se llenan 3 empleados para jugar */
    lista.add(new Empleado("John", 19, 600000));
    lista.add(new Empleado("Andres", 59, 300000));
    lista.add(new Empleado("Juana", 21, 200000));

    System.out.println("lista inicial sin ordenar: ");
    for (Empleado emp : lista) {
      System.out.println(emp.imprimirEmpleado());
    }
    /* se requiere presentar la lista ordenada segun la edad */

    Collections.sort(lista, new OrdenarEmpleadoEdad());
    System.out.println("Se presenta la lista ordenada segun la edad: ");
    for (Empleado emp : lista) {
      System.out.println(emp.imprimirEmpleado());
    }
    Collections.sort(lista, new OrdenarEmpleadoSalario());
    System.out.println("Se presenta la lista ordenada segun el salario ");
    for (Empleado emp : lista) {
      System.out.println(emp.imprimirEmpleado());
  }
}
}
