#include<iostream>
#include<stdio.h>
using namespace std;

double max(double n1, double n2)
{
	if(n1>n2) return n1;
	return n2;
}

double min(double n1, double n2)
{
	if(n1<n2) return n1;
	else return n2;
}

int main()
{
	double x, y;
	cout<<"introduzca dos numeros: \n"; cin>>x>>y;
	if(x==y){
	printf("%.0lf y %.0lf son iguales", x, y);
	return 0;	
	} 
	cout<<"max: "<<max(x,y)<<" min: "<<min(x,y);
	return 0;
}
