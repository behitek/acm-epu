#include <iostream>
#include <math.h>
using namespace std;
long long n;
void nhap()
{
	cin>>n;
}
void xuly()
{
	long long t=1;
	long long i=2,vt=1;
	while (n>1)
	{
		if ((n%i==0)) 
		{
			n/=i;
			if (vt!=i) 
			{
				t*=i;
				vt=i;
			}			
			i=2;
		}
		else
			i++;
		}
	cout<<t;
}
int main()
{
	nhap();
	xuly();
}
