#include <iostream>
using namespace std;
#include <math.h>
int main(){
	int t;
	long long m,n;
	cin>>t;
	while(t--){
		cin>>m>>n;
		while(m <= n){
			int dem = 0;
			if(m < 2) dem++;
			long long sqr = sqrt(m);
			for(int i = 2;i <= sqr;i++){
				if(m%i == 0){
					dem++;
					break;
				}
			}
			if(dem == 0) cout<<m<<endl;
			m++;
		}
	}
}

