#include <iostream>
using namespace std;
#include <math.h>
#include <stdlib.h>
bool stg(int a){
	int t = sqrt(2*a);
	return t*(t+1) == 2*a;
}

int main(){
	int n;
	cin>>n;
	int k = 1;
	int a = (k+1)*k/2;
	int b = n-a;
	while(a <= b){
		if(stg(b)) cout<<"YES",exit(0);
		k++;
		a = (k+1)*k/2;b = n -a;
	}
	cout<<"NO";
}
