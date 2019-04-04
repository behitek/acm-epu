#include <iostream>
using namespace std;


int main(){
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2 == 0){
			cout<<(n+2)*n*(2*n+1)/8<<endl;
		}
		else cout<<((n+2)*n*(2*n+1)-1)/8<<endl;
	}
}
