#include<bits/stdc++.h>
using namespace std;

struct Dragon{
	int x,y;	
};

bool Compare(Dragon a, Dragon b){
	return a.x < b.x;
}

int main(){
	int s,n;
	cin>>s>>n;
	Dragon a[n+5];
	for(int i = 0;i < n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a,a+n,Compare);
	for(int i = 0;i < n;i++){
		if(s > a[i].x){
			s += a[i].y;
		}else{
			cout<<"NO\n";exit(0);
		}
	}
	cout<<"YES\n";
}
