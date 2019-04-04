#include <iostream>
using namespace std;
#include <string>

string s;

void input(){
	cin>>s;
}

void process(){
	int i = 0;
	while(s.length() % 3 != 0) s = '0' + s;
	string str = "",result = "";
	while(i < s.length()){
		str += s[i];
		if(i % 3 == 2){
			if(str == "000") result += '0';
			else if(str == "001") result += '1';
			else if(str == "010") result += '2';
			else if(str == "011") result += '3';
			else if(str == "100") result += '4';
			else if(str == "101") result += '5';
			else if(str == "110") result += '6';
			else if(str == "111") result += '7';
			str = "";
		}
		i++;
	}
	cout<<result;
}

int main(){
	input();
	process();
}
