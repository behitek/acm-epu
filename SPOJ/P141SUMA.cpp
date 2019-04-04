#include <iostream>
using namespace std;

int main(){
	long int x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	long int ccw = (x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
	if(ccw > 0){
		cout<<"LEFT";
	}else{
		if(ccw < 0){
			cout<<"TOWARDS";
		}else{
			cout<<"RIGHT";
		}
	} 
}
