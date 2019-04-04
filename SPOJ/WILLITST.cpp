#include <iostream>
using namespace std;

int main(){
	long long n;
	cin>>n;
	if(n <= 1){
		cout<<"TAK";
	}else{
		while(n%2 == 0) n/=2;
		if(n == 1) cout<<"TAK";
		else cout<<"NIE";
	}
}
