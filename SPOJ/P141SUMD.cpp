#include <bits/stdc++.h>
using namespace std;

int main(){
	map<long long,long long> MAP;
	long long n,k;
	cin>>n>>k;
	long long a[n+2];
	for(long long i = 0;i < n;i++) cin>>a[i];
	long long i = 0,dem = 0,d = 0;
	while(i <= n-k+1){
		MAP[a[i]]++;
		if(MAP[a[i]] >= k){
			dem++;
			dem += n - i - 1;
			MAP[a[d]]--;
			d++;
		}
		i++;
	}
	cout<<dem;
}
