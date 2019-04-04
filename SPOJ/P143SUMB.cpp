#include <iostream>
using namespace std;
#include <algorithm>

long long findMaxMin(long long a[], long long m,long long n ,bool isMax){
	long long ans = 0;
	sort(a,a+m);
	if(isMax == 1){
		long long i = m-1;
		while(n > 0){
			while(a[i] == a[i-1]) i--;
			ans += a[i]--;
			n--;
			if(i < m-1) i++;
		}
	}else{
		long long i = 0;
		while(n > 0){
			if(a[i] < 1) i++;
			ans += a[i]--;
			n--;
		}
	}
	return ans;
}

int main(){
	long long n,m;
	cin>>n>>m;
	long long a[m+5],b[m+5];
	for(long long i = 0;i < m;i++){
		cin>>a[i];
		b[i] = a[i];
	}
	cout<<findMaxMin(a,m,n,true)<<" "<<findMaxMin(b,m,n,false)<<endl;
}
