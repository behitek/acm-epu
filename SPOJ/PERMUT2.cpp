#include<iostream>
using namespace std;
#include <string.h>
#include <map>
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n;
	cin>>n;
	while(n!= 0){
		int a[n+1];
		int dem = 0;
		for(int i = 1;i <= n;i++)
			cin>>a[i];
		for(int i = 1;i <= n;i++){
			if(a[a[i]] != i){
				dem++;break;
			}
		}
		if(dem == 0) cout<<"ambiguous\n";
		else cout<<"not ambiguous\n";
		cin>>n;
	}
}
