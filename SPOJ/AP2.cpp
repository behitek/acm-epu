#include <iostream>
using namespace std;

int main() {
	long long t;
	cin>>t;
	long long a,b,c;
	while(t--){
		cin>>a>>b>>c;
			long long n = 2*c/(a+b);
			long long d = (b-a)/(n-5);
			cout<<n<<endl;
			long long first = a - 3*d;
			for(long long i=1; i<=n; i++) 
				cout<<first+i*d<<" ";
			}
	cout<<endl;
}
