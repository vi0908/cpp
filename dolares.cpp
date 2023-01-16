#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
	string x;
	float a;
	cout<<"Desea convertir a: \nDolares[d]\nPesos colombianos[p]"<<endl;
	
	x = getch();
	
	if (x =="d")
	{
		cout<<"Ingrese la cantidad de pesos colombianos a convertir: ";
		scanf("%f",&a);
		cout<< a << " pesos colombianos son:  "<< a/3588.0 <<" dolares.";
	}
	
	if(x=="p")
	{
		cout<<"Ingrese la cantidad de dolares a convertir: ";
		scanf("%f",&a);
		cout<<a <<" dolares son: " << a*3588.0 <<" pesos colombianos.";
	}

}
