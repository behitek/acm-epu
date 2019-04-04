#include <iostream>
using namespace std;
#include <math.h>

int main(){
	int c,k;
	cin>>c>>k;
	int t = 1;
	while(k--) t*= 10;
	int d = c%t;
	if(d+1 > t/2) cout<<(c+t-d);
	else cout<<(c-d);
}
