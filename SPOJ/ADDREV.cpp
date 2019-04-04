#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>

char* daoxau(char* s){
	char *str = new char[100];
	for(int i = 0;i < strlen(s);i++){
		str[i] = s[strlen(s)-i-1];
	}
	return str;
}

int main(){
	int n,temp,u=0;
	char *a,*b;
	a = new char[100];b = new char[100];
	cin>>n;
	while(n--){
		cin>>a>>b;
		a = daoxau(a);b = daoxau(b);
		int c = atoi(a) + atoi(b);
		while(c > 0){
			temp = c%10;
			c /= 10;
			a[u] = temp+'0';
			u++;
		}
		c = atoi(a);
		cout<<c<<endl;
		u=0;
	}
	delete a,b;
}
