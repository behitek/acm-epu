#include <iostream>
using namespace std;
#include <map>
int main(){
	#ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
	int n,m;
	cin>>n>>m;
	int a[n+5];
	for(int i = 0;i < n;i++) cin>>a[i];
	int b[m+5][5];
	for(int i = 0;i < m;i++){
		cin>>b[i][0]>>b[i][1];
	}
	for(int i = 0;i < m;i++){
		int dem = 0;
		map<int,int> check;
		map<int,int> count;
		for(int j = b[i][0]-1;j < b[i][1];j++){
			check[a[j]]++;
		}
		for(int j = b[i][0]-1;j < b[i][1];j++){
			if(check[a[j]] == a[j] && count[a[j]] == 0){
				dem++;
				count[a[j]] = 1;
			}
		}
		cout<<dem<<endl;
	}
}
