#include <iostream>
using namespace std;
#include <math.h>
int main(){
	long long n;
	long long result = 0;
	cin>>n;
	while( n!= 0){
		result = n*(n+1)*(2*n+1)/6;
		cout<<result<<endl;
		result = 0;
		cin>>n;
	}
}
