#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int t,sum = 0,ii = 1;
	cin>>t;
	while(t--){
		sum = 0;
		cin>>s;
		for(int i = 0;i < s.length();i++){
			sum += (int)(s[i] - '0');
		}
		int yy = 0;
		while(sum > 9){
			yy = 0;
			int xx = sum;
			while(xx > 0){
				yy += xx%10;
				xx /= 10;
			}
			sum = yy;
		}
		cout<<"Case #"<<(ii++)<<": "<<sum<<endl;
	}
}
