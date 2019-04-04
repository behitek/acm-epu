#include <iostream>
using namespace std;
#include <algorithm>

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n+5];
		for(int i = 0; i < n;i++) cin>>a[i];
		sort(a,a+n);
		int min = a[n-1] - a[n-k];
		for(int i = n-2;i-k+1 >= 0;i--){
			if(a[i] - a[i-k+1] < min) min = a[i] - a[i-k+1];
		}
		cout<<min<<endl;
	}
}
