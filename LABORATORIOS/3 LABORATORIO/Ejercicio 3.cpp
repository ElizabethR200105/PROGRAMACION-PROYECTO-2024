#include<iostream>

using namespace std;

int main(){
	int valida=1234;
	int opc, clave, saldo=500;
	float retiro, deposito, movimientos;
	
	cout<<"BIENVENIDO A SU CAJERO VIRTUAL"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"\nIngrese su clave: "; cin>>clave;
	do {
	if(clave!=valida){
	
		cout<<"!CLAVE INCORRECTA!"<<endl;
		cout<<"\nVuelve a intentarlo"<<endl;
		cout<<"\nIngrese su clave: "; cin>>clave;	
	}
	
	}	while(clave!=valida);
	
	
	cout<<"SU CLAVE ES CORRECTA"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"SALDO EN CUENTA:"<<"S/"<<saldo<<endl;
	do{
	cout<<"\nOpciones: "<<endl;
	cout<<"1. Retiro"<<endl;
	cout<<"2. Deposito"<<endl;
	cout<<"3. Consulta"<<endl;
	cout<<"4. Salir."<<endl;
	
	cout<<"\nDigite su opcion: "; cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"\nIngrese el monto a retirar: "; cin>>retiro;
			saldo-=retiro;
			break;
		case 2:
			cout<<"\nIngrese el deposito: "; cin>>deposito;
			saldo+=deposito;
			break;
		case 3:
			cout<<"----MOVIMIENTOS---"<<endl;

			cout<<"Monto en cuenta: "<<"S/"<<saldo<<endl;
		
			break;
		case 4: cout<<"Gracias";
	}
	}while(opc!=4);
	
	

	return 0;
}
