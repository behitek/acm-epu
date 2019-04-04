#include <iostream>
using namespace std;
#include <algorithm>
#include <math.h>

bool scp(long long n){
	int sqr = sqrt(n);
	return sqr*sqr == n;
}

int main(){
	int c;
	cin>>c;
	long long n,sqr,xx;
	while(c--){
		cin>>n;
		if(scp(n)){
			cout<<"Yes\n";
			continue;
		}
		int check = 0;
		sqr = sqrt(n);
		for(int i = 1;i < sqr;i++){
			xx = n - i*i;
			if(scp(xx)){
				check = 1;
				break;
			}
		}
		if(check == 1) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
