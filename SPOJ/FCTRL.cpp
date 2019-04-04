#include <iostream>
using namespace std;

int main(){
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int c = 0;
		for(long long j=5;j<=n;j*=5){
			c+= n/j;
		}
		cout<<c<<"\n";
	}
}
