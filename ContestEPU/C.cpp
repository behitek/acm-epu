#include <bits/stdc++.h>
using namespace std;

int main(){
	int tt,m,n,x,y,ii = 1;
	cin>>tt;
	while(tt--){
		cin>>m>>n>>x>>y;
		int t = 0,r = n-1,l = 0,b = m-1,dem = 0;
		int i = 0, j = 0;
		int check = 0;
		while(check != 1){
			j = l;i = t;
			while(j <= r && check != 1){
				dem++;
				if(i == x-1 && j == y-1){
					check = 1;
					cout<<"Case #"<<(ii++)<<": "<<dem<<endl;
					break;
				}
				j++;
			}
			t++;
			i = t;j = r;
			while(i<= b && check != 1){
				dem++;
				if(i == x-1 && j == y-1){
					check = 1;
					cout<<"Case #"<<(ii++)<<": "<<dem<<endl;
					break;
				}
				i++;
			}
			r--;
			j = r;i = b;
			while(j >= l && check != 1){
				dem++;
				if(i == x-1 && j == y-1){
					check = 1;
					cout<<"Case #"<<(ii++)<<": "<<dem<<endl;
					break;
				}
				j--;
			}
			b--;
			i = b;j = l;
			while (i >= t && check != 1){
				dem++;
				if(i == x-1 && j == y-1){
					check = 1;
					cout<<"Case #"<<(ii++)<<": "<<dem<<endl;
					break;
				}
				i--;
			}
			l++;
		}
	}
}
