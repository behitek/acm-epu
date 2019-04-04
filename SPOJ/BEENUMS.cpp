#include<bits/stdc++.h>
using namespace std;

bool shh(long long int a){
	int x = sqrt(a);
	return(x*x == a);
}


int main(){
	long long int n;
	cin>>n;
	while(n != -1){
		if(shh((4*n-1)/3))
			cout<<"Y\n";
		else cout<<"N\n";
		cin>>n;
	}
}
