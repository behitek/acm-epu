#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,k;
	cin>>m>>k;
	int a[k+5];
	for(int i = 0;i < k;i++) cin>>a[i];
	int dem = 0;
	for(int i = 0;i < k;i++){
		if(a[i] >= m){
			dem++;
			if(i < k-1) a[i+1] += a[i]%m;
		}else if(i+1 < k){
			a[i+1] += a[i];
		}
	}
	cout<<dem<<endl;
}
