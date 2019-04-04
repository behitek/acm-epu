#include <iostream>
using namespace std;
#include <string.h>
int main(){
	int n;
	cin>>n;
	char c[3],s[3];
	strcpy(s,"");
	strcpy(c,"");
	int count = 0;
	while(n--){
		cin>>c;
		if(strcmp(c,s) != 0) count++;
		strcpy(s,c);
	}
	cout<<count<<endl;
}
