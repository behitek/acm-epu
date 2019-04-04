#include <iostream>
using namespace std;

int main(){
	int a[8];
	for(int i = 0;i < 8;i++){
		cin>>a[i];
	}
	int d1 =0,d2 = 0,xx = a[0];
	for(int i = 1;i < 8;i++){
		if(a[i] >= xx){
			d1++;
		}
		if(a[i] <= xx){
			d2++;
		}
		xx = a[i];
	}
	if(d1 == 7) cout<<"ascending";
	else if(d2 == 7) cout<<"descending";
	else cout<<"mixed";
}
