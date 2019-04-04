#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n;
	cin>>n;
	int a[n+4];
	for(int i = 0;i < n;i++){
		cin>>a[i];
	}
	int ans,b = a[0];
	for(int i = 1;i < n;i++){
		ans = b^a[i];
		b = ans;
	}
	cout<<ans<<endl;
}
