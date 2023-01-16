#include<math.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	float x_0=5, x_n, f, eps=0.0001;
	int k=0;
	
	do{k++;
	x_n = x_0 - ((pow(x_0,3)-5*pow(x_0,2)+3*x_0-7)/(3*pow(x_0,2)-10*x_0+3));
	x_0 = x_n;
	f = (pow(x_n,3)-5*pow(x_n,2)+3*x_n-7);
	}
	
	while(fabs(f) > eps);
	
	printf("Iteracion: %d  Raiz: %lf Funcion: %lf", k, x_n, f);
	
	
	
}
