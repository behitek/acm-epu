#include <iostream>
using namespace std;
#include <string.h>
#include <math.h>

int main(){
	char s[1000];char str[100][100];
	int m,n;
	cin>>s;
	int l = strlen(s);
	int sqr = sqrt(l);
	for(int i = sqr;i >=1;i--){
		if(l%i == 0){
			m = i;
			n = l/i;
			break;
		}
	}
	if(m == 1){
		cout<<s;
	}else{
		int u = 0;
		for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			str[j][i] = s[u];
			u++;
			}
		}
		for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			cout<<str[i][j];
		}
	}
	}
}
