import java.util.*;


class Motor{
    private int Cilindrada;
    private double VelocidadMax;
    private int CaballosDeFuerza;
    private String TipoDeCombustible;
    Motor(int C, double V, int Ca, String T){
        this.Cilindrada=C;
        this.VelocidadMax=V;
        this.CaballosDeFuerza=Ca;
        this.TipoDeCombustible=T;
    }
    public void imprimir(){
        System.out.println("La Cilindrada es : "+Cilindrada);
        System.out.println("La Velocidad maxima es : "+VelocidadMax);
        System.out.println("Los caballos de fuerza son : "+CaballosDeFuerza);
        System.out.println("La Cilindrada es : "+TipoDeCombustible);
    }
    public int getCilindrara(){
        return Cilindrada;
    }
    public int getCaballosDeFuerza(){
        return CaballosDeFuerza;
    }
    public double getVelocidadMax(){
        return VelocidadMax;
    }
    public String getTipoDeCombustible(){
        return TipoDeCombustible;
    }
    public void setCilindrada(int cilindrada){
        this.Cilindrada=cilindrada;
    }
    public void setVelocidadMax(double velocidadMax){
        this.VelocidadMax=velocidadMax;
    }
    public void setCaballosDeFuerza(int caballosDeFuerza){
        this.CaballosDeFuerza=caballosDeFuerza;
    }
    public void setTipoDeCombustible(String tipoDeCombustible){
        this.TipoDeCombustible=tipoDeCombustible;
    }

}
class Vehiculo{
        String Placa;
        String Marca;
        Motor Motor;
        Vehiculo(String P, String M, Motor Mo){
            this.Placa=P;
            this.Marca=M;
            this.Motor=Mo;
        }
        Vehiculo(String P,String M, int C, double V, int Ca, String T){
            this.Placa=P;
            this.Marca=M;
            this.Motor=new Motor(C,V,Ca,T);
        }
        public void Imprimir(){
            System.out.println("El carro: "+Placa);
            System.out.println("El carro: "+Marca);
            Motor.imprimir();
        }
        public String getPlaca(){
            return Placa;
        }
        public String getMarca(){
            return Marca;
        }
        public int getMotorCilindrara(){
            return Motor.getCilindrara();
        }
        public double getMotorVelocidadMax(){
            return Motor.getVelocidadMax();
        }
        public int getMotorCaballosDeFuerza(){
            return Motor.getCaballosDeFuerza();
        }
        public String getMotorTipoDeCombustible(){
            return Motor.getTipoDeCombustible();
        }
        public void setPlaca(String placa){
            this.Placa=placa;
        }
        public void setMarca(String marca){
        this.Marca=marca;
    }
        public void setCilindrada(int cilindrada){
        Motor.setCilindrada(cilindrada);
    }
        public void setVelocidadMax(double velocidadMax){
        Motor.setVelocidadMax(velocidadMax);
    }
        public void setCaballosDeFuerza(int caballosDeFuerza){
        Motor.setCaballosDeFuerza(caballosDeFuerza);
    }
        public void setTipoDeCombustible(String tipoDeCombustible){
        Motor.setTipoDeCombustible(tipoDeCombustible);
    }
        public static void Comparar(Vehiculo v1, Vehiculo v2){
            if(v1.getMotorCilindrara()>v2.getMotorCilindrara()){
                System.out.println("El vehihiculo: "+v1.Marca+"\nEs mejor que el vehiculo: "+v2.Marca);
            }
            else if(v2.getMotorCilindrara()>v1.getMotorCilindrara()){
                System.out.println("El vehihiculo: "+v2.Marca+"\nEs mejor que el vehiculo: "+v1.Marca);
            }
            else {
                System.out.println("Los dos vehiculos son iguales");
            }
        }
}
public class Main {
    public static void main(String[] args) {
        Motor motor1= new Motor(600,50,70,"disel");
        Vehiculo Camioneta = new Vehiculo("000000","La que te nasca",1500,300,2000,"El de diosito");
        Vehiculo Carro= new Vehiculo("1007","La de santi",700,100,8000,"Aroma de flores");
        Vehiculo.Comparar(Camioneta,Carro);

    }
