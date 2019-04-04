#include<iostream>
#include<stdlib.h>
using namespace std;

long long k;

bool check(long long a){
	if(a < 2) return 1;
	while(a%2 == 0){
		a /= 2;
	}
	return(a==1);
}

main()
{
	long long dem;
	cin >> k;
	if(check(k)){
		cout<<k<<" "<<0;exit(0);
	}
	long long sum= 0,n = k-1;
	while(!check(n)) n--;
	while(sum != k){
		dem = 0;sum = 0;
		n *= 2;
		long long t = n;
		long long xx = 2;
		while(xx <= t){
			if(t%xx == 0){
				if(k - sum >= t/xx) sum += t/xx;
				dem++;
				xx *= 2;
				if(sum == k) break;
			}else break;
		}
	}
	cout<<n<<" "<<dem;
}
