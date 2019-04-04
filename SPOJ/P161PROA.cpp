#include <iostream>
using namespace std;
#include <math.h>


int sgnt(long long a){
	long long sqr = sqrt(a);
	for(int i = 2;i <= sqr;i++){
		if(a%i == 0) return 0;
	}
	return 1;
}

int main(){
	long long n;
	cin>>n;
	long long x,t;
	while(n--){
		cin>>x;
		t = sqrt(x);
		if(x == 1 || t*t != x || sgnt(t) == 0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}
