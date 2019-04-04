#include <iostream>
using namespace std;

int main(){
	float x;
	cin>>x;
	while(x!= 0){
		int i = 2;
		float sum = 0;
		while(sum < x){
			sum += 1.0/i;
			i++;
		}
		cout<<(i-2)<<" card(s)"<<endl;
		cin>>x;
	}
}
