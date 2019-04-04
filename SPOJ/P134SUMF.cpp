#include <iostream>
using namespace std;
#include <math.h>
#include <stdlib.h>
int main(){
	int n,k;
	cin>>n>>k;
	int a[1001];
	for(int i = 2;i <= n;i++) a[i] = 1;
	int i = 2,dem = 0,j = 1;
	while(dem < k){
		while(a[i] != 1) i++;
		j = 1;
		while(i*j <= n){
			if(a[i*j] != 0){
				a[i*j] = 0;
				dem++;
				if(dem == k){
					cout<<i*j;exit(0);
				}
			}
			j++;
		}
		i++;
	}
}
