#include <iostream>
using namespace std;
#include <math.h>
int main(){
	int t,a;
	long long b,re;
	cin>>t;
	int r[t],u=0;
	while(t--){
		cin>>a>>b;
		if(b == 0 || b == 1){
			r[u] = 1;
		}
		else if(b%4 == 0) b = 4;
		else b %= 4;
		re = pow(a,b);
		r[u] = (re%10);
		u++;
	}
	for(int i = 0;i < u;i++){
		cout<<r[i]<<endl;
	}
}
