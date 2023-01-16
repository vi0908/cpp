#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int main()
{

int i;
double suma;
suma = 0.0;
cout<<" ***********************"<<endl;
cout <<endl<<" *   i  * suma parcial *"<<endl<<"\n ***********************"<<endl ;



for (i=1; i<=15; i++)
{
	suma = suma + 1.0/i;
	printf(" *%5d *%12.6lf  * \n *********************** \n", i, suma);
	}	
}
