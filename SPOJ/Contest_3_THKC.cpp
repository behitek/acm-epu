#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>t;
	while(t--){
		map<int,int> Map;
		cin>>n;
		int a[n+5],b[n+5],u = 0;
		for(int i = 0;i < n;i++){
			cin>>a[i];
			Map[a[i]]++;
			if(Map[a[i]] == 1) b[u++] = a[i];
		}
		sort(b,b+u);
		for(int i = 0;i < n;i++){
			for(int j = 0;j < u;j++){
				if(a[i] == b[j]){
					cout<<(j+1)<<" ";
					break;
				}
			}
		}
		cout<<endl;
	}
	
	
}
