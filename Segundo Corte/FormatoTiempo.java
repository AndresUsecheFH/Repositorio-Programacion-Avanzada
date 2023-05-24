import java.util.Calendar;
import java.util.Formatter;
import java.text.SimpleDateFormat;
import java.util.Date;

public class FormatoTiempo {

  public static void main(String args[]) {

    // FORMATO FECHA

    Formatter fecha = new Formatter();
    Calendar cal = Calendar.getInstance();
    fecha = new Formatter();
    fecha.format("%tB %tb %tm", cal, cal, cal);

    // FORMATO HORA:
    Date hora = new Date();
    String strFormatoHora = "HH:mm:ss a";
    SimpleDateFormat forma = new SimpleDateFormat(strFormatoHora);
    // SE IMPRIME
    System.out.print("Presentacion 1 de Fecha y hora: ");
    System.out.println(fecha + " " + forma.format(hora) + "\n");

    // otra forma

    fecha.format("%tc", cal);
    System.out.print("Presentacion 2 de Fecha y hora: ");
    System.out.println(fecha + "\n");

    // otra forma

    Date d = new Date();
    System.out.print("Presentacion 3 de Fecha y hora: ");
    System.out.println(d.toString());
    
  }
}
