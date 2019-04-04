#include <iostream>
using namespace std;
#include <map>

map<int,int> MAP;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,m;
	cin>>n>>m;
	int a,b;
	MAP[1] = 1;
	while(m--){
		cin>>a>>b;
		if(MAP[a] == 1) MAP[b] = 1;
		else if(MAP[b] == 1) MAP[a] = 1;
	}
	int dem = 0;
	for(int i = 2;i <= n;i++)
		if(MAP[i] == 0){
			cout<<i<<endl;
			dem++;
		} 
	if(dem == 0) cout<<dem<<endl;
}
