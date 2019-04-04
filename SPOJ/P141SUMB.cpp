#include <iostream>
using namespace std;
#include <map>
int main(){
	map<int,int> MAP;
	int n,dem = 0,x;
	cin>>n;
	int t = n;
	while(t--){
		cin>>x;
		MAP[x]++;
	}
	for(int i = 1;i <= n;i++)
		if(MAP[i] == 0) dem++;
	cout<<dem<<endl;
}
