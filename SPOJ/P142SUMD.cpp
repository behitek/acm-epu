#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	string s1="";
	int n = s.length();
	int d = 1,c = n-2,dem = 1,tt = 0;
	while(d <= c && c > 0){
		if(s.substr(d,c-d+1) == s.substr(0,c-d+1) && s.substr(d,c-d+1) == s.substr(n-(c-d+1),c-d+1)){
			cout<<s.substr(0,c-d+1)<<endl;
			exit(0);
		}else{
			if(dem == 1) d++;
			else if(dem == 2) c--;
			else {
				tt++;
				if(tt == 1) d++;
				else if(tt == 2) d--,c--;
				else{
					d++;tt = 0;
				}
			}
			if(d == c && dem == 1) {
				dem = 2;d = 1;
			}
			if(d == c && dem == 2){
				dem = 3; d = 1; c = n-1;
			}
		}
	}
	cout<<"Just a legend\n";
}

