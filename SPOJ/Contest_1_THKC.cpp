#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k,m;
	int t;
	cin>>t;
	while(t--){
		cin>>k>>m;	
		if(k >= 3){
			if(k%2 == 0) k += k/2 - 1;
			else k += k/2;
		}
		cout<<(k*k-1)%m<<endl;
	}
}
