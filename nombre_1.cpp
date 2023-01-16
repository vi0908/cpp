#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;


int main(){
	int a;
	printf("ingrese el valor que acompaña a la variable al cuadrado: ");
	cin >> a;
	int b;
	b = 6;
	int c;
	c = 9;
	float x1;
	x1 = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
	float x2;
	x2 = (b+sqrt(pow(b,2)-4*a*c))/2*a;
	cout << "Las raíces son: " << x1 << ", " << x2;
	
}
