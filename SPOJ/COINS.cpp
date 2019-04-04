#include <iostream>
using namespace std;
#include <map>
map<int,long long> a;

long long int result(long long int n){
	if(n < 12) return n;
	if(a[n] != 0) return a[n];
	return (a[n] = max(n,result(n/2) + result(n/3) + result(n/4)));
}


int main(){
	long long int n;
	int t = 0;
	while(t++ < 10){
		cin>>n;
		cout<<result(n)<<endl;
	}
}
