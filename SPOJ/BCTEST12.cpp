#include <iostream>
using namespace std;
#include <string.h>

int main(){
	char s[101];
	cin>>s;
	int n = strlen(s);
	for(int i = 0;i < n;i++){
		if(s[i] > 64 && s[i] < 91) s[i] += 32;
	}
	for(int i = 0;i < n;i++){
		if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'){
			for(int j = i;j < n-1;j++){
				s[j] = s[j+1];
			}
			n--;i--;
		}
	}
	for(int i = 0;i < n;i++){
		cout<<"."<<s[i];
	}
}
