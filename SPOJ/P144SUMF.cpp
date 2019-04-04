#include <iostream>
using namespace std;
#include <string>
#include <math.h>
int main(){
	int x;
	cin>>x;
	string str;
	cin>>str;
	int count[2] = {0,0};
	for(int i = 0;i < str.length();i++){
		if(fabs(count[0]-count[1]) > x){
			count[0]--;
			break;
		}
		if(str[i] != str[i+1] && fabs(count[0]-count[1]) == x && i+1 < str.length()){
			if(count[0] > count[1] && str[i] != 'M' && str[i+1] == 'M' || count[1] > count[0] && str[i] != 'W' && str[i+1] == 'W'){
				swap(str[i],str[i+1]);
			}
		}
		if(str[i] == 'W') count[0]++;
		if(str[i] == 'M') count[1]++;
	}
	cout<<(count[0] + count[1])<<endl;
}
