#include <iostream>
using namespace std;
#include <stdlib.h>
int a[3001],n;

void input(){
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		a[x] = 1;
	}
}

void process(){
	for(int i = 1;i <= 3001;i++){
		if(a[i] == 0){ 
			cout<<i;
			exit(0);
		}
	}
	cout<<(n+1);
}

int main(){
	input();
	process();
}
