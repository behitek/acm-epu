#include <iostream>
using namespace std;
#include <math.h>
#include <string.h>

int daoso(char a[]){
	int sum = 0;
	int n = strlen(a);
	for(int i = 0;i < n;i++){
		sum += ((int)a[i] - 48)*pow(10,i);
	}
	return sum;
}

int main(){
	char a[100],b[100];
	cin>>a>>b;
	cout<<max(daoso(a),daoso(b));
}
