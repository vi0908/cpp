#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a, b, c, fa, fb, fc, fc_ =20, c_=0,eps;
	int n=0, k=1;
	
	cout<<"ingrese a: "; cin>>a;
	cout<<"ingrese b:"; cin>>b;
	cout<<"ingrese eps: "; cin>>eps;
	
	fa = exp(a)-pow(a,3)+(3*pow(a,2))-(2*a)-3;
	fb = exp(b)-pow(b,3)+(3*pow(b,2))-(2*b)-3;
	
	//Evaluar si se cumplen las condiciones 
	
	if(fa*fb > 0)
	{
		cout<<"su intervalo no cumple con las condiciones.";
		return 0;
	}
	
	if (fa*fb==0)
	{
		cout<<"La raiz se encuentra en el intervalo a,b";
		return 1;
	}
	

	
	//Comienzo de la iteración
	do{n++;
	c = a + eps*k;
	fc = exp(c)-pow(c,3)+(3*pow(c,2))-(2*c)-3;
	if(fabs(fc)<fabs(fc_)) 
	{
		fc_ = fc;
		c_ = c;
	}
	k++;	
	}
	
	while(c <= b);
	
	cout<<"la raiz es:"<< c_;
	
}

