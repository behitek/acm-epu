#include <iostream>
using namespace std;

char check(char c){
	if(c < 65){
		return '\0';	
	}else if(c <= 67){
		return '2';
	}else if(c <= 70){
		return '3';
	}else if(c <= 73){
		return '4';
	}else if(c <= 76){
		return '5';
	}else if(c <= 79){
		return '6';
	}else if(c <= 83){
		return '7';
	}else if(c <= 86){
		return '8';
	}else if(c <= 90){
		return '9';
	}
}

int main(){
	int t,n;
	string s,ans;
	cin>>t;
	int ii = 1;
	while(t--){
		cin>>s;
		cout<<"Case #"<<(ii++)<<": ";
		n = s.length();
		ans = "";
		for(int i = 0;i < n;i++){
			ans += check(s[i]);
		}
		cout<<ans<<endl;
	}
}
