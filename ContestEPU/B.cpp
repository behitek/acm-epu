#include <iostream>
using namespace std;

int gt(int a){
	int gt = 1;
	for(int i = 2;i <= a;i++){
		gt *= i;
	}
	return gt;
}

int nCk(int k,int n){
	return gt(k)/(gt(k)*(gt(n-k)));
}

int main(){
	int t,n,k,ii = 1;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int dem = 0,d = 0,c = k-1;
		while(c < n){
			for(int i = 0;i <= n-c-1;i++){
				dem += nCk(i,n-c-1);
			}
			for(int i = 0;i < d;i++){
				dem+= nCk(i,d-1);
			}
			d++;c++;
		}
		cout<<"Case #"<<(ii++)<<": "<<dem<<endl;
	}
}
