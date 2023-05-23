import java.util.Arrays;

class OrdenarArreglos{
  public static void imprimirArreglo(String mensaje, int arreglo[]){
    System.out.println(mensaje + ": [longitud: " + arreglo.length + "]");
    //se imprime el arreglo
      for (int i=0; i < arreglo.length ; i++){
        System.out.println("-" + arreglo[i]);
      }
      System.out.println();
  }
  
  
  public static void main(String[] args){
    int ejemplo_arreglo[]={2, -5, 3, 0, -2, -3, 9, -10, 4, 5};
    float miflotante = 1.0f;
    double[][] matriz = new  double[3][3];
    Arrays.sort(ejemplo_arreglo);
    // Se imprime el arreglo ordenado por el metodo sort de Arrays de la clase Utils de Java
    imprimirArreglo("Arreglo Ordenado", ejemplo_arreglo);

    // Se busca el indice de valor -2, por el metodo binarySerch de la clase Arrays
    int  indice = java.util.Arrays.binarySearch(ejemplo_arreglo, -2);
    // Se busca el indice de valor -2, por el metodo binarySerch de la clase Arrays
    System.out.println("se encontro el -2 @"+ indice);
  }
}
