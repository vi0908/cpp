#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;
int main()
{

		int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10, x11, x12;
		cout<<"ingrese diez numeros: "; scanf("%d %d %d %d %d %d %d %d %d %d",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10);
		

		inicio: if((x1>=100) && (x1<=200) || (x1%10==0))
		{
			cout<<x1<<"  ";
			x1 = x2;
			x2 = x3;
			x3 = x4;
			x4 = x5;
			x5 = x6;
			x6 = x7;
			x7 = x8;
			x8 = x9;
			x9 = x10;
			x11 = x10;
			if(x1 == x11) x1=3;
			goto inicio;
			
		}
		
		if(x1!=3) goto inicio;
		else cout<<x11<<" fin";
		
		
	
		
	
	}
