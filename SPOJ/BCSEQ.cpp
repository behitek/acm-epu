#include <iostream>
using namespace std;
#include <map>

int main(){
	map<long long,int> MAP;
	int n,m,maxN = 0;
	long long a[100001];
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	int d = 1,c = 1,ts = 0;
	while(c <= n){
		if(MAP[a[c]] == 0)
			ts++;
		MAP[a[c]]++;
		while(ts > m){
			if(c-d > maxN) maxN = (c-d);
			if(MAP[a[d]] == 1) ts--;
			MAP[a[d]]--;
			d++;
		}
		c++;
	}
	cout<<max(c-d,maxN);
}
