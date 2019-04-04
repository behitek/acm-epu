#include <iostream>
using namespace std;

int main(){
	int g,b;
	cin>>g>>b;
	int kq = 0;
	while(g != -1 && b != -1){
		if(b < g){
			if(g%(b+1) == 0) kq = g/(b+1);
			else kq = g/(b+1) + 1;
		
		}else if(b > g){
			if(b%(g+1) == 0) kq = b/(g+1);
			else kq = b/(g+1) + 1;
		}else{
			kq = (g == 0)?0:1;
		}
		cout<<kq<<endl;
		cin>>g>>b;
	}
}
