#include <bits/stdc++.h>
using namespace std;

char getIndex(char c,int d){
	if(c >= 65 +d && c <= 90){
		c -= d;
	}else{
		c = c-d+26;
	}
	return c;
}

int main(){
	int t,maxN;
	cin>>t;
	cin.ignore();
	char s[1001];
	while(t--){
		char ch;
		map <char,int> Map;
		gets(s);
		maxN=0;ch='E';
		int len = strlen(s);
		for(int i = 0;i < len;i++){
			if(s[i] == ' ') continue;
			Map[s[i]]++;
		}
		for(char i = 'A';i <='Z';i++){
			if(Map[i] > maxN){
				maxN = Map[i];
				ch = i;
			}
		}
		int count = 0;
		for(char i = 'A';i <='Z';i++){
			if(Map[i] == maxN) count++;
		}
		if(count != 1){
			cout<<"NOT POSSIBLE"<<endl;
			continue;
		}
		int d = ch - 'E';
		if(d < 0) d+= 26;
		for(int i = 0;i < len;i++){
			if(s[i] == ' ') continue;
			s[i] = getIndex(s[i],d);
		}
		cout<<d<<" "<<s<<endl;
	}
}
