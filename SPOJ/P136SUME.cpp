#include <iostream>
#include <map>
using namespace std;

map<long long,int> MAP;

int main(){
	long long n,c;
	cin>>n>>c;
	long long x;
	int a[1000],i = 0;
	while(n--){
		cin>>x;
		MAP[x]++;
		if(MAP[x] == 1){
			a[i] = x;
			i++;
		}
	}
	for(int j = 0;j < i;j++){
		for(int t = j+1;t < i;t++){
			if(MAP[a[t]] > MAP[a[j]]){
				long long tg = a[t];
				for(int u = t;u > j;u--){
					a[u] = a[u-1];
				}
				a[j] = tg;
			}
		}
	}
	for(int j = 0;j < i;j++){
		while(MAP[a[j]]--)cout<<a[j]<<" ";
	}
}
