
#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

main() {
	
	string cuadrado;
	
	int lado, r=0, e =0, g=0;
	
	printf("Por favor ingrese el numero de lados del cuadrado: ");
	scanf("%d", &lado);
	
	
	// Primera linea:
	
    Bucle_1: r++;
	cout<<"*";	

	
	if (r<lado) 
	{
	goto Bucle_1;
	}
	
	//Segunda linea:
	
	nueva_linea: cout<<endl;
	cout<<"*";
	r=0;
	
	Bucle_2: e++; 
	cout<<" ";
	
	if (e<(lado-2))
	{
		goto Bucle_2;
	}
	e= 0;
	cout<<"*";
	
	//Otras lineas:
	
	Bucle_3: g++; 
	if (g<(lado-2))
	{
		goto nueva_linea;
	}
	
	//Ultima linea:
	
	cout<< endl;
	Bucle_4: r++;
	cout<<"*";
	if (r<lado)
	{
		goto Bucle_4; 
	}
	
	getch();

}
