
//importamos las librerias que se van a utilizar a lo largo del codigo
import java.util.ArrayList;
import java.util.Scanner;
import java.util.InputMismatchException;

// se crea la clase abstracta
abstract class ProductoElectronico {
  // se establece como protected para que pueda heredar sin problemas a las demas
  // clases
  protected String nombre;
  protected double precio;
  protected String garantia;

  // se crea el constructor
  public ProductoElectronico(String nombre, double precio, String garantia) {
    this.nombre = nombre;
    this.precio = precio;
    this.garantia = garantia;

  }

  // se crean los metodos get
  public String getNombre() {
    return nombre;
  }

  public double getPrecio() {
    return precio;
  }

  public String getGarantia() {
    return garantia;

  }

  // se crea el metodo abstracto cargar
  public abstract void cargar();

}

// se establece la clase celular que hereda metodos y atributos de la clase
// ProductoElectronico
class Celular extends ProductoElectronico {

  private int bateria;
  private String Tiempocarga;

  // constructor

  public Celular(String nombre, double precio, String garantia, int bateria, String Tiempocarga) {
    // se establece el super para poder usar los atributos y metodos de la clase
    // padre
    super(nombre, precio, garantia);
    this.bateria = bateria;
    this.Tiempocarga = Tiempocarga;

  }

  // metodo para guardar el atributo bateria
  public int getBateria() {
    return bateria;
  }

  // metodo parar guardar el atributo tiempo de carga
  public String getTiempocarga() {
    return Tiempocarga;
  }

  // metodo para realizar una llamada
  public void hacerllamada() {
    System.out.println("realizando llamada");

  }

  // sobreescritura del metodo cargar
  @Override
  public void cargar() {
    System.out.println("cargando el celular " + nombre + "que tiene bateria de  " + bateria + " %"
        + "se demora en cargar " + Tiempocarga);
  }
}

// se establece la clase computadora que hereda metodos y atributos de la clase
// ProductoElectronico
class Computadora extends ProductoElectronico {
  protected String procesador;

  // constructor

  public Computadora(String nombre, double precio, String garantia, String procesador) {
    super(nombre, precio, garantia);
    this.procesador = procesador;
  }

  // se establece un metodo para guardar el atributo procesador
  public String getProcesador() {
    return procesador;
  }

  // se sobreescribe el metodo
  @Override
  public void cargar() {
    System.out.println("Cargando la computadora " + nombre);
  }
}

// se crea la clase principal
public class TiendaElectronica {

  public static void main(String[] args) {
    // se crea el ArrayList en donde se guardaran los datos de los productos
    ArrayList<ProductoElectronico> listaProductos = new ArrayList<>();
    // Scanner para pedir al usuario los valores
    Scanner scanner = new Scanner(System.in);
    int option = 0;
    // se establece el menu
    while (option != 3) {
      System.out.println(
          "Acontinuacion encontrara un menu dijite 1 para crear un nuevo producto, dijite 2 para mostrar los productos y 3 para salir del programa ");
      System.out.println("Menu: ");
      System.out.println("1. Crear producto ");
      System.out.println("2. Mostrar productos");
      System.out.println("3. Salir del programa");

      option = scanner.nextInt(); // Actualización de la variable option
      switch (option) {
        case 1:// crea un nuevo producto
          Crearproducto(listaProductos, scanner);
          break;

        case 2:// muestra la lista de productos
          Mostrarproductos(listaProductos);
          break;

        case 3:// sale del programa
          System.out.println("Saliendo del programa...");
          break;
        default:
          System.out.println("Opción inválida. Intente nuevamente.");
          break;

      }
    }

    scanner.close();
  }

  // metodo para crear un producto y agregarlo al ArrayList
  public static void Crearproducto(ArrayList<ProductoElectronico> listaProductos, Scanner scanner) {
    System.out.println("Ingrese los datos del producto: ");

    System.out.println("Nombre: ");
    String nombre = scanner.next();

    System.out.print("Precio: ");
    double precio = scanner.nextDouble();

    System.out.print("Garantía(ingrese unicamente palabras): ");
    String garantia = scanner.next();

    System.out.print("Tipo de producto (1. Celular, 2. Computadora): ");
    int tipo = scanner.nextInt();

    if (tipo == 1) {
      System.out.println("Bateria(%): ");
      int bateria = scanner.nextInt();

      System.out.println("se demora en cargar(ingrese unicamente palabras): ");
      String Tiempocarga = scanner.next();

      Celular celular = new Celular(nombre, precio, garantia, bateria, Tiempocarga);
      listaProductos.add(celular);

    } else if (tipo == 2) {
      System.out.print("Procesador(ingrese unicamente palabras): ");
      String procesador = scanner.next();

      Computadora computadora = new Computadora(nombre, precio, garantia, procesador);
      listaProductos.add(computadora);
    } else {
      System.out.println("Tipo de producto inválido.");
    }

  }

  // metodo para mostrar la lista de productos
  public static void Mostrarproductos(ArrayList<ProductoElectronico> listaProductos) {

    System.out.println("lista de productos: ");

    for (ProductoElectronico producto : listaProductos) {
      System.out.println("Nombre: " + producto.getNombre());
      System.out.println("Precio: " + producto.getPrecio());
      System.out.println("Garantia: " + producto.getGarantia());
      producto.cargar();// llama al metodo cargar de cada atributo
    }
  }

}
