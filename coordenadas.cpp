#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int x,y;
	cout<<"ingrese el valor de x: "; cin>>x;
	cout<<"ingrese el valor de y: "; cin>>y;
	
	if ((x>0)&&(y>0))
		printf("el punto (%d,%d) se en cuentra en el primer cuadrante", x, y);
		
	
	if ((x<0)&&(y<0))
		{
		printf("el punto (%d,%d) se en cuentra en el tercer cuadrante", x, y);
		return 0;
		}
	
	if (x<0)

		printf("el punto (%d,%d) se en cuentra en el segundo cuadrante", x, y);
		
	
	if (y<0)
	
		printf("el punto (%d,%d) se en cuentra en el cuarto cuadrante", x, y);
		
	
	
	
	
	
	
	
	
}
