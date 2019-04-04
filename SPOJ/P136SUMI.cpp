#include <bits/stdc++.h>
using namespace std;
#include <map>
int goc(int a){
	return a%360;
}
map<int,int> MAP;

bool check(int a, int x){
		if(x > a){
			if(MAP[x-a] == 1) return true;
		}else if(x < a){
			if(MAP[a-x] == 1) return true;
		}
		return false;
	}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n+5],b[k+5],tt;
	for(int i = 0;i < n;i++)
		cin>>a[i],MAP[a[i]] = 1;
	for(int i = 0;i < k;i++)
		cin>>b[i];
	for(int i = 0;i < k;i++){
		int dem = 0;
		if(MAP[b[i]] == 1){
			cout<<"YES\n";dem++;continue;
		}else{
			for(int j =0;j < n;j++){
				int t = 2;
				while(t < 50){
					if(goc(t*a[i]) == b[j]){
						cout<<"YES\n";dem++;break;
					}
					t++;
				}
				if(check(a[i],b[j])){
					cout<<"YES\n";dem++;break;
				}
			}
		}
		if(dem == 0) cout<<"NO\n";
	}
}
