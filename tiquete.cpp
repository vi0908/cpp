#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	string nombre;
	int edad, estancia;
	float distancia, precio;
	
	cout<<"Nombre: "; cin>>nombre;
	cout<<"Edad: "; cin>>edad;
	cout<<"Dias de estancia: "; cin>>estancia;
	cout<<"Distancia a recorrer (km): "; cin>>distancia;
	
	system("cls||clear");
	
	precio = distancia*0.50;
	
	if((estancia > 7)&&(distancia > 800)||(edad > 55))
	{
		precio = precio*(1-0.25);
		cout<<"\nEstimado(a) Sr(a). "<<nombre<<", el precio de su viaje es de: "<<precio << " euros."<<endl<<"\nLe hemos aplicado un descuento del 25%."<<endl;
		getch();	
		return 0;
	}
	
	else
	{
		cout<<"\nEstimado(a) Sr(a). "<<nombre<<", el precio de su viaje es de: "<<precio << " euros."<<endl;
		getch();
		return 0;
	}
	
	
	
	
}
