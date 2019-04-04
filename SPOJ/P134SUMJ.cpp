#include<iostream>
using namespace std;
#include <string.h>

int getIndex(int _new, int press,int length){
	int a = _new - press%length;
	if(a < 0) a = length + a;
	if(a > length - 1) a = a - (length-1); 
	return a;
}

int main(){
	char s1[] = "abc";
	char s2[] = "def";
	char s3[] = "ghi";
	char s4[] = "jkl";
	char s5[] = "mno";
	char s6[] = "pqrs";
	char s7[] = "tuv";
	char s8[] = "wxyz";
	char c[110];
	cin>>c;
	
	while(strcmp(c,"#")){
		int a[strlen(c)+5];
		for(int i = 0;i < strlen(c);i++){
			if(c[i] > 64 && c[i] < 91){
				a[i] = -32;
				c[i] += 32;
			}
			else a[i] = 0;
		}
		for(int i = 0;i < strlen(c);i++){
			for(int j = 0;j < 4;j++){
				if(j < 3 && c[i] == s1[j]){
					c[i] = s1[getIndex(j,i+1,3)];
					c[i] += a[i];break;
				}else if(j < 3 && c[i] == s2[j]){
					c[i] = s2[getIndex(j,i+1,3)];
					c[i] += a[i];break;
				}else if(j < 3 && c[i] == s3[j]){
					c[i] = s3[getIndex(j,i+1,3)];
					c[i] += a[i];break;
				}else if(j < 3 && c[i] == s4[j]){
					c[i] = s4[getIndex(j,i+1,3)];
					c[i] += a[i];break;
				}else if(j < 3 && c[i] == s5[j]){
					c[i] = s5[getIndex(j,i+1,3)];
					c[i] += a[i];break;
				}else if(c[i] == s6[j]){
					c[i] = s6[getIndex(j,i+1,4)];
					c[i] += a[i];break;
				}else if(j < 3 && c[i] == s7[j]){
					c[i] = s7[getIndex(j,i+1,3)];
					c[i] += a[i];break;
				}else if(c[i] == s8[j]){
					c[i] = s8[getIndex(j,i+1,4)];
					c[i] += a[i];break;
				}
			}
		}
		cout<<c<<endl;
		cin>>c;
	}
}
