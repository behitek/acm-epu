#include <iostream>
using namespace std;
#include <stack>;

int main(){
	int t,n;
	stack<char> s;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		n = str.length();
		for(int i = 0;i < n;i++){
			if(str[i] == '('){
				s.push(str[i]);
			}else if(str[i] == ')'){
				while(s.top() != '('){
					cout<<s.top();s.pop();
				}
				s.pop();
			}else if(str[i] == '^' || str[i] == '/' || str[i] == '*' || str[i]=='+' || str[i] == '-'){
				s.push(str[i]);
			}else{
				cout<<str[i];
			}
		}
		while(!s.empty()){
			cout<<s.top();s.pop();
		}
		cout<<endl;
	}
}

