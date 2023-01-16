#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
	float a=0.4,b=0.6,c,fa,fb,fc,c_ant=100,eps=0.0001;
	int k=0;
	
	fa = exp(2*a)+(3*a)-4;
	fb = exp(2*b)+(3*b)-4;
	
	if(fa*fb>0) 
	{
		cout<<"El intervalo no cumple con las condiciones";	
		return 0;
	}
	
	if(fa*fb ==0)
	{
		cout<<"La raíz es a o b";
		return 1;
	}
	
	do 
	{k++;
		fa = exp(2*a)+(3*a)-4;
		fb = exp(2*b)+(3*b)-4;
		c = b-((fb*(b-a))/(fb-fa));
		fc = exp(2*c)+(3*c)-4;
	
		if (fc*fa<0) 
		{
			b = c;
			eps = c_ant-c;
			c_ant = c;
		}
		
		else
		{
			a=c;
			eps=c_ant-c;
			c_ant=c;
		}
	}
	while(fabs(eps)>0.001);
	
	printf("numero de iteracion: %d raiz aprox.:%lf",k,c);
	
	
}
