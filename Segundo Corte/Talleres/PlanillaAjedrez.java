/*Subir un fichero (.png, .pdf), el cual pueda manipular una lista de Jugadores de Ajedrez que han participado en un evento. Los datos son: Nombre, ELO, edad, valorPremio. El ELO representa un valor del tipo entero al igual que el valorPremio. Se requiere una aplicación que se pueda ordenar los jugadores en función de el ELO, de la edad y del valor del premio. Inicialmente, la aplicación deberá presentar la lista de almenos 7 jugadores de forma desordenada. Crear las Clases correspondientes en el fichero escrito a mano y presentar la captura en pdf, png, etc.*/

import java.util.ArrayList;
import java.util.Comparator;
import java.util.Collections;

class Jugadores {

  private String nombre;
  private int ELO;
  private int edad;
  private int valorpremio;

  public Jugadores(String N, int E, int ed, int v) {

    this.nombre = N;
    this.ELO = E;
    this.edad = ed;
    this.valorpremio = v;
  }

  public String getNombre() {
    return nombre;
  }

  public int getELO() {
    return ELO;
  }

  public int getEdad() {
    return edad;
  }

  public int getValorpremio() {
    return valorpremio;
  }

  public void setNombre(String nombre) {
    this.nombre = nombre;
  }

  public void setELO(int ELO) {
    this.ELO = ELO;
  }

  public void setEdad(int edad) {
    this.edad = edad;
  }

  public void setValorpremio(int valorpremio) {
    this.valorpremio = valorpremio;
  }

  public String ImprimirJugadores() {
    return "(" + getNombre() + "," + getELO() + "," + getEdad() + "," + getValorpremio() + ")";
  }
}

class OrdenarELO implements Comparator<Jugadores> {

  public int compare(Jugadores ELO1, Jugadores ELO2) {
    return ELO1.getELO() - ELO2.getELO();
  }
}

class OrdenarEdad implements Comparator<Jugadores> {

  public int compare(Jugadores edad1, Jugadores edad2) {
    return edad1.getEdad() - edad2.getEdad();
  }
}

class OrdenarVpremio implements Comparator<Jugadores> {

  public int compare(Jugadores valorpremio1, Jugadores valorpremio2) {
    return valorpremio1.getValorpremio() - valorpremio2.getValorpremio();
  }
}

public class PlanillaAjedrez {
  public static void main(String[] args) {

    ArrayList<Jugadores> lista = new ArrayList<Jugadores>();
    lista.add(new Jugadores("John", 2500, 19, 2000));
    lista.add(new Jugadores("Andres", 987, 34, 800));
    lista.add(new Jugadores("Paula", 845, 21, 600));
    lista.add(new Jugadores("Daniel", 650, 45, 500));
    lista.add(new Jugadores("Jairo", 900, 65, 700));
    lista.add(new Jugadores("Alfredo", 1546, 19, 1000));
    lista.add(new Jugadores("Jessica", 1800, 45, 1500));
    lista.add(new Jugadores("Armando", 1034, 68, 900));
    System.out.println("lista inicial sin ordenar: ");
    for (Jugadores jugadores : lista) {
      System.out.println(jugadores.ImprimirJugadores());
    }
    /* se requiere presentar la lista ordenada segun el ELO */
    Collections.sort(lista, new OrdenarELO());
    System.out.println("Se presenta la lista ordenada segun el ELO: ");
    for (Jugadores ELO : lista) {
      System.out.println(ELO.ImprimirJugadores());
    }
    Collections.sort(lista, new OrdenarEdad());
    System.out.println("Se presenta la lista ordenada segun la edad: ");
    for (Jugadores edad : lista) {
      System.out.println(edad.ImprimirJugadores());
    }
    Collections.sort(lista, new OrdenarVpremio());
    System.out.println("Se presenta la lista ordenada segun el Valor del premio: ");
    for (Jugadores valorpremio : lista) {
    System.out.println(valorpremio.ImprimirJugadores());
    }
  }
}
