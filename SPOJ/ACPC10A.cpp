#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	do{
		cin>>a>>b>>c;
		if(a != 0 || b != 0 || c != 0){
			if(2*b == a+c) cout<<"AP "<<(c+(c-b))<<endl;
			else if(b*b == a*c && c%b == 0){
				cout<<"GP "<<(c*(c/b))<<endl;
			}
		}
	}while(a != 0 || b != 0 || c != 0);
}
