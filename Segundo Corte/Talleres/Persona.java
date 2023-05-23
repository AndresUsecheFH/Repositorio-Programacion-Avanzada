interface Comer {
  public void comer();
}

public class Persona implements Comer {

  public void comer() {
    System.out.println("La persona está caminando.");
  }

  public static void main(String[] args) {
    Persona persona = new Persona();
    persona.comer();
  }
}
