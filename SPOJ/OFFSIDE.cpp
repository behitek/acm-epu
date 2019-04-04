#include <iostream>
using namespace std;
#include <algorithm>
int main(){
	int a,d;
	do{
		cin>>a>>d;
		if(a == 0 && d == 0) break;
		int b[a],c[d],min;
		for(int i = 0;i < a;i++){
			cin>>b[i];
			if(i == 0) min = b[i];
			if(b[i] < min) min = b[i];
		}
		for(int i = 0;i < d;i++) cin>>c[i];
		sort(c,c+d);
		if(c[0] > min || c[1] > min){
			cout<<"Y"<<endl;
		}else{
			cout<<"N"<<endl;
		}
	}while(1);
}
