#include<iostream>
using namespace std;
main()
{
	cout<< "Ingrese un número: ";
	double a;
	cin>>a;
	cout <<endl << "Desea convertir a:"<<endl<<"Bytes [1]"<<endl<<"Kilobytes [2]"<<endl;
	int b;
	cin>>b;
	if (b== 1)
	{
		cout <<endl << a <<" Kilobytes = "<< a*1024<<" Bytes";
	}
	if (b==2)
	{
		cout << endl << a << " Bytes = " << a/1024.0 <<" Kilobytes";
	}
	
}

