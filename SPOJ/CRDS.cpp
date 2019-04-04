#include <iostream>
using namespace std;
int main(){
	long long int t,n,result;
	cin>>t;
	while(t--){
		cin>>n;
		result = - n;
		result += 3*n*(n+1)/2;
		if(result >= 1000007) result %= 1000007;
		cout<<(result)<<endl;
	}
}
