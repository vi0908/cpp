#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float eps, a, b, c, fa, fb, fc;
	int n = 0; // número de iteración
	
	//Pedir a, b, eps
	
	cout<<"Ingrese a: "; cin>>a;
	cout<<"Ingrese b: "; cin>>b;
	cout<< "Ingrese eps: "; cin>>eps;
	
	//Verificar si fa*fb < 0
	
	fa = exp(a)-(pow(a,3))+(3*(pow(a,2)))-(2*a)-3;
	fb = exp(b)-(pow(b,3))+(3*(pow(b,2)))-(2*b)-3;
	
	if ((fa*fb)>0)
	{
		cout<<"su intervalo no cumple con las condiciones"<<endl;
		return 0;
	}
	
	if ((fa*fb)==0)
	{
		cout<<"La raíz esta en a o b"<<endl;
		return 1;
	}
	
	//Empiezan las iteraciones
	
	do {n++;
	
		fa = exp(a)-(pow(a,3))+(3*(pow(a,2)))-(2*a)-3;
		fb = exp(b)-(pow(b,3))+(3*(pow(b,2)))-(2*b)-3;
		c = b-((fb*(b-a))/(fb-fa));
		fc = exp(c)-(pow(c,3))+(3*(pow(c,2)))-(2*c)-3;
		
		if((fa*fc) < 0)
		{
			b = c;
		}
		else a = c;		
	}
	
	while((fabs(fc))>eps);
	
	
	//imprimir el último c que sería la raiz 
	
	cout<<"Número de iteraciones: "<<n<<" La raiz es: "<< c;
	
}
