#include<iostream>
using namespace std;

int main()
{
	int Ncuenta, Cbasico, Cpremium, Nconexiones;
	float Cpagar;
	char Tcliente;

	while(true)
	{
	
	
	cout<<"Este programa calcula una factura de cable."<<endl;
	cout<<"Ingrese el numero de cuenta: ";
	cin>>Ncuenta;
	cout<<"Ingrese el tipo de cliente, si el cliente es residencial ponga(R), si es un cliente de negocios ponga(N): "<<endl;
	cin>>Tcliente;
	cout<<"Ingrese el numero de canales premium: ";
	cin>>Cpremium;
	
	switch(Tcliente){
	
	case 'R':
	Cpremium=Cpremium*7.50;
	Cpagar= 4.50+20.50+Cpremium;
	break;

	
	case 'N':
			cout<<"Ingrese el numero de conexiones de servicio basico: "<<endl;
			cin>>Nconexiones;
		if(Nconexiones>10)
		{
			Nconexiones= (Nconexiones-10)*5+75;
			Cpremium= Cpremium*50;
			
			Cpagar= 15+Nconexiones+Cpremium;
			
		}
	
		else
		{ Nconexiones=75;
		Cpremium=Cpremium*50;
		
		Cpagar=15+Nconexiones+Cpremium;
		}
	
}
cout<<"Numero de cuenta: "<<Ncuenta<<" Cantidad a pagar: "<<Cpagar<<endl;
}
return 0;
}
