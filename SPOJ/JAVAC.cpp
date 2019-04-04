#include <iostream>
using namespace std;
#include <string>
#include <cctype>

string convert(const string& s){
	bool java = false;
	bool cpp = false;
	string answer;
	int n = s.size();
	if(isupper(s[0]) || s[0] == '_' || s[n-1] == '_'){
		return "Error!";
	}
	for(int i = 0;i < n;i++){
		if(isupper(s[i])){
			cpp = true;
			answer += "_";
			answer += tolower(s[i]);
		}else if(s[i] == '_'){
			java = true;
			if(isupper(s[i+1]) || s[i+1] == '_'){
				return "Error!";
			}else
				answer += toupper(s[++i]);
		}else if(isalpha(s[i])){
			answer += s[i];
		}else{
			return "Error!";
		}
	}
	if(java != cpp || (!java && !cpp)){
		return answer;
	}else{
		return "Error!";
	}
}


int main(){
	do{
		string s;
		cin>>s;
		cout<<convert(s)<<endl;
	}while(cin);
}
