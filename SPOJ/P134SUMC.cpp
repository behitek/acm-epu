#include <bits/stdc++.h>
using namespace std;
#include <map>
int n,m;
map<int,int> MAP;
int main(){
	cin>>n>>m;
	int a,b;
	for(int i = 0; i < m;i++){
		cin>>a>>b;
		MAP[a]++;MAP[b]++;
	}
	for(int i = 1;i <= n;i++){
		cout<<MAP[i]<<endl;
	}
}
