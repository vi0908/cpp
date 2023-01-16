#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int n,d, i, divisores = 0;
	cout<<"ingrese n: "; cin>>n;
	
	for (i=2; i<=n ;i++)
	{
		for (d=1; d<=i; d++)
		{
		
			if(i%d==0) {
				divisores += 1;
			}

		}
	
		if (divisores<=2)
		cout<<i<<endl;

		divisores = 0;
	}

	}
