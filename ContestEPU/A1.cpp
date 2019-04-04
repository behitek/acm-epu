#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
 while (b!=0)
 {
   int r=a%b;
   a=b;
   b=r;
 }
 return a;
}
int main(){
	int t,sum,n;
	cin>>t;
	int ii = 1;
	while(t--){
		sum = 0;
		cin>>n;
		int i = 2;
		while(i < n){
			int xx = n;
			while(xx > 0){
				sum += xx%i;
				xx /= i;
			}
			i++;
		}
		int m = gcd(sum,n-2);
		sum /= m;
		n = (n-2)/m;
		cout<<"Case #"<<(ii++)<<": "<<sum<<"/"<<n<<endl;
	}
}
