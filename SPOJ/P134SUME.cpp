#include <iostream>
using namespace std;
#include <algorithm>
int a[4];
int main(){
	for(int i = 0;i<4;i++)
		cin>>a[i];
	sort(a,a+4);
	cout<<(a[0]*a[2]);
}
