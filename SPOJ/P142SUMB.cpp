#include <bits/stdc++.h>
using namespace std;

int arr[1000005];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	arr[0] = 0;arr[1] = 1;
	for(int i = 2;i <= 1000000;i++){
		if(i%2 == 0) arr[i] = arr[i/2];
		else arr[i] = arr[i/2]+1;
	}
	int n;
	cin>>n;
	int a[n+5];
	int dem = 0;
	for(int i = 0;i < n;i++) cin>>a[i];
	for(int i = 0;i < n-1;i++){
		int a1 = a[i];
		int dem1 = 0;
		while(a1 > 1000000){
			if(a1 %2 != 0) dem1++;
			a1 /= 2;
		}
		for(int j = i+1;j < n;j++){
			int dem2 = 0;
			int a2 = a[j];
			while(a2 > 1000000){
			if(a2 %2 != 0) dem2++;
			a2 /= 2;
		}
			if(arr[a1]+dem1 == arr[a2] + dem2) dem++;
		}
	}
	cout<<dem<<endl;
}
