#include<iostream>
using namespace std;

int main()
{
	long n,b,x,k=-1;
	cin>>n>>b;
	long a[n+5];
	long LDuong[n+5];
	long LAm[n+5];
	long RDuong[n+5];
	long RAm[n+5];
 
	for(long i=1;i<=n;i++)
	{
		cin>>x;
		if(x>b) a[i]=1;
		else if(x<b) a[i]=-1;
		else {k=i; a[i]=0;}
		LDuong[i]=LAm[i]=RAm[i]=RDuong[i]=0;
	}
	long T=0;		
	long long K=1;
	long L=0,R=0;
	for(long i=k+1;i<=n;i++)
	{
		T+=a[i];
		if(T==0) L++;
		else if(T>0) RDuong[T]++;
		else RAm[-T]++;
	}
	T=0;
	for(long i=k-1;i>=1;i--)
	{
		T+=a[i];
		if(T==0) R++;
		else if(T>0) LDuong[T]++;
		else LAm[-T]++;
	}	
	K=1+(long long)L*R+L+R;
	for(long i=1;i<=n;i++)
	{
		K+=(long long)LAm[i]*RDuong[i];
		K+=(long long)LDuong[i]*RAm[i];		
	}
	cout<<K;
 
}
