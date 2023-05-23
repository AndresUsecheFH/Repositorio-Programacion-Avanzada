public class practicante extends alumno{

  private string idpracticante;

  public practicante(string nombre, string apellidos, int edad){
    super(nombre,apellidos,edad);
    idpracticante="unknown";
  }

  public void setidpracticante(string idpracticante){this.idpracticante=idpracticante;}

  public string getidpracticante(){return idpracticante,}

    public string tostring(){

      return ""+ getNombre()+""+getApellidos()+"-"+getEdad()+"-"+getPracticante();
      
    }
    
}

