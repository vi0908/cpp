#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
int main()
{
	int x=0, y=1, f, i, suma=1;
	
	printf("%5d  %5d  \n%5d  %5d  \n",0,0,1,1);
	
	for(i=2; i<=10; i++)
	{
		if (i==4) 
		{
			x++;
			y++;
			continue;
		}
		
		f=x+y;
		suma+=f;
		printf("%5d  %5d\n",i, f);
		x=y;
		y=f;
	}
	cout<<endl<<"  suma = "<<suma;
	getch();
	
	
	
}
