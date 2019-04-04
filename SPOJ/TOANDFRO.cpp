#include <iostream>
using namespace std;
#include <string>
int main(){
	int n;
	string s;
	cin>>n;
	while(n != 0){
		char str[200][200];
		cin>>s;
		int l = s.length(),u = 0,m = l/n;
		for(int i = 0;i < m;i++)
		for(int j = 0;j < n;j++){
			if(i%2 == 0){
				str[i][j] = s[u];
			}else{
				str[i][n-j-1] = s[u];
			}
			u++;
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cout<<str[j][i];
			}
		}
		cout<<"\n";
		cin>>n;
	}
}
