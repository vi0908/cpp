#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n, i, factorial;
	cout<< "ingrese un numero entero menor que 10: "; cin>>n;
	factorial = 1;
	
	for(i=1; i<=n; i++)
	{
		factorial *=i;
	}
	
	printf(" %d! = %d ",n, factorial);
	
}
