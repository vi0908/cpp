#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int n, x, d=1 ;
	cout<< "por favor ingrese el dia: "; cin>>n;
	system("cls||clear");
	for (x = 1; x < n; x++)
	{
		d++;
		
		if (d > 7) 
		{
			d=1;	
		}
	}
	
	switch(d){
		case 1:
			cout<<"miercoles";
			break;
		default:
			cout<<"martes";
		case 2:
			cout<<"jueves";
			break;
		case 3:
			cout<<"viernes";
			break;
		case 4:
			cout<<"sabado";
			break;
		case 5:
			cout<<"domingo";
			break;
		case 6:
			cout<<"lunes";
			break;

			
	}
	
}
