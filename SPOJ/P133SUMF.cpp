#include <iostream>
using namespace std;

int a,b,c;

void input(){
	cin>>a>>b>>c;
}

void process(){
	if(a > b) a = a + b - (b = a);
	if(a > c ) a = a + c - (c = a);
	if(b > c ) b = b + c - (c = b);
	if(c - b == b - a) cout<<(c + c - b);
	else if(c - b > b - a) cout<<(b + b - a);
	else cout<<(a + c - b);
}


int main(){
	input();
	process();
}
